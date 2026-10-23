/* sub_60707E70
 * address: 0x60707E70   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60707E70(_DWORD *a1)
{
  float *v2; // r7
  unsigned int v3; // r6
  int v4; // r0
  int ResArchiveById; // r0
  unsigned int *v6; // r5
  unsigned int *v7; // r11
  int v8; // r9
  float v9; // s0
  float v10; // s2
  float v11; // s4
  float v12; // s2
  float v13; // r1
  int v14; // r2
  float v15; // s4
  StateMgr *v16; // r0
  int *v17; // r1
  _DWORD *v19; // [sp+8h] [bp-78h]
  _DWORD v20[3]; // [sp+Ch] [bp-74h] BYREF
  float v21; // [sp+18h] [bp-68h] BYREF
  float v22; // [sp+1Ch] [bp-64h]
  int v23; // [sp+20h] [bp-60h]
  ShapedColliderInfo v24[2]; // [sp+28h] [bp-58h] BYREF

  a1[29] = -1015021568;
  v2 = (float *)(a1 + 27);
  a1[1964] = a1[27];
  a1[1965] = a1[28];
  a1[1966] = -1015021568;
  v3 = a1[6];
  v4 = a1[5] & 0xF;
  a1[20] = HIWORD(v3) & 1;
  a1[1977] = v4;
  a1[1978] = (v3 >> 8) & 0xF;
  a1[1979] = v3 & 0xF;
  a1[1971] = LODWORD(flt_60AF2220[(v3 >> 18) & 1]);
  ResArchiveById = Profile__getResArchiveById((Profile *)a1[3], 0);
  sub_6063916C((int)(a1 + 1525), ResArchiveById, 2 * a1[1978] + 4, 2 * a1[1979] + 4, 0.0, 5);
  v6 = a1 + 1978;
  v7 = a1 + 1979;
  v8 = (v3 >> 20) & 0xF;
  if ( a1[1977] )
    v9 = *v2;
  else
    v9 = *((float *)a1 + 28);
  v19 = a1 + 1977;
  v10 = (float)(unsigned int)v8 * 16.0;
  *((float *)a1 + 1982) = v9 - v10;
  *((float *)a1 + 1981) = v10 + v9;
  *((float *)a1 + 1970) = v9;
  a1[38] = 1065353216;
  a1[1967] = 1065353216;
  a1[1968] = 1065353216;
  a1[1969] = 1065353216;
  v11 = (float)((float)*v6 * 0.5) + 1.0;
  *((float *)a1 + 36) = v11;
  v12 = (float)((float)*v7 * 0.5) + 1.0;
  *((float *)a1 + 37) = v12;
  memset(v24, 0, 16);
  v24[0].topLeft.x = v11 * -32.0;
  v24[0].topLeft.y = v12 * 32.0;
  v24[0].bottomRight.x = v11 * 32.0;
  v24[0].bottomRight.y = v12 * -32.0;
  v24[0].rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 1800), (StageActor *)a1, v24);
  ColliderBase_setType((ColliderBase *)(a1 + 1800), 5);
  *((_BYTE *)a1 + 7420) = 1;
  a1[1840] = (char *)a1 + 86;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1800));
  a1[125] = 1140850688;
  a1[126] = 1140850688;
  v13 = *((float *)a1 + 28);
  v14 = a1[29];
  v21 = *v2;
  v22 = v13;
  v23 = v14;
  v21 = v21 - (float)((float)((float)(2 * *v6 + 4) * 16.0) * 0.5);
  v15 = (float)(2 * *v7 + 4);
  memset(v20, 0, sizeof(v20));
  v22 = v13 + (float)((float)(v15 * 16.0) * 0.5);
  sub_606361F8((int)(a1 + 1525), &v21, v20);
  if ( v8 )
  {
    v16 = (StateMgr *)(a1 + 1521);
    if ( *v19 )
      v17 = &dword_60CBC908;
    else
      v17 = &dword_60CBC8E8;
  }
  else
  {
    *v19 = 2;
    v16 = (StateMgr *)(a1 + 1521);
    v17 = &dword_60CBC8C8;
  }
  StateMgr__changeState(v16, (StateBase *)v17);
  return 1;
}
