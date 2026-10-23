/* sub_605BEF74
 * address: 0x605BEF74   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BEF74(int a1, float *a2, int a3)
{
  float v6; // s0
  float *v7; // r0
  float v8; // s2
  float *v9; // r1
  float v10; // s0
  float *v11; // r1
  float v12; // s2
  float v13; // s0
  float *v14; // r1
  float v15; // s2
  float v16; // s0
  float *v17; // r1
  float v18; // s2
  float v19; // s0
  float *v20; // r1
  float v21; // s2
  float v22; // s0
  float *v23; // r1
  float v24; // s2
  float v25; // s0
  float *v26; // r1
  float v27; // s2
  float v28; // s0
  float *v29; // r1
  float v30; // s2
  float v31; // s0
  __int64 v32; // r0
  float v34; // [sp+4h] [bp-2Ch] BYREF
  float v35; // [sp+8h] [bp-28h]

  sub_60656814(a3, &v34, 0);
  v6 = v34 - *a2;
  v34 = v6;
  v7 = *(float **)(a1 + 1368);
  v8 = v35 - a2[1];
  *v7 = v6 - 24.0;
  v7[1] = v8;
  v9 = *(float **)(a1 + 1368);
  if ( FIELD_U32(a1, 1364) > 1u )
    v9 += 2;
  *v9 = v6;
  v9[1] = v8;
  sub_60656814(a3, &v34, 1);
  v10 = v34 - *a2;
  v34 = v10;
  v11 = *(float **)(a1 + 1368);
  v12 = v35 - a2[1];
  if ( FIELD_U32(a1, 1364) > 2u )
    v11 += 4;
  *v11 = v10;
  v11[1] = v12;
  sub_60656814(a3, &v34, 2);
  v13 = v34 - *a2;
  v34 = v13;
  v14 = *(float **)(a1 + 1368);
  v15 = v35 - a2[1];
  if ( FIELD_U32(a1, 1364) > 3u )
    v14 += 6;
  *v14 = v13;
  v14[1] = v15;
  sub_60656814(a3, &v34, 3);
  v16 = v34 - *a2;
  v34 = v16;
  v17 = *(float **)(a1 + 1368);
  v18 = v35 - a2[1];
  if ( FIELD_U32(a1, 1364) > 4u )
    v17 += 8;
  *v17 = v16;
  v17[1] = v18;
  sub_60656814(a3, &v34, 4);
  v19 = v34 - *a2;
  v34 = v19;
  v20 = *(float **)(a1 + 1368);
  v21 = v35 - a2[1];
  if ( FIELD_U32(a1, 1364) > 5u )
    v20 += 10;
  *v20 = v19;
  v20[1] = v21;
  sub_60656814(a3, &v34, 5);
  v22 = v34 - *a2;
  v34 = v22;
  v23 = *(float **)(a1 + 1368);
  v24 = v35 - a2[1];
  if ( FIELD_U32(a1, 1364) > 6u )
    v23 += 12;
  *v23 = v22;
  v23[1] = v24;
  sub_60656814(a3, &v34, 6);
  v25 = v34 - *a2;
  v34 = v25;
  v26 = *(float **)(a1 + 1368);
  v27 = v35 - a2[1];
  if ( FIELD_U32(a1, 1364) > 7u )
    v26 += 14;
  *v26 = v25;
  v26[1] = v27;
  sub_60656814(a3, &v34, 7);
  v28 = v34 - *a2;
  v34 = v28;
  v29 = *(float **)(a1 + 1368);
  v30 = v35 - a2[1];
  if ( FIELD_U32(a1, 1364) > 8u )
    v29 += 16;
  *v29 = v28;
  v31 = v28 + 24.0;
  v29[1] = v30;
  v32 = FIELD_U64(a1, 1364);
  if ( (unsigned int)v32 > 9 )
    HIDWORD(v32) += 72;
  *(float *)HIDWORD(v32) = v31;
  *(float *)(HIDWORD(v32) + 4) = v30;
  return v32;
}
