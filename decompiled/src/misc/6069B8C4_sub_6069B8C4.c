/* sub_6069B8C4
 * address: 0x6069B8C4   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069B8C4(float *a1, int a2, _DWORD *a3, unsigned int a4, int a5, int a6)
{
  float v8; // s20
  float v9; // s8
  float v10; // s6
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s22
  int ResArchiveById; // r0
  float v16; // s12
  float v17; // s14
  float v18; // s0
  float v19; // s4
  float v20; // s0
  float v21; // s10
  float v22; // s8
  int v23; // r0
  int v24; // r0
  int v25; // r1
  SolidOnTopCollider *v26; // r5
  SolidOnTopColliderInfo info; // [sp+8h] [bp-78h] BYREF
  _DWORD v29[24]; // [sp+20h] [bp-60h] BYREF

  if ( a5 == 1 )
    FIELD_U32(a2, 116) = 1163984896;
  v8 = (float)a4;
  if ( a6 )
  {
    v9 = 24.0;
    v10 = 16.0;
    FIELD_F32(a2, 108) = FIELD_F32(a2, 108) + 8.0;
    FIELD_F32(a2, 112) = FIELD_F32(a2, 112) + 8.0;
    v11 = 32.0;
    v12 = (float)(a3[3] - a3[1]) + -8.0;
    v13 = (float)(a3[2] - *a3) + -8.0;
  }
  else
  {
    v11 = 16.0;
    v13 = (float)(a3[2] - *a3);
    v12 = (float)(a3[3] - a3[1]);
    v10 = 8.0;
    if ( (a4 & 1) == 0 )
    {
      v13 = v13 + -8.0;
      FIELD_F32(a2, 108) = FIELD_F32(a2, 108) + 8.0;
    }
    v9 = 16.0;
  }
  v14 = flt_60AF2220[a6];
  a1[119] = (float)(v11 + (float)(v8 * v10)) + 8.0;
  a1[120] = v9;
  FIELD_F32(a2, 492) = v13;
  FIELD_F32(a2, 496) = v12;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a2 + 12), 0);
  sub_6069BB38(a1, ResArchiveById, a6);
  v16 = (float)(v14 * 16.0) + -1.0;
  v17 = (float)(v14 * 16.0) + 1.0;
  v18 = (float)((float)(v8 * 16.0) + 32.0) + -16.0;
  v19 = -(float)(v18 * v14);
  v20 = v18 * v14;
  v21 = v19 - (float)(v14 * 16.0);
  a1[5] = v19;
  a1[6] = v16;
  a1[7] = v21 + -1.0;
  a1[8] = v16;
  a1[9] = v19;
  a1[10] = v17;
  a1[11] = v21 + -2.0;
  v22 = (float)(v14 * 16.0) + v20;
  a1[12] = v17;
  a1[13] = v21;
  a1[14] = v14 * -16.0;
  a1[15] = v20;
  a1[16] = v16;
  a1[17] = v22 + 1.0;
  a1[18] = v16;
  a1[19] = v20;
  a1[20] = v17;
  a1[118] = v14 * -16.0;
  a1[21] = v22 + 2.0;
  a1[22] = v17;
  a1[23] = v22;
  a1[24] = v14 * -16.0;
  v23 = *((_DWORD *)a1 + 13);
  *(float *)&v29[1] = a1[14];
  v29[0] = v23;
  *(float *)&v29[2] = v19;
  v29[3] = 0;
  *(float *)&v29[4] = v20;
  v29[5] = 0;
  v24 = *((_DWORD *)a1 + 23);
  v25 = *((_DWORD *)a1 + 24);
  v26 = (SolidOnTopCollider *)(a1 + 26);
  info.field_0 = 0.0;
  *(float *)&info.field_4 = v14 * 16.0;
  info.field_8 = 0;
  info.field_C = 0.0;
  v29[7] = v25;
  v29[6] = v24;
  info.points = (Vec2 *)v29;
  info.rotation = 0;
  SolidOnTopCollider_init2(v26, (StageActor *)a2, &info, 4, 0);
  return sub_60160630(&FIELD_U32(v26, 0x0), 2);
}
