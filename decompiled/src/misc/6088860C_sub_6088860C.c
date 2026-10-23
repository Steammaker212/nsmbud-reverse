/* sub_6088860C
 * address: 0x6088860C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088860C(int a1, int a2)
{
  int v4; // r0
  int v5; // r8
  int v6; // r2
  int v7; // r6
  _BOOL4 v8; // r0
  int v10; // r7

  if ( !*(_BYTE *)a1 )
    return 0;
  v4 = FIELD_U32(a1, 16);
  if ( !*(_BYTE *)(v4 + 372 * a2) )
  {
    v5 = *(_DWORD *)(FIELD_U32(a1, 4) + 32) + (a2 << 6);
    v6 = *(_DWORD *)(v5 + dword_60BF9D80[0]);
    v7 = *(_DWORD *)(v5 + dword_60BF9D88);
    if ( v6 )
      v8 = sub_6083B4F8(FIELD_U32(v6, 104), *(_DWORD **)(a1 + 12), v6) != 0;
    else
      v8 = 1;
    v10 = 0;
    if ( v7 )
    {
      if ( v8 )
      {
        sub_6083B4F8(FIELD_U32(v7, 104), *(_DWORD **)(a1 + 12), v7);
        v10 = 2;
      }
    }
    sub_608A4CFC(FIELD_U32(a1, 16) + 372 * a2);
    sub_608A4D08(FIELD_U32(a1, 16) + 372 * a2, v5, v10);
    sub_608A4D34(FIELD_U32(a1, 16) + 372 * a2);
    sub_608A5070(FIELD_U32(a1, 16) + 372 * a2);
    FIELD_U32(a1, 8) = v10;
    v4 = FIELD_U32(a1, 16);
  }
  return v4 + 372 * a2;
}
