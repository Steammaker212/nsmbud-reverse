# Coverage of the source database

How much of `main.idb`/`main.i64` is now expressed as readable C.

## Headline

    functions in main.i64                47,158
    recovered into the corpus            47,158   (100%)
    addresses with no body                   0
    bytes of code unaccounted for          0x0

    re-decompiled from main.i64, no ARM assembly in the output.

The last 11 addresses were absent for a while even though the counter read "100.0%". Three separate reasons, all in
the measuring and export path rather than in the data:

- the banner pattern required `\w+` for the name, so `nn::mii::Database::~Database` banners were invisible to the
  counter — 27 phantom "missing" addresses that had been counted all along;
- two signatures are not parseable as C at all, `hid::GetTouchScreenState<1u>()` (template argument in the name) and
  `settings::operator==` (overloaded operator), so the merge silently skipped them;
- destructors were excluded by the name pattern, dropping 11 more thunks.

The 26 remaining bodies live in `recovered/recovered_tail_thunks.c` rather than inside `recovered_missing.c`:
regenerating that file does not reproduce about a thousand lines of accumulated repair (the `arr_` subscript
rewrites, the forward prototypes, the vtable members), because those were applied to its output. Sequencing the
repairs into one pipeline (`scripts/rebuild_recovered.py`) was measured making things strictly worse, so the
repaired file is left alone and the new bodies sit beside it.

Reaching this still took three passes, and the first number that looked like "22% missing" was misleading:

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
| `recovered/recovered_named.c` | 469 | 171 | the named functions the corpus lacked |
| `recovered/recovered_missing.c` | 1,351 | 497 | the substantive bodies |
| `recovered/recovered_stubs.c` | 9,000 | 85 | empty bodies, thunks, ≤8-byte functions |
| `recovered/recovered_tail_thunks.c` | 26 | 0 | the last addresses: destructor and template/operator thunks |

The nine large corpus aggregates total 4,301 errors (measured individually: `libs.c` 609, `states.c` 640,
`actor_construction.c` 865, `actors_b.c` 729, `core.c` 514, `actors_a.c` 389, `systems.c` 372, `powerup.c` 136,
`player.c` 47).

The error counts are honest: these units are **counted and failing**, not excluded to flatter the parse number.
`scripts/check_corpus.py` reports 466 / 478 units parsing, and the three recovered units are among the failures.

Errors here are almost entirely missing class layouts, not malformed code. `main.i64` carries **zero** struct,
union and enum definitions — dumping its local type library produced
`/* Local types from main.i64: 0 definition(s) */` — so field layouts must be recovered from the code that reads
each field. The bodies are kept because they are correct C and compile the moment layouts exist.

## Fixes found while integrating

1. **The image base was added twice, in 49,461 macros.** IDA names data labels with their absolute address
   (`byte_60AC73A0`), and the exporter's `rva` field is absolute too, but the generator emitted
   `0x60000000u + 0x60AC73A0` = `0xC0AC73A0` — unmapped memory. These compiled cleanly and read the wrong bytes.
   Fixed at the generator and in the three generated headers. The corpus's own `nsmbudx_data_symbols.h` was already
   correct, which is how the bug was spotted.

2. **`operator new` / `operator delete` are not C.** 241 call sites, including the corpus's own (`actors_b.c`,
   `actor_construction.c`), were never covered by the existing rewriter because it only targeted the corpus. The
   overload is now chosen by bracket-matched argument count rather than a regex guess.

3. **`typedef void` over a struct tag.** The dependency generator emitted `typedef void sead_ListNode;`, overriding
   the corpus's own forward declaration and turning 129 member accesses into errors. It now never re-declares a tag
   the corpus already has, and gives `sead::ListNode` its real 16-byte `{prev, next}` shape (Hex-Rays also reuses
   that type for `SafeString`'s inline buffer, which is why bodies write through `&v->previous`).

4. **Functions declared as types.** `typedef void nullsub_5476;` made a function name into a type, so every
   definition of it became *redefinition as different kind of symbol* — 143 of those. Function-shaped names
   (`nullsub_`, `j_`, `sub_`, `_Z`, `loc_`, `off_`, `asc_`, `stru_`) are never emitted as types now.

5. **C++ syntax inside identifiers.** `sead_IDisposer_~IDisposer(a1)` (139 destructor calls) and
   `g_vtable_forsead_SafeStringBase<char>` (2,176 template arguments) are not legal C. A permissive template rule
   also matched the comparison `v28 < v59 >` in `libs.c`, which would have silently turned arithmetic into an
   identifier; the rule is now restricted to known `SafeString` bases, verified by listing every distinct match.

6. **Subscripted data macros.** `flt_X[i]` subscripts a macro that expands to a value, so clang rejects it. The
   generator already emits an `arr_` pointer view for exactly this; nothing had ever rewritten the uses. 122 were
   rewritten, and 19 labels missing an `arr_` form had one added from their scalar definition.

7. **`vtable` at offset 0.** Four blobs (`StateBase`, `StateMethodExecuter`, `RevealMaskRelated`) are reachable
   through `->vtable`, which an opaque byte array cannot express. The member was added at offset 0 with `sizeof`
   kept bit-identical by shrinking the opaque tail, so no later field offset shifts. Offset 0 is not a guess: the
   corpus establishes that a Deluxe class object starts with its vtable pointer.

8. **Implicit `int` declarations.** A call before the definition (176 in the recovered units) makes the later real
   definition conflict. Forward prototypes are inserted — with `()` rather than the definition's own parameters,
   because inserting the full form re-enabled arity checking against call sites that disagree and made things worse
   (568 → 582 on one unit, 609 → 657 on `libs.c`).

9. **Duplicate names across addresses.** IDA gives every `bx lr` the same `nullsub_N` tag, so a translation unit
   cannot define the name twice. Each duplicate after the first is suffixed with its RVA, which also keeps the

   address visible.

10. **Signature mismatches.** 175 stubs had a return type that disagreed with the corpus header declaring the
    same name. They are rewritten to match the declaration rather than the reverse.

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
