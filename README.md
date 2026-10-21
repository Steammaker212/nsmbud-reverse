# Wii U reference trees

This branch vendors the **Wii U original** (*New Super Mario Bros. U*) decompilation
and headers as read-only reference material. It is deliberately kept **off** the
`main` branch, which holds only our Deluxe (Switch) findings.

| Path | Upstream | What it is |
|---|---|---|
| `refs/red-pro2/` | [aboood40091/red-pro2](https://github.com/aboood40091/red-pro2) | NSMBU decompilation - reference for class layout and semantics |
| `refs/NSMBU-Headers/` | [aboood40091/NSMBU-Headers](https://github.com/aboood40091/NSMBU-Headers) | Matching C++ headers |

Both trees are copied verbatim at the commit each clone was checked out to, with
the nested `.git` directories removed so they are plain files here. They remain
the work of **aboood40091** and are not authored by this project.

## Important

**Nothing in these trees describes the Switch binary.** They target the Wii U
build of NSMBU. Class layouts, member offsets, vtable slots, and build flags do
*not* carry over to Deluxe. Use them for naming and intent, then verify every
offset against the Deluxe `main` module as pinned in the `main` branch README.

## How to use this branch

Read-only reference checkout, alongside the main branch work:

```bash
git worktree add ../wiiu-ref wiiu-reference
```

Refresh from upstream:

```bash
git clone https://github.com/aboood40091/red-pro2 /tmp/red-pro2
```

## Licensing

These trees carry their upstream projects' own terms. See
`refs/red-pro2/README.md` and the `LICENSE` file in `refs/NSMBU-Headers/` if
present. No game assets or executables are included on this branch either -
see NOTICE.md on `main`.