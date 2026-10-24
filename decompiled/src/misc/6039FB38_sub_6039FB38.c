/* sub_6039FB38
 * address: 0x6039FB38   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t *__fastcall sub_6039FB38(int a1, float32x2_t *a2)
{
  float v4; // s16
  unsigned int v5; // r3
  unsigned int v6; // r7
  unsigned int v7; // r6
  unsigned __int32 v8; // r0
  unsigned __int32 v9; // r1
  unsigned __int32 v10; // r2
  float v11; // s0
  float v12; // s0
  float v13; // s7
  float v14; // s2
  float v15; // s4
  float v16; // s6
  float v17; // s10
  float v18; // s8
  float v19; // s12
  float v20; // s14
  float v21; // s1
  float v22; // s3
  float v23; // s5
  float v24; // s7
  int v26; // [sp+4h] [bp-3Ch] BYREF
  unsigned int v27; // [sp+8h] [bp-38h] BYREF
  unsigned int v28[13]; // [sp+Ch] [bp-34h] BYREF

  v4 = 0.0;
  v5 = FIELD_U32(a1, 156);
  v6 = FIELD_U32(a1, 160);
  v7 = FIELD_U32(a1, 164);
  v8 = FIELD_U32(a1, 112);
  v9 = FIELD_U32(a1, 116);
  v10 = FIELD_U32(a1, 108);
  v28[1] = v7;
  v28[0] = v6;
  v27 = v5;
  if ( FIELD_U8(a1, 6408) && FIELD_F32(a1, 124) == 0.0 && FIELD_U8(a1, 6386) )
    v4 = FIELD_F32(a1, 148) * 16.0;
  if ( FIELD_U8(a1, 6386) )
    v28[0] = 0x80000000 - v28[0];
  FIELD_U32(a2, 0x0)[0] = 1065353216;
  FIELD_U32(a2, 0x0)[1] = 0;
  FIELD_U32(a2 + (1) * 8, 0x0)[0] = 0;
  FIELD_U32(a2 + (2) * 8, 0x0)[0] = 0;
  FIELD_U32(a2 + (2) * 8, 0x0)[1] = 1065353216;
  FIELD_U32(a2 + (3) * 8, 0x0)[0] = 0;
  FIELD_U32(a2 + (4) * 8, 0x0)[0] = 0;
  FIELD_U32(a2 + (4) * 8, 0x0)[1] = 0;
  FIELD_U32(a2 + (5) * 8, 0x0)[0] = 1065353216;
  FIELD_U32(a2 + (1) * 8, 0x0)[1] = v10;
  FIELD_U32(a2 + (3) * 8, 0x0)[1] = v8;
  FIELD_U32(a2 + (5) * 8, 0x0)[1] = v9;
  v26 = (unsigned __int8)byte_60AFE3F4[FIELD_U32(a1, 80)] << 30;
  Mtx34_rotateY(a2, (unsigned int *)&v26);
  v11 = FIELD_F32(a1, 148) * 7.0;
  FIELD_F32(a2 + (1) * 8, 0x0)[1] = FIELD_F32(a2 + (1) * 8, 0x0)[1]
                   + (float)((float)((float)(v11 * FIELD_F32(a2, 0x0)[1]) + (float)(FIELD_F32(a2, 0x0)[0] * 0.0))
                           + (float)(FIELD_F32(a2 + (1) * 8, 0x0)[0] * 0.0));
  FIELD_F32(a2 + (3) * 8, 0x0)[1] = FIELD_F32(a2 + (3) * 8, 0x0)[1]
                   + (float)((float)((float)(v11 * FIELD_F32(a2 + (2) * 8, 0x0)[1]) + (float)(FIELD_F32(a2 + (2) * 8, 0x0)[0] * 0.0))
                           + (float)(FIELD_F32(a2 + (3) * 8, 0x0)[0] * 0.0));
  FIELD_F32(a2 + (5) * 8, 0x0)[1] = FIELD_F32(a2 + (5) * 8, 0x0)[1]
                   + (float)((float)((float)(v11 * FIELD_F32(a2 + (4) * 8, 0x0)[1]) + (float)(FIELD_F32(a2 + (4) * 8, 0x0)[0] * 0.0))
                           + (float)(FIELD_F32(a2 + (5) * 8, 0x0)[0] * 0.0));
  Mtx34_rotateX(a2, &v27);
  v12 = FIELD_F32(a2, 0x0)[1];
  v13 = FIELD_F32(a1, 148) * -7.0;
  v14 = FIELD_F32(a2, 0x0)[0] * 0.0;
  v15 = FIELD_F32(a2 + (1) * 8, 0x0)[0] * 0.0;
  v16 = FIELD_F32(a2 + (1) * 8, 0x0)[1] + (float)((float)(v14 + (float)(v13 * v12)) + v15);
  FIELD_F32(a2 + (1) * 8, 0x0)[1] = v16;
  v17 = FIELD_F32(a2 + (2) * 8, 0x0)[1];
  v18 = FIELD_F32(a2 + (2) * 8, 0x0)[0] * 0.0;
  v19 = FIELD_F32(a2 + (3) * 8, 0x0)[0] * 0.0;
  v20 = FIELD_F32(a2 + (3) * 8, 0x0)[1] + (float)((float)(v18 + (float)(v13 * v17)) + v19);
  FIELD_F32(a2 + (3) * 8, 0x0)[1] = v20;
  v21 = FIELD_F32(a2 + (4) * 8, 0x0)[1];
  v22 = FIELD_F32(a2 + (4) * 8, 0x0)[0] * 0.0;
  v23 = FIELD_F32(a2 + (5) * 8, 0x0)[0] * 0.0;
  v24 = FIELD_F32(a2 + (5) * 8, 0x0)[1] + (float)((float)(v22 + (float)(v13 * v21)) + v23);
  FIELD_F32(a2 + (5) * 8, 0x0)[1] = v24;
  if ( FIELD_U8(a1, 6408) )
  {
    FIELD_F32(a2 + (1) * 8, 0x0)[1] = v16 + (float)((float)(v14 + (float)(v4 * v12)) + v15);
    FIELD_F32(a2 + (3) * 8, 0x0)[1] = v20 + (float)((float)(v18 + (float)(v4 * v17)) + v19);
    FIELD_F32(a2 + (5) * 8, 0x0)[1] = v24 + (float)((float)(v22 + (float)(v4 * v21)) + v23);
    Mtx34_rotateX(a2, (unsigned int *)(a1 + 6360));
    Mtx34_rotateZ(a2, (unsigned int *)(a1 + 6368));
    FIELD_F32(a2 + (1) * 8, 0x0)[1] = FIELD_F32(a2 + (1) * 8, 0x0)[1]
                     + (float)((float)((float)(FIELD_F32(a2, 0x0)[0] * 0.0) - (float)(FIELD_F32(a2, 0x0)[1] * v4))
                             + (float)(FIELD_F32(a2 + (1) * 8, 0x0)[0] * 0.0));
    FIELD_F32(a2 + (3) * 8, 0x0)[1] = FIELD_F32(a2 + (3) * 8, 0x0)[1]
                     + (float)((float)((float)(FIELD_F32(a2 + (2) * 8, 0x0)[0] * 0.0) - (float)(FIELD_F32(a2 + (2) * 8, 0x0)[1] * v4))
                             + (float)(FIELD_F32(a2 + (3) * 8, 0x0)[0] * 0.0));
    FIELD_F32(a2 + (5) * 8, 0x0)[1] = FIELD_F32(a2 + (5) * 8, 0x0)[1]
                     + (float)((float)((float)(FIELD_F32(a2 + (4) * 8, 0x0)[0] * 0.0) - (float)(FIELD_F32(a2 + (4) * 8, 0x0)[1] * v4))
                             + (float)(FIELD_F32(a2 + (5) * 8, 0x0)[0] * 0.0));
  }
  v26 = (unsigned __int8)byte_60AFE3F4[FIELD_U32(a1, 80) ^ 1] << 30;
  Mtx34_rotateY(a2, (unsigned int *)&v26);
  return Mtx34_rotateY(a2, v28);
}
