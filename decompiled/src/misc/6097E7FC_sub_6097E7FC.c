/* sub_6097E7FC
 * address: 0x6097E7FC   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097E7FC(float32x4_t *a1, _DWORD *a2, int a3, int a4)
{
  int result; // r0
  bool v8; // zf
  int v9; // r3
  int v10; // r5
  int v11; // r6
  int v12; // r7
  int v13; // r3
  int v14; // r5
  int v15; // r6
  int v16; // r7
  int v17; // r3
  int v18; // r4
  int v19; // r5
  int v20; // r6
  int v21; // r7
  int v22; // r0
  __int64 *v23; // r0
  __int64 v24; // d16
  __int64 v25; // d17
  __int64 *v26; // r1
  __int64 v27; // d18
  __int64 v28; // d19
  __int64 v29; // d22
  __int64 v30; // d23
  __int64 v31; // d20
  __int64 v32; // d21
  float32x2_t v33; // d0
  int v34; // r0
  char v36; // [sp+Ch] [bp-15Ch]
  _QWORD v37[8]; // [sp+10h] [bp-158h] BYREF
  _BYTE v38[172]; // [sp+54h] [bp-114h] BYREF
  int v39[26]; // [sp+100h] [bp-68h] BYREF

  if ( a1[10].n128_u8[11] || (result = a1[10].n128_u8[12]) != 0 )
  {
    result = a1[4].n128_u8[0];
    v8 = (result & 1) == 0;
    if ( (result & 1) != 0 )
    {
      result = a1[4].n128_u8[1];
      v8 = result == 0;
    }
    if ( !v8 )
    {
      a1[10].n128_u8[13] = 1;
      v36 = FIELD_U8(a3, 23);
      FIELD_U8(a3, 23) = 0;
      FIELD_U8(a3, 28) = 0;
      v9 = a2[5];
      v10 = a2[6];
      v11 = a2[7];
      v12 = a2[8];
      v39[0] = a2[4];
      v39[1] = v9;
      v39[2] = v10;
      v39[3] = v11;
      v39[4] = v12;
      v13 = a2[10];
      v14 = a2[11];
      v15 = a2[12];
      v16 = a2[13];
      v39[5] = a2[9];
      v39[6] = v13;
      v39[7] = v14;
      v39[8] = v15;
      v39[9] = v16;
      v17 = a2[15];
      v18 = a2[16];
      v19 = a2[17];
      v20 = a2[18];
      v21 = a2[19];
      v39[10] = a2[14];
      v39[11] = v17;
      v39[12] = v18;
      v39[13] = v19;
      v39[14] = v20;
      v39[15] = v21;
      v22 = sub_6090C77C(
              (int)v38,
              0.0,
              300.0,
              a1[3].n128_f32[3] * 0.5,
              a1[3].n128_f32[3] * -0.5,
              a1[3].n128_f32[2] * -0.5,
              a1[3].n128_f32[2] * 0.5);
      v23 = (__int64 *)sub_6090BE54(v22);
      v24 = v23[6];
      v25 = v23[7];
      v26 = v23 + 4;
      v27 = *v23;
      v28 = v23[1];
      v23 += 2;
      v29 = *v23;
      v30 = v23[1];
      v31 = *v26;
      v32 = v26[1];
      v37[0] = v27;
      v37[1] = v28;
      v37[2] = v29;
      v37[3] = v30;
      v37[4] = v31;
      v37[5] = v32;
      v37[6] = v24;
      v37[7] = v25;
      sub_6085402C((int)a2, (int *)v37);
      sub_60858D50(a1, (int)a2, a3, a4, v33);
      sub_6085402C((int)a2, v39);
      nullsub_113();
      FIELD_U8(a3, 23) = v36;
      v34 = a1[10].n128_u8[10];
      if ( FIELD_U8(a3, 28) )
        result = v34 | 0x40;
      else
        result = v34 & 0xBF;
      a1[10].n128_u8[10] = result;
    }
  }
  return result;
}
