/* sub_609674EC
 * address: 0x609674EC   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_609674EC(__int64 *a1, float *a2, float *a3, float *a4)
{
  float v5; // s4
  float v6; // s2
  float v7; // s0
  float v8; // s0
  __int64 v9; // d17
  _QWORD *v10; // r0
  __int64 *v11; // r10
  __int64 v12; // d17
  __int64 v13; // d17
  int (**v14)(); // [sp+0h] [bp-98h] BYREF
  __int64 v15; // [sp+4h] [bp-94h] BYREF
  __int64 v16; // [sp+Ch] [bp-8Ch]
  __int64 v17; // [sp+14h] [bp-84h]
  __int64 v18; // [sp+1Ch] [bp-7Ch]
  __int64 v19; // [sp+24h] [bp-74h]
  __int64 v20; // [sp+2Ch] [bp-6Ch]
  float v21; // [sp+34h] [bp-64h]
  float v22; // [sp+38h] [bp-60h]
  float v23; // [sp+3Ch] [bp-5Ch]
  float v24; // [sp+40h] [bp-58h]
  float v25; // [sp+44h] [bp-54h]
  float v26; // [sp+48h] [bp-50h]
  float v27; // [sp+4Ch] [bp-4Ch]
  float v28; // [sp+50h] [bp-48h]
  float v29; // [sp+54h] [bp-44h]

  v15 = 1065353216;
  v16 = 0;
  v17 = 0x3F80000000000000LL;
  v18 = 0;
  v19 = 0;
  v20 = 1065353216;
  v14 = off_60C5D014;
  v21 = *a2;
  v22 = a2[1];
  v23 = a2[2];
  v5 = a3[2];
  v6 = v22 + a3[1];
  v24 = v21 + *a3;
  v25 = v6;
  v26 = v23 + v5;
  v27 = *a4;
  v28 = a4[1];
  v29 = a4[2];
  v7 = sqrtf((float)((float)(v28 * v28) + (float)(v27 * v27)) + (float)(v29 * v29));
  if ( v7 > 0.0 )
  {
    v8 = 1.0 / v7;
    v27 = v8 * v27;
    v28 = v8 * v28;
    v29 = v8 * v29;
  }
  off_60C5D024(&v14, &v15);
  v9 = v16;
  v10 = a1 + 4;
  *a1 = v15;
  a1[1] = v9;
  v11 = a1 + 2;
  v12 = v18;
  *v11 = v17;
  v11[1] = v12;
  v13 = v20;
  *v10 = v19;
  v10[1] = v13;
  nullsub_111();
}
