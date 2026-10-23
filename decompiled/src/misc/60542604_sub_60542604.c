/* sub_60542604
 * address: 0x60542604   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60542604(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r8
  int v5; // r6
  int i; // r2

  v2 = 1;
  if ( !FIELD_U8(a1, 3608) )
  {
    v2 = 0;
    v3 = sub_6047482C(a1 + 60, 0);
    v4 = v3;
    if ( v3 )
    {
      v5 = FIELD_U32(v3, 56);
      (*(void (__fastcall **)(int *))(dword_60CABE08 + 12))(&dword_60CABE08);
      (*(void (__fastcall **)(int *))(dword_60CABE08 + 12))(&dword_60CABE08);
      if ( dword_60CABE0C == v5 )
      {
LABEL_11:
        if ( (FIELD_U8(v4, 51) & 1) != 0 )
        {
          v2 = 1;
          FIELD_U8(a1, 3608) = 1;
        }
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(dword_60CABE0C + i - 1) == *(unsigned __int8 *)(v5 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(dword_60CABE0C + i - 1) )
            goto LABEL_11;
          if ( i > 0x80000 || *(unsigned __int8 *)(dword_60CABE0C + i) != *(unsigned __int8 *)(v5 + i) )
            break;
          if ( !*(_BYTE *)(dword_60CABE0C + i) )
            goto LABEL_11;
        }
      }
    }
  }
  return v2;
}
