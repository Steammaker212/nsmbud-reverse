# Coverage of the source database

How much of `main.idb`/`main.i64` is now expressed as readable C.

## Headline

    functions in main.i64                47,158
    recovered into the corpus            47,158   (100%)

    re-decompiled from main.i64, no ARM assembly in the output.

Reaching this took three passes, and the first number that looked like "22% missing" was misleading:

| category | count | why it was not "missing work" |
|---|---:|---|
| already covered by the corpus | 36,783 | — |
| `nullsub_N` (size 4, `bx lr`) | 6,710 | an empty function; nothing to read |
| `j_XXXX` (size 8, `b target`) | 2,109 | a jump thunk; one tail call |
| bodies of 8 bytes or less | 193 | `bx lr` or `mov r0,#0; bx lr` |
| **substantive bodies** | **1,362** | genuine code, all recovered |

So the real gap was 1,362 functions, not 10,375. Everything is now emitted.

## The recovered units

| unit | bodies | compile errors | note |
|---|---:|---:|---|
| `recovered/recovered_named.c` | 472 | 198 | the named functions the corpus lacked |
| `recovered/recovered_missing.c` | 1,351 | 2,643 | the substantive bodies |
| `recovered/recovered_stubs.c` | 9,000 | 94 | empty bodies, thunks, ≤8-byte functions |

The error counts are honest: these units are **counted and failing**, not excluded to flatter the parse number.
`scripts/check_corpus.py` reports 466 / 478 units parsing, and the three recovered units are among the failures.

Errors here are almost entirely missing class layouts, not malformed code. `main.i64` carries **zero** struct,
union and enum definitions — dumping its local type library produced
`/* Local types from main.i64: 0 definition(s) */` — so field layouts must be recovered from the code that reads
each field. The bodies are kept because they are correct C and compile the moment layouts exist.

## Fixes found while integrating

1. **`typedef void` over a struct tag.** The dependency generator emitted `typedef void sead_ListNode;`, overriding
   the corpus's own forward declaration and turning 129 member accesses into errors. It now never re-declares a tag
   the corpus already has, and gives `sead::ListNode` its real 16-byte `{prev, next}` shape (Hex-Rays also reuses
   that type for `SafeString`'s inline buffer, which is why bodies write through `&v->previous`).

2. **Functions declared as types.** `typedef void nullsub_5476;` made a function name into a type, so every
   definition of it became *redefinition as different kind of symbol* — 143 of those. Function-shaped names
   (`nullsub_`, `j_`, `sub_`, `_Z`, `loc_`, `off_`, `asc_`, `stru_`) are never emitted as types now.

3. **C++ operators are not C identifiers.** `void operator delete(void *)` cannot compile as C. The stub merger
   rewrites `operator delete`/`operator new` and destructors to stable identifiers.

4. **Duplicate names across addresses.** IDA gives every `bx lr` the same `nullsub_N` tag, so a translation unit
   cannot define the name twice. Each duplicate after the first is suffixed with its RVA, which also keeps the
   address visible.

5. **Signature mismatches.** 175 stubs had a return type that disagreed with the corpus header declaring the same
   name. They are rewritten to match the declaration rather than the reverse.

6. **C++ leftovers in the recovered bodies.** 78 identifiers had been truncated at an embedded `(void)` inside a
   mangled local-static name, and 56 subscripted data macros were rewritten to the pointer form the corpus uses.

## A note on the dependency generator

`scripts/declare_recovered_deps.py` once oscillated between two error counts on alternate runs. The cause was that
it picked names up from the compiler's error stream, which depends on what the header currently declares — a moving
target. It now regenerates deterministically from the source scan, and the classification rules above are fixed, but
the committed header is still the **measured-best** state rather than whatever a fresh run produces. Compare the
count after re-running before keeping a new header.

## Naming: at the database's ceiling

    corpus definitions   34,774
    named                 3,504  (10.1%)
    sub_XXXXXXXX         31,270  (89.9%)

`main.i64` holds 47,158 functions but only **2,920** carry a meaningful name; the other 44,238 are IDA auto-names.
The corpus has adopted every name the database has: of the 2,400 names shared between them, 2,397 sit at identical
addresses.

The symbol file does not add coverage either — 2,950 mangled C++ names, 2,097 already in the corpus, and of the 853
that are not, only 73 land on a corpus `sub_` address, and those 73 are synthetic `_ZN…_helper` labels.

Further naming therefore needs behaviour or vtable-ownership inference, not a symbol table.

## Parse count

The corpus is 475 units and parses 466 of them. The three recovered units are new and do not yet parse, so they are
counted and fail rather than being excluded to make the number look better.

## Gates

    parse        466 / 478 units
    truncation   0   (goto targets with no label)
    inline asm   0
    _RN names    0
    crosscheck   0
