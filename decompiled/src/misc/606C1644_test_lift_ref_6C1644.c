/* test_lift_ref_6C1644
 * address: 0x606C1644   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall test_lift_ref_6C1644(int a1)
{
  float v3; // r0
  float v4; // s0
  float v5; // s2
  float v6; // s6
  float v7; // s4
  float v8; // s0
  float v9; // s2
  void *ResArchiveById; // r10
  void *Model2; // r5
  ModelWrapper *v12; // r6
  ModelWrapper *v13; // r0
  float v14; // r1
  float v15; // s2
  ShapedColliderInfo a2[2]; // [sp+14h] [bp-4Ch] BYREF

  v3 = FIELD_F32(a1, 112);
  a2[0].distToCenter.x = FIELD_F32(a1, 108);
  a2[0].distToCenter.y = v3;
  sub_607D8938(
    a1 + 6104,
    a2,
    (FIELD_U32(a1, 20) >> 20) & 0xF,
    (FIELD_U32(a1, 20) >> 19) & 1,
    HIWORD(FIELD_U32(a1, 20)) & 3,
    HIBYTE(FIELD_U32(a1, 20)),
    BYTE1(FIELD_U32(a1, 20)));
  v4 = (float)(((FIELD_U32(a1, 24) >> 8) & 0xFu) + 1) * 0.5;
  v5 = (float)((FIELD_U32(a1, 24) & 0xFu) + 1) * 0.5;
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
  FIELD_F32(a1, 500) = v8;
  FIELD_F32(a1, 504) = v9;
  FIELD_F32(a1, 508) = v8;
  FIELD_F32(a1, 512) = v9;
  FIELD_F32(a1, 6904) = v8 + 64.0;
  FIELD_F32(a1, 6908) = v9 + 64.0;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  LODWORD(a2[0].distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(a2[0].distToCenter.y) = "test_lift";
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)a2, 0, 0, 0, 0, 0, 0, 0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v13 = ModelWrapper_ctor(v12, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v13, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6100) = v12;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v12, 0x0) + 68))(FIELD_U32(v12, 0x0), a1 + 144);
  sub_606C18D0(a1);
  a2[0].distToCenter.x = 0.0;
  a2[0].distToCenter.y = 0.0;
  v14 = FIELD_F32(a1, 576);
  a2[0].field_8 = FIELD_F32(a1, 572);
  a2[0].field_C = v14;
  a2[0].topLeft.x = 0.0;
  a2[0].topLeft.y = 0.0;
  v15 = FIELD_F32(a1, 148) * -32.0;
  a2[0].bottomRight.x = FIELD_F32(a1, 144) * 32.0;
  a2[0].bottomRight.y = v15;
  a2[0].rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6208), (StageActor *)a1, a2);
  FIELD_U32(a1, 6532) = sub_606C1A4C;
  FIELD_U32(a1, 6536) = sub_606C1A6C;
  FIELD_U32(a1, 6540) = sub_606C1A8C;
  sub_6069AFA0(a1 + 6864, a1 + 108, (_DWORD *)(a1 + 492), (_DWORD *)(a1 + 6904), (ColliderBase *)(a1 + 6208));
  ShapedCollider_execute((ColliderBase *)(a1 + 6208));
  return 1;
}
