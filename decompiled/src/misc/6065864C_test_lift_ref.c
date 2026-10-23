/* test_lift_ref
 * address: 0x6065864C   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall test_lift_ref(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  float v4; // s0
  float v5; // s0
  float v6; // s4
  float v7; // s18
  float v8; // s20
  float v9; // s16
  void *ResArchiveById; // r9
  void *Model2; // r7
  ModelWrapper *v12; // r5
  ModelWrapper *v13; // r0
  float v14; // r1
  int v15; // r1
  ShapedColliderInfo a2[2]; // [sp+18h] [bp-60h] BYREF

  v2 = FIELD_U32(a1, 20);
  v3 = HIBYTE(v2) & 0xF;
  if ( v3 )
    v4 = 0.0 - (float)(unsigned int)(10 * v3);
  else
    v4 = 20.0;
  FIELD_F32(a1, 116) = v4;
  v5 = (float)((FIELD_U32(a1, 24) >> 8) & 0x1F) * 0.5;
  v6 = (float)(FIELD_U32(a1, 24) & 0xF) * 0.5;
  v7 = v5 * 32.0;
  FIELD_F32(a1, 144) = v5;
  FIELD_F32(a1, 148) = v6;
  FIELD_U32(a1, 152) = 1065353216;
  v8 = v6 * 32.0;
  v9 = (float)(v5 * 32.0) * 0.5;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + v9;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - (float)(v6 * 32.0);
  FIELD_U32(a1, 572) = 0;
  FIELD_F32(a1, 576) = (float)(v6 * 32.0) * 0.5;
  FIELD_U8(a1, 6852) = (v2 & 0x10000000) != 0;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  LODWORD(a2[0].distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(a2[0].distToCenter.y) = "test_lift";
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)a2, 0, 0, 0, 0, 0, 0, 0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v13 = ModelWrapper_ctor(v12, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v13, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6848) = v12;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v12, 0x0) + 68))(FIELD_U32(v12, 0x0), a1 + 144);
  a2[0] = *(ShapedColliderInfo *)byte_60CB65A8;
  v14 = FIELD_F32(a1, 576);
  a2[0].field_8 = FIELD_F32(a1, 572);
  a2[0].field_C = v14;
  a2[0].topLeft.x = v7 * -0.5;
  a2[0].topLeft.y = v8;
  a2[0].bottomRight.x = v9;
  ShapedCollider_init((ShapedCollider *)(a1 + 6152), (StageActor *)a1, a2);
  v15 = FIELD_U32(a1, 576);
  FIELD_U32(a1, 492) = FIELD_U32(a1, 572);
  FIELD_U32(a1, 496) = v15;
  return 1;
}
