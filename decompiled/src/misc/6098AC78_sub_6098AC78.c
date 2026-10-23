/* sub_6098AC78
 * address: 0x6098AC78   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6098AC78(const char *a1)
{
  int v1; // r0
  int v2; // r10
  int i; // r6
  nn__util__BinaryFileHeader *v4; // r0
  nn__util__BinaryFileHeader *v5; // r7
  int v6; // r4
  int FirstBlock; // r0
  int j; // r9
  _BYTE *v9; // r0
  _DWORD v10[16]; // [sp+0h] [bp-40h] BYREF

  v1 = sub_608649B0((int)v10, a1);
  v2 = sub_60864BD8(v1);
  if ( v2 >= 1 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = (nn__util__BinaryFileHeader *)sub_60864BE8(v10, 0, i);
      if ( *(_DWORD *)v4 == 1213419074 )
      {
        v5 = sub_6083D5D4(v4);
        v6 = *(_DWORD *)(nn__util__BinaryFileHeader__GetFirstBlock(v5) + 28);
        FirstBlock = nn__util__BinaryFileHeader__GetFirstBlock(v5);
        if ( v6 >= 1 )
        {
          for ( j = 0; j != v6; ++j )
          {
            v9 = *(_BYTE **)(*(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[0] + (j << 6)) + 104);
            if ( *v9 )
              sub_6083BD18((int)v9);
            FirstBlock = nn__util__BinaryFileHeader__GetFirstBlock(v5);
          }
        }
        if ( *(_BYTE *)(*(_DWORD *)(FIELD_U32(FirstBlock, 40) + 32) + 272) == 1 )
          sub_6083B278(FirstBlock);
      }
    }
  }
  nullsub_93();
}
