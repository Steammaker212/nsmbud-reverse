#!/usr/bin/env python3
"""Query IDA for the pukupuku / bee-actor question.

Answers, with byte-level evidence:
  - which profiles exist and their IDs (WIU + Switch addresses)
  - where the pukupuku resource-name strings live in the Switch binary
  - what the actor factory / ctor / init look like
  - what the "model" field wiring looks like
"""
import json
import sys

from rpc import call


def show(label, method, params, timeout=120, limit=None):
    print(f"\n=== {label} ===")
    try:
        r = call(method, params, timeout)
    except Exception as e:
        print(f"  ERROR: {e}")
        return None
    text = r if isinstance(r, str) else json.dumps(r, indent=2)
    if limit:
        text = "\n".join(text.splitlines()[:limit])
    print(text)
    return r


if __name__ == "__main__":
    # 1. confirm database identity
    md = call("get_metadata", {}, 30)
    print("=== DB META ===")
    print(json.dumps(md, indent=2))
