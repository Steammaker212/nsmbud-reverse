# worldmap_log

Logs every world map the game parses at boot, one line each:

```
KernelSvc OutputDebugString: [nsmbudx] worldmap W1: 72 points, 134 routes
```

Add it to a build while making a custom world: if the line for your world shows
fewer points or routes than your CSVs have, the game dropped rows (check the
size limits with `scripts/worldmap/wmtool.py check`). No code of its own; it is
`framework/worldmap`. See [docs/WORLDMAP.md](../../docs/WORLDMAP.md).
