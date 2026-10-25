"""Minimal JSON-RPC client for a live IDA session running ida-pro-mcp.

The ida-pro-mcp plugin serves JSON-RPC on 127.0.0.1:13337. Talking to it
directly keeps the pipeline scriptable without an MCP host in between.

Reads are always allowed. Writes go through `IDA.write()`, which refuses to run
unless the database IDA has open is the one named by `--expect-db` (matched on
the path's file stem). The authoritative database is RicBent's `main`; type and
name experiments belong on a saved-as copy, and this guard is what keeps a
mistyped command from landing in the original.
"""
from __future__ import annotations

import json
import urllib.request
from pathlib import PureWindowsPath

DEFAULT_URL = "http://127.0.0.1:13337/mcp"
PROTECTED_STEMS = {"main"}


class RpcError(RuntimeError):
    pass


class IDA:
    def __init__(self, url: str = DEFAULT_URL, expect_db: str | None = None):
        self.url = url
        self.expect_db = expect_db
        self._write_ok: bool | None = None

    def call(self, method: str, *params, timeout: float = 120):
        body = json.dumps({"jsonrpc": "2.0", "method": method,
                           "params": list(params), "id": 1}).encode()
        req = urllib.request.Request(self.url, data=body,
                                     headers={"Content-Type": "application/json"})
        reply = json.loads(urllib.request.urlopen(req, timeout=timeout).read())
        if "error" in reply:
            raise RpcError(f"{method}: {reply['error'].get('message', reply['error'])}")
        return reply["result"]

    def db_path(self) -> str:
        return self.call("get_metadata")["path"]

    def check_writable(self) -> None:
        stem = PureWindowsPath(self.db_path()).stem
        if not self.expect_db:
            raise RpcError("refusing to write: pass --expect-db <stem of the copy IDA has open>")
        if stem in PROTECTED_STEMS:
            raise RpcError(f"refusing to write: IDA has the original database '{stem}' open")
        if stem != self.expect_db:
            raise RpcError(f"refusing to write: IDA has '{stem}' open, expected '{self.expect_db}'")
        self._write_ok = True

    def write(self, method: str, *params):
        if not self._write_ok:
            self.check_writable()
        return self.call(method, *params)

    def functions(self):
        out, off = [], 0
        while True:
            page = self.call("list_functions", off, 5000)
            out += page["data"]
            off = page.get("next_offset")
            if not off:
                return out
