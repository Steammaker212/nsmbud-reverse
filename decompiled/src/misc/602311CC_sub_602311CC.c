/* sub_602311CC
 * address: 0x602311CC   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602311CC(int result)
{
  int v1; // r4
  int v2; // r8
  int i; // r7
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r2
  _BYTE v8[72]; // [sp+0h] [bp-48h] BYREF

  v1 = result;
  v2 = FIELD_U32(result, 32);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = FIELD_U32(v1, 24);
      v5 = FIELD_U32(v1, 28);
      if ( i + v5 >= v4 )
        v5 -= v4;
      (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(**(_DWORD **)(v1 + 16) + 108))(
        FIELD_U32(v1, 16),
        *(_DWORD *)(FIELD_U32(v1, 20) + 112 * (i + v5)),
        v8);
      v6 = FIELD_U32(v1, 24);
      v7 = FIELD_U32(v1, 28);
      if ( i + v7 >= v6 )
        v7 -= v6;
      result = sub_602372C0(
                 FIELD_U32(v1, 20) + 112 * (i + v7) + 8,
                 *(_DWORD *)(FIELD_U32(v1, 20) + 112 * (i + v7) + 4),
                 v8,
                 1);
    }
  }
  return result;
}
