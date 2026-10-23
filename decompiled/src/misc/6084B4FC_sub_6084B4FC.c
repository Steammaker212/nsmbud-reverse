/* sub_6084B4FC
 * address: 0x6084B4FC   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084B4FC(int a1)
{
  int result; // r0
  int FirstBlock; // r6

  result = FIELD_U32(a1, 132);
  if ( result >= 1 )
  {
    if ( FIELD_U8(a1, 832) )
      sub_60835494(a1 + 832);
    if ( FIELD_U8(a1, 760) )
      sub_60835494(a1 + 760);
    if ( FIELD_U8(a1, 616) )
      sub_60835494(a1 + 616);
    if ( FIELD_U8(a1, 688) )
      sub_60835494(a1 + 688);
    if ( FIELD_U8(a1, 600) )
      sub_60836614(a1 + 328);
    if ( FIELD_U8(a1, 904) )
      sub_6083B4C8(a1 + 904);
    if ( FIELD_U8(a1, 136) )
      sub_6083CD6C((_BYTE *)(a1 + 136));
    if ( FIELD_U8(a1, 168) )
      sub_6083CD6C((_BYTE *)(a1 + 168));
    if ( FIELD_U8(a1, 200) )
      sub_6083CD6C((_BYTE *)(a1 + 200));
    if ( FIELD_U8(a1, 232) )
      sub_6083CD6C((_BYTE *)(a1 + 232));
    if ( FIELD_U8(a1, 264) )
      sub_6083CD6C((_BYTE *)(a1 + 264));
    if ( FIELD_U8(a1, 296) )
      sub_6083CD6C((_BYTE *)(a1 + 296));
    FirstBlock = nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)(a1 + 4));
    sub_6083BD18(*(_DWORD *)(*(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[FIELD_U32(a1, 8)]) + 104));
    sub_6083BD18(*(_DWORD *)(*(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[FIELD_U32(a1, 8)] + 64) + 104));
    sub_6083BD18(*(_DWORD *)(*(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[FIELD_U32(a1, 8)] + 128) + 104));
    sub_6083BD18(*(_DWORD *)(*(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[FIELD_U32(a1, 8)] + 192) + 104));
    sub_6083BD18(*(_DWORD *)(*(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[FIELD_U32(a1, 8)] + 256) + 104));
    sub_6083BD18(*(_DWORD *)(*(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[FIELD_U32(a1, 8)] + 320) + 104));
    sub_6083B278(FirstBlock);
    FIELD_U32(a1, 132) = 0;
    return 0;
  }
  return result;
}
