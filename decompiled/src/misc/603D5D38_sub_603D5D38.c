/* sub_603D5D38
 * address: 0x603D5D38   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603D5D38(int a1, int a2, int a3)
{
  _DWORD *v6; // r7
  float v7; // r1
  int v8; // r2
  float v9; // s2
  float v10; // s4
  int v12; // [sp+4h] [bp-34h] BYREF
  _DWORD v13[3]; // [sp+8h] [bp-30h] BYREF
  float v14; // [sp+14h] [bp-24h] BYREF

  v6 = (_DWORD *)(a1 + 6148);
  FIELD_U32(a1, 6148) |= 0x10000u;
  if ( (FIELD_U8(a1, 22) & 1) != 0 )
  {
    v14 = 0.0;
    v7 = FIELD_F32(a1, 112);
    v8 = FIELD_U32(a1, 116);
    v13[0] = FIELD_U32(a1, 108);
    v13[2] = v8;
    *(float *)&v13[1] = v7 + 4.0;
    ((void (__fastcall *)(int *, float *, _DWORD *, _DWORD))checkLiquidCollisions)(
      &v12,
      &v14,
      v13,
      FIELD_U8(a1, 86));
    if ( v12 )
    {
      v9 = FIELD_F32(a1, 112);
      if ( v14 > (float)(v9 + 4.0) )
      {
        v10 = FIELD_F32(a1, 576);
        if ( v14 <= (float)((float)(v9 + v10) + 8.0) )
        {
          FIELD_F32(a1, 112) = v14 - v10;
          *v6 &= ~0x10000u;
        }
      }
    }
  }
  return Enemy__collisionIceball((Enemy *)a1, a2, a3);
}
