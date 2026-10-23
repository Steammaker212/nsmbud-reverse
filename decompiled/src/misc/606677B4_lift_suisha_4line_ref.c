/* lift_suisha_4line_ref
 * address: 0x606677B4   size: 1300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_suisha_4line_ref(int a1)
{
  void *ResArchiveById; // r8
  void *Model2; // r9
  ModelWrapper *v4; // r6
  ModelWrapper *v5; // r0
  float v6; // s0
  unsigned int v7; // r11
  int v8; // r0
  int v9; // r1
  _DWORD *v10; // r2
  int v11; // r5
  float *v12; // r0
  float v13; // s8
  float v14; // s6
  float v15; // s10
  float v16; // s4
  float v17; // s10
  float v18; // s4
  float *v19; // r7
  float v20; // s6
  float v21; // s10
  float v22; // s12
  float v23; // s1
  float v24; // s14
  float v25; // s14
  float v26; // s10
  float v27; // s14
  float v28; // s12
  float *v29; // r6
  float v30; // s14
  float v31; // s3
  float v32; // s1
  float v33; // s14
  float v34; // s8
  float v35; // s8
  float *v36; // r2
  float v37; // s1
  float v38; // s3
  float v39; // s7
  float v40; // s5
  float v41; // s5
  float v42; // s0
  int v43; // r0
  unsigned int v44; // r0
  int v45; // r1
  int *v46; // r1
  int v47; // r2
  int v48; // r0
  int v49; // r2
  int v50; // r2
  int v51; // r2
  int *v53; // [sp+18h] [bp-58h]
  _DWORD v54[4]; // [sp+20h] [bp-50h] BYREF
  SolidOnTopColliderInfo a2[2]; // [sp+30h] [bp-40h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  LODWORD(a2[0].field_0) = &sead__SafeStringBase__vtable;
  a2[0].field_4 = (int)"lift_suisha_4line";
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6100) = v4;
  lift_suisha_ashiba_ref(a1);
  sub_60007160(dword_60C7B3F8);
  v6 = sub_600071D8(dword_60C7B3F8);
  FIELD_F32(a1, 116) = v6;
  FIELD_U32(a1, 8208) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 8212) = FIELD_U32(a1, 112);
  FIELD_F32(a1, 8216) = v6;
  FIELD_U32(a1, 8236) = -268435456;
  FIELD_U32(a1, 8240) = 0;
  v53 = (int *)(a1 + 8236);
  v7 = a1 + 6104;
  do
  {
    FIELD_U32(v7, 176) = a1 + 86;
    v54[0] = -1042284544;
    v54[1] = 1090519040;
    v54[2] = 1105199104;
    a2[0].rotation = 0;
    memset(a2, 0, 16);
    v54[3] = 1090519040;
    a2[0].points = (Vec2 *)v54;
    SolidOnTopCollider_init((SolidOnTopCollider *)(v7 + 16), (StageActor *)a1, a2);
    v8 = FIELD_U32(a1, 108);
    v9 = FIELD_U32(a1, 112);
    v10 = (_DWORD *)(v7 + 472);
    FIELD_U32(v7, 464) = v8;
    FIELD_U32(v7, 468) = v9;
    v7 += 488;
    *v10 = v8;
    v10[1] = v9;
    v10[2] = 0;
  }
  while ( v7 < a1 + 8056 );
  v11 = *v53;
  v12 = (float *)((char *)sinLutTable + (((unsigned int)*v53 >> 20) & 0xFF0));
  v13 = (float)(*v53 & 0xFFFFFF);
  v14 = (float)(v12[2] + (float)((float)(v13 * v12[3]) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 6568) = v14;
  v15 = v12[1];
  v16 = *v12;
  FIELD_F32(a1, 6292) = v14;
  v17 = (float)(v16 + (float)((float)(v13 * v15) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 6296) = v17;
  v18 = FIELD_F32(a1, 108);
  v19 = (float *)((char *)sinLutTable + (((unsigned int)(v11 + 0x40000000) >> 20) & 0xFF0));
  FIELD_F32(a1, 6568) = v14 + v18;
  v20 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 6572) = v17 + v20;
  FIELD_U32(a1, 6584) = v11;
  v21 = (float)((v11 + 0x40000000) & 0xFFFFFF);
  v22 = (float)(v19[2] + (float)((float)(v21 * v19[3]) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 7056) = v22;
  v23 = v19[1];
  v24 = *v19;
  FIELD_F32(a1, 6780) = v22;
  v25 = v24 + (float)((float)(v21 * v23) * 0.000000059605);
  v26 = v22 + v18;
  v27 = v25 * 48.0;
  v28 = v27 + v20;
  FIELD_F32(a1, 6784) = v27;
  FIELD_F32(a1, 7056) = v26;
  FIELD_F32(a1, 7060) = v27 + v20;
  FIELD_U32(a1, 7072) = v11 + 0x40000000;
  v29 = (float *)((char *)sinLutTable + (((v11 ^ 0x80000000) >> 20) & 0xFF0));
  v30 = (float)(v29[2] + (float)((float)(v13 * v29[3]) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 7544) = v30;
  v31 = v29[1];
  v32 = *v29;
  FIELD_F32(a1, 7268) = v30;
  v33 = v30 + v18;
  v34 = (float)(v32 + (float)((float)(v13 * v31) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 7272) = v34;
  v35 = v34 + v20;
  FIELD_F32(a1, 7544) = v33;
  FIELD_F32(a1, 7548) = v35;
  FIELD_U32(a1, 7560) = v11 ^ 0x80000000;
  v36 = (float *)((char *)sinLutTable + (((unsigned int)(v11 - 0x40000000) >> 20) & 0xFF0));
  v37 = (float)((v11 - 0x40000000) & 0xFFFFFF);
  v38 = (float)(v36[2] + (float)((float)(v37 * v36[3]) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 8032) = v38;
  v39 = v36[1];
  v40 = *v36;
  FIELD_F32(a1, 7756) = v38;
  v41 = v40 + (float)((float)(v37 * v39) * 0.000000059605);
  FIELD_F32(a1, 7760) = v41 * 48.0;
  v42 = (float)(v41 * 48.0) + v20;
  FIELD_F32(a1, 8032) = v38 + v18;
  FIELD_F32(a1, 8036) = v42;
  FIELD_U32(a1, 8048) = v11 - 0x40000000;
  v43 = FIELD_U32(a1, 6572);
  FIELD_U32(a1, 6576) = FIELD_U32(a1, 6568);
  FIELD_U32(a1, 6580) = v43;
  FIELD_F32(a1, 7064) = v26;
  FIELD_F32(a1, 7068) = v28;
  FIELD_F32(a1, 7552) = v33;
  FIELD_F32(a1, 7556) = v35;
  FIELD_F32(a1, 8040) = v38 + v18;
  FIELD_F32(a1, 8044) = v42;
  v44 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 8244) = (v44 >> 20) & 3;
  v45 = (v44 >> 28) & 1;
  FIELD_U32(a1, 8228) = v45;
  if ( v45 )
    v46 = &dword_60CB6C54;
  else
    v46 = &dword_60CB6C74;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)v46);
  v47 = FIELD_U32(a1, 6572);
  v48 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6104) = FIELD_U32(a1, 6568);
  FIELD_U32(a1, 6108) = v47;
  FIELD_U32(a1, 6112) = v48;
  v49 = FIELD_U32(a1, 7060);
  FIELD_U32(a1, 6592) = FIELD_U32(a1, 7056);
  FIELD_U32(a1, 6596) = v49;
  FIELD_U32(a1, 6600) = v48;
  v50 = FIELD_U32(a1, 7548);
  FIELD_U32(a1, 7080) = FIELD_U32(a1, 7544);
  FIELD_U32(a1, 7084) = v50;
  FIELD_U32(a1, 7088) = v48;
  v51 = FIELD_U32(a1, 8036);
  FIELD_U32(a1, 7568) = FIELD_U32(a1, 8032);
  FIELD_U32(a1, 7572) = v51;
  FIELD_U32(a1, 7576) = v48;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  return 1;
}
