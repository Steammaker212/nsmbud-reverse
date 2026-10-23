/* sub_6041A338
 * address: 0x6041A338   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

nn__util__BinaryFileHeader *__fastcall sub_6041A338(int *a1, int a2)
{
  nn__util__BinaryFileHeader *v3; // r8
  int FirstBlock; // r6
  int v5; // r1
  int v6; // r2
  int v7; // r7

  v3 = (nn__util__BinaryFileHeader *)sub_6083D5D4(a2);
  FirstBlock = nn__util__BinaryFileHeader__GetFirstBlock(v3);
  v5 = FIELD_U32(FirstBlock, 32);
  v6 = 0;
  if ( !*(_DWORD *)(v5 + dword_60BF9D80[0]) )
  {
    v6 = 1;
    if ( !*(_DWORD *)(v5 + dword_60BF9D84) )
    {
      v6 = 2;
      if ( !*(_DWORD *)(v5 + dword_60BF9D88) )
      {
        v6 = 3;
        if ( !*(_DWORD *)(v5 + dword_60BF9D8C) )
          v6 = 2;
      }
    }
  }
  *a1 = v6;
  sub_6083B088(FirstBlock);
  if ( FIELD_S32(FirstBlock, 28) >= 1 )
  {
    v7 = 0;
    do
      sub_6083B4F8(
        *(_DWORD *)(*(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[*a1] + (v7++ << 6)) + 104),
        FIELD_U32(dword_60CCFC8C, 24));
    while ( v7 < FIELD_U32(FirstBlock, 28) );
  }
  return v3;
}
