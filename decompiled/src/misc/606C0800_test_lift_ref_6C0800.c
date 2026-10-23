/* test_lift_ref_6C0800
 * address: 0x606C0800   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall test_lift_ref_6C0800(int a1)
{
  float v2; // s2
  unsigned int v3; // r0
  float v4; // s0
  float v5; // s2
  float v6; // s6
  float v7; // s4
  float v8; // s0
  float v9; // s2
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  float v14; // r1
  float v15; // s2
  ShapedColliderInfo a2; // [sp+14h] [bp-44h] BYREF

  v2 = (float)(FIELD_U16(a1, 22) & 0xF);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + v2;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - v2;
  FIELD_U32(a1, 116) = -1054867456;
  v3 = FIELD_U32(a1, 24);
  v4 = (float)(((v3 >> 8) & 0xF) + 1) * 0.5;
  v5 = (float)((v3 & 0xF) + 1) * 0.5;
  v6 = v4 * 16.0;
  v7 = v5 * -16.0;
  FIELD_F32(a1, 144) = v4;
  FIELD_F32(a1, 148) = v5;
  v8 = v4 * 32.0;
  v9 = v5 * 32.0;
  FIELD_F32(a1, 572) = v6;
  FIELD_F32(a1, 576) = v7;
  FIELD_F32(a1, 492) = v6;
  FIELD_F32(a1, 496) = v7;
  FIELD_F32(a1, 508) = v8;
  FIELD_F32(a1, 512) = v9;
  FIELD_F32(a1, 6824) = v8 + 64.0;
  FIELD_F32(a1, 6828) = v9 + 64.0;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  LODWORD(a2.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(a2.distToCenter.y) = "test_lift";
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)&a2, 0, 0, 0, 0, 0, 0, 0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v13 = ModelWrapper_ctor(v12, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v13, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6120) = v12;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v12, 0x0) + 68))(FIELD_U32(v12, 0x0), a1 + 144);
  a2.distToCenter.x = 0.0;
  a2.distToCenter.y = 0.0;
  v14 = FIELD_F32(a1, 576);
  a2.field_8 = FIELD_F32(a1, 572);
  a2.field_C = v14;
  a2.topLeft.x = 0.0;
  a2.topLeft.y = 0.0;
  v15 = FIELD_F32(a1, 148) * -32.0;
  a2.bottomRight.x = FIELD_F32(a1, 144) * 32.0;
  a2.bottomRight.y = v15;
  a2.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6128), (StageActor *)a1, &a2);
  FIELD_U32(a1, 6452) = sub_606C0A3C;
  FIELD_U32(a1, 6456) = sub_606C0A5C;
  FIELD_U32(a1, 6460) = sub_606C0A7C;
  return 1;
}
