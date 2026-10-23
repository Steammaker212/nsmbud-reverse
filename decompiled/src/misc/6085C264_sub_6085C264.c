/* sub_6085C264
 * address: 0x6085C264   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085C264(int a1, int a2, int a3)
{
  int FirstBlock; // r0

  FirstBlock = nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)a1);
  sub_60835BF8(
    a2,
    *(_DWORD *)(*(_DWORD *)(FIELD_U32(FirstBlock, 32) + (a3 << 6) + dword_60BF9D80[FIELD_U32(a1, 4)]) + 104),
    63);
  return sub_60835BA8(a2, (_DWORD *)(FIELD_U32(a1, 8) + 32 * a3));
}
