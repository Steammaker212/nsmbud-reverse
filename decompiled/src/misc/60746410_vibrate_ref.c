/* vibrate_ref
 * address: 0x60746410   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall vibrate_ref(int a1)
{
  _DWORD *v2; // r0
  int v3; // r0
  int v4; // r0
  float v5; // s20
  float v6; // s22
  float v7; // s18
  int v8; // r0
  float v9; // s16
  float v10; // s24
  float v11; // s18
  int v12; // s0
  float result; // s0
  _DWORD v14[16]; // [sp+0h] [bp-40h] BYREF

  v2 = *(_DWORD **)(a1 + 644);
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "vibrate";
  v3 = sub_60421AE4(v2, (int)v14, 1, 1.0, 0.0);
  FIELD_U32(a1, 648) = sub_6074C8F4(v3);
  FIELD_U32(a1, 680) = 0;
  FIELD_F32(a1, 684) = sub_6074C8FC();
  FIELD_U32(a1, 688) = 0;
  v5 = FIELD_F32(a1, 660) - FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 656) - FIELD_F32(a1, 108);
  v7 = sqrtf((float)(v5 * v5) + (float)(v6 * v6));
  if ( v7 > 0.0 )
  {
    v5 = v5 * (float)(1.0 / v7);
    v6 = v6 * (float)(1.0 / v7);
  }
  v8 = sub_6074C8F4(v4);
  v9 = FIELD_F32(a1, 116);
  v10 = FIELD_F32(a1, 664);
  v11 = v7 / (float)v8;
  v12 = sub_6074C8F4(v8);
  FIELD_F32(a1, 120) = v6 * v11;
  FIELD_F32(a1, 124) = v5 * v11;
  result = (float)(v10 - v9) / (float)v12;
  FIELD_F32(a1, 128) = result;
  FIELD_U32(a1, 144) = 1008981770;
  FIELD_U32(a1, 148) = 1008981770;
  FIELD_U32(a1, 152) = 1008981770;
  return result;
}
