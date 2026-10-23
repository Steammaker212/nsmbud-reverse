/* sub_607DCE58
 * address: 0x607DCE58   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DCE58(int a1)
{
  int v2; // r3
  float v3; // s0
  int v4; // r0
  float v5; // s16
  float v6; // s18
  int v7; // r6
  int i; // r7
  int v9; // r5
  int v10; // r0
  float v11; // s0
  float *v12; // r1
  float v13; // s2
  float v14; // s2
  int v15; // r2
  int result; // r0
  float v17; // s0
  float *v18; // r1
  float v19; // s2
  float v20; // s2
  int v21; // r2
  float v22; // [sp+0h] [bp-48h] BYREF
  float v23; // [sp+4h] [bp-44h]
  float v24; // [sp+8h] [bp-40h]
  float v25; // [sp+Ch] [bp-3Ch]

  v3 = sub_607DBF74(FIELD_U32(a1, 20));
  v4 = FIELD_U32(a1, 72);
  v5 = (float)(v3 * FIELD_F32(a1, 76)) * FIELD_F32(a1, 80);
  if ( v4 )
    v5 = v5 * FIELD_F32(v4, 4);
  v6 = FIELD_F32(a1, 84) * FIELD_F32(a1, 88);
  v7 = 0;
  for ( i = 0; i != 288; i += 32 )
  {
    v9 = a1 + 2 * v7;
    v10 = FIELD_U32(v9, 388);
    if ( v10 )
    {
      v11 = *(float *)(FIELD_U32(a1, 20) + v7 + 16576);
      v12 = (float *)(a1 + i);
      v23 = v6 * *(float *)(a1 + i + 104);
      v13 = 0.0;
      if ( !FIELD_U8(a1, 97) )
        v13 = v11 * (float)(v5 * v12[25]);
      v22 = v13;
      v25 = v6 * v12[28];
      v14 = 0.0;
      v15 = FIELD_U8(a1, 96);
      if ( !FIELD_U8(a1, 96) )
        v14 = v11 * (float)(v5 * v12[27]);
      v24 = v14;
      nn__hid__VibrationNodeConnection__SetModulation(v10, &v22, v15, v2);
    }
    result = FIELD_U32(v9, 392);
    if ( result )
    {
      v17 = *(float *)(FIELD_U32(a1, 20) + v7 + 16576);
      v18 = (float *)(a1 + i);
      v23 = v6 * *(float *)(a1 + i + 120);
      v19 = 0.0;
      if ( !FIELD_U8(a1, 97) )
        v19 = v17 * (float)(v5 * v18[29]);
      v22 = v19;
      v25 = v6 * v18[32];
      v20 = 0.0;
      v21 = FIELD_U8(a1, 96);
      if ( !FIELD_U8(a1, 96) )
        v20 = v17 * (float)(v5 * v18[31]);
      v24 = v20;
      result = nn__hid__VibrationNodeConnection__SetModulation(result, &v22, v21, v2);
    }
    v7 += 4;
  }
  return result;
}
