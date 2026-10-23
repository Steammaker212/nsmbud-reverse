/* sub_602F389C
 * address: 0x602F389C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F389C(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r0
  float v5; // s0
  int v6; // r0
  float v8[3]; // [sp+0h] [bp-20h] BYREF
  int v9; // [sp+Ch] [bp-14h] BYREF

  v2 = FIELD_U8(a1, 53);
  v3 = v2 - 1;
  if ( (unsigned int)(v2 - 1) < 8 && ((0xE5u >> v3) & 1) != 0 )
    return dword_60AF7AC0[v3];
  v4 = FIELD_U32(a1, 60);
  v5 = FIELD_F32(v4, 112) + FIELD_F32(v4, 576);
  v8[0] = FIELD_F32(v4, 108) + FIELD_F32(v4, 572);
  v8[1] = v5;
  v8[2] = 0.0;
  ((void (__fastcall *)(int *, _DWORD, float *, _DWORD))checkLiquidCollisions)(
    &v9,
    0,
    v8,
    FIELD_U8(v4, 86));
  if ( v9 )
    return FIELD_U8(a1, 54);
  v6 = FIELD_U32(a1, 60);
  if ( (FIELD_U8(v6, 6150) & 2) != 0 || !sub_60003460(v6) )
  {
    v2 = 2;
    if ( sub_602F43B8(a1) )
      return 3;
  }
  return v2;
}
