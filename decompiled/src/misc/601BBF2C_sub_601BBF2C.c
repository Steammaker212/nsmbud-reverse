/* sub_601BBF2C
 * address: 0x601BBF2C   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601BBF2C(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r2
  int v6; // r3
  bool v7; // vf
  int v8; // r2
  int v9; // r0
  float v10; // r1
  float v11; // r2
  int v12; // r5
  int v13; // s2
  int v14; // r7
  int v15; // r2
  int v16; // r3
  int v17; // r2
  _DWORD *v18; // r5
  int v19; // r0
  int v20; // r1
  int v21; // r1
  float v22; // s16
  int v23; // r0
  float v24[12]; // [sp+0h] [bp-30h] BYREF

  v2 = FIELD_U32(a1, 1144);
  if ( v2 )
  {
    v3 = FIELD_U32(a1, 1132);
    v4 = v3;
    if ( v2 >= 1 )
    {
      v5 = FIELD_U32(a1, 1136);
      v6 = FIELD_U32(a1, 1140);
      v7 = __OFSUB__(v6, v5);
      v8 = v6 - v5;
      if ( v8 < 0 != v7 )
        v8 = FIELD_U32(a1, 1140);
      v4 = v3 + 60 * v8;
    }
    if ( FIELD_U32(v4, 48) == 1 )
    {
      sub_601B7E90((_DWORD *)a1);
      v9 = sub_601E0040(a1 + 1160);
      v10 = *(float *)v9;
      v11 = FIELD_F32(v9, 4);
      v12 = 0;
      v24[2] = FIELD_F32(v9, 8);
      v24[0] = v10;
      v24[1] = v11;
      if ( FIELD_U32(a1, 1160) == 3 )
        v12 = -1073741824;
      *(__n64 *)(a1 + 1184) = sub_601BA56C(a1, v24, v12);
      FIELD_U32(a1, 1192) = v13;
      v14 = (*(int (__fastcall **)(int *))(dword_60C8AC40 + 8))(&dword_60C8AC40);
      if ( v14 != (*(int (__fastcall **)(int *))(dword_60C8AC40 + 8))(&dword_60C8AC40) )
        FIELD_U16(a1, 440) &= ~4u;
      StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)&dword_60C8AC40);
      FIELD_U32(a1, 1020) = *(_DWORD *)(sub_601CF9C0(dword_60C8AEF0) + 180);
      FIELD_U32(a1, 1024) = v12;
      FIELD_U32(a1, 1108) |= 0x100u;
      return;
    }
    if ( v2 >= 1 )
    {
      v15 = FIELD_U32(a1, 1136);
      v16 = FIELD_U32(a1, 1140);
      v7 = __OFSUB__(v16, v15);
      v17 = v16 - v15;
      if ( v17 < 0 != v7 )
        v17 = FIELD_U32(a1, 1140);
      v18 = (_DWORD *)(v3 + 60 * v17);
      sub_6019EC34((_DWORD *)(a1 + 1148), v18);
      sub_6019EC34((_DWORD *)(a1 + 1160), v18 + 3);
      FIELD_U32(a1, 1172) = v18[6];
      FIELD_U32(a1, 1176) = v18[7];
      FIELD_U32(a1, 1180) = v18[8];
      FIELD_U32(a1, 1184) = v18[9];
      FIELD_U32(a1, 1188) = v18[10];
      FIELD_U32(a1, 1192) = v18[11];
      v19 = v18[12];
      v20 = v18[13];
      FIELD_U32(a1, 1204) = v18[14];
      FIELD_U32(a1, 1200) = v20;
      FIELD_U32(a1, 1196) = v19;
      v21 = FIELD_U32(a1, 1140) + 1;
      if ( v21 >= FIELD_U32(a1, 1136) )
        v21 = 0;
      FIELD_U32(a1, 1140) = v21;
      --FIELD_U32(a1, 1144);
    }
  }
  v22 = 81.0;
  v23 = sub_601C5EEC(a1);
  if ( v23 >= 2 )
    v22 = (float)((float)--v23 * 75.0) + 81.0;
  sub_601B7504(v22, v23, (float *)(a1 + 80), 6u);
  if ( (float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 92)) != 0.0
    || (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 100)) != 0.0 )
  {
    FIELD_U32(a1, 1108) |= 0x100u;
    FIELD_U32(a1, 1024) = sub_608332B0(a1 + 92, a1 + 80);
  }
}
