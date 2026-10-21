#!/usr/bin/env python3
"""Tiny JSON-RPC client for the local IDA Pro MCP plugin on 127.0.0.1:13337."""
import json
import sys
import urllib.request

URL = "http://127.0.0.1:13337/mcp"


def call(method, params=None, timeout=300):
    payload = json.dumps({"jsonrpc": "2.0", "id": 1, "method": method, "params": params or {}}).encode()
    req = urllib.request.Request(URL, data=payload, headers={"Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=timeout) as resp:
        data = json.loads(resp.read().decode())
    if "error" in data:
        raise RuntimeError(data["error"])
    return data.get("result")


if __name__ == "__main__":
    method = sys.argv[1]
    params = json.loads(sys.argv[2]) if len(sys.argv) > 2 else {}
    timeout = int(sys.argv[3]) if len(sys.argv) > 3 else 300
    result = call(method, params, timeout)
    text = json.dumps(result, indent=2) if not isinstance(result, str) else result
    if len(sys.argv) > 4:
        with open(sys.argv[4], "w", encoding="utf-8") as f:
            f.write(text)
        print(f"wrote {len(text)} bytes to {sys.argv[4]}")
    else:
        print(text)
