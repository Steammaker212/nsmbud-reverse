/* sub_602342AC
 * address: 0x602342AC   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602342AC(int a1, int a2, int a3, int a4)
{
  int v8; // r11
  int result; // r0
  int v10; // r8
  int i; // r4
  int v12; // r3
  int v13; // r2
  int v14; // r1
  int v15; // r2
  _BYTE v16[84]; // [sp+Ch] [bp-54h] BYREF

  v8 = a1 + 20;
  result = sub_602359B0(a1 + 20);
  v10 = FIELD_U32(a1, 124);
  if ( v10 )
  {
    for ( i = 0; i != v10; ++i )
    {
      v12 = FIELD_U32(a1, 120);
      v13 = FIELD_U32(a1, 116);
      if ( i + v12 >= v13 )
        v12 -= v13;
      (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(**(_DWORD **)(a1 + 16) + 108))(
        FIELD_U32(a1, 16),
        *(_DWORD *)(FIELD_U32(a1, 112) + 72 * (i + v12) + 36),
        v16);
      v14 = FIELD_U32(a1, 116);
      v15 = FIELD_U32(a1, 120);
      if ( i + v15 >= v14 )
        v15 -= v14;
      result = sub_60234B78(FIELD_U32(a1, 112) + 72 * (i + v15), a2, a3, a4, v16, v8);
    }
  }
  return result;
}
