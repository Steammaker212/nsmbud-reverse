/* sub_606591E8
 * address: 0x606591E8   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606591E8(int a1)
{
  float v2; // r0
  float *v3; // r5
  float v4; // s0
  float v5; // s1
  float v6; // s6
  float v7; // s13
  float v8; // s2
  float v9; // s14
  float v10; // s1
  float v11; // s7
  float v12; // s3
  float v13; // s4
  float v14; // s0
  float v15; // s4
  float v16; // s10
  float v18[2]; // [sp+0h] [bp-B0h] BYREF
  char v19; // [sp+8h] [bp-A8h]
  float v20[2]; // [sp+Ch] [bp-A4h] BYREF
  char v21; // [sp+14h] [bp-9Ch]
  float v22; // [sp+18h] [bp-98h] BYREF
  float v23; // [sp+1Ch] [bp-94h]
  float v24; // [sp+20h] [bp-90h]
  float v25; // [sp+24h] [bp-8Ch]
  float v26; // [sp+28h] [bp-88h]
  float v27; // [sp+2Ch] [bp-84h]
  float v28; // [sp+30h] [bp-80h]
  float v29; // [sp+34h] [bp-7Ch]
  float v30[12]; // [sp+48h] [bp-68h] BYREF
  float v31; // [sp+78h] [bp-38h] BYREF
  float v32; // [sp+7Ch] [bp-34h]
  int v33; // [sp+80h] [bp-30h]

  v2 = FIELD_F32(a1, 112);
  v33 = FIELD_U32(a1, 116);
  v32 = v2;
  v3 = (float *)(a1 + 108);
  v31 = FIELD_F32(a1, 108);
  v22 = 0.0;
  if ( sub_606CA124(a1, &v31, &v22, 48) != 1 )
  {
    v31 = FIELD_F32(a1, 108);
    v32 = FIELD_F32(a1, 112);
    v33 = FIELD_U32(a1, 116);
    v22 = FIELD_F32(a1, 164);
  }
  sub_6083279C((int)v30, (unsigned int *)&v22);
  sub_6083279C((int)&v22, (unsigned int *)(a1 + 164));
  v4 = FIELD_F32(a1, 6716);
  v5 = FIELD_F32(a1, 6724);
  v6 = FIELD_F32(a1, 6712);
  v7 = FIELD_F32(a1, 6720);
  v8 = FIELD_F32(a1, 112);
  v9 = v29 + (float)((float)((float)(v5 * v27) + (float)(v7 * v26)) + (float)(v28 * 0.0));
  v10 = v25 + (float)((float)((float)(v5 * v23) + (float)(v7 * v22)) + (float)(v24 * 0.0));
  v11 = (float)(v29 + (float)((float)((float)(v4 * v27) + (float)(v6 * v26)) + (float)(v28 * 0.0))) + v8;
  v12 = (float)(v30[7] + (float)((float)((float)(v4 * v30[5]) + (float)(v6 * v30[4])) + (float)(v30[6] * 0.0))) + v32;
  if ( v12 >= v11 )
  {
    v16 = (float)(v4 * v30[1]) + (float)(v6 * v30[0]);
    v14 = *v3;
    v15 = (float)(v30[3] + (float)(v16 + (float)(v30[2] * 0.0))) + v31;
  }
  else
  {
    v13 = (float)(v4 * v23) + (float)(v6 * v22);
    v14 = *v3;
    v12 = v11;
    v15 = (float)(v25 + (float)(v13 + (float)(v24 * 0.0))) + *v3;
  }
  v20[0] = v15;
  v20[1] = v12;
  v21 = 1;
  v18[0] = v10 + v14;
  v18[1] = v9 + v8;
  v19 = 1;
  return sub_60379890(a1 + 6740, (int)v20, (int)v18);
}
