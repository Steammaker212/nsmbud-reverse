/* cube_kinoko_M_ref
 * address: 0x60679E6C   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cube_kinoko_M_ref(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  int v4; // r0
  float v5; // s16
  float v6; // s18
  void *ResArchiveById; // r8
  void *Model2; // r7
  ModelWrapper *v9; // r6
  ModelWrapper *v10; // r0
  int v11; // r0
  float v12; // r1
  ShapedColliderInfo a2[2]; // [sp+18h] [bp-50h] BYREF

  v2 = FIELD_U32(a1, 24);
  v3 = v2 & 0xF;
  v4 = ((v2 >> 8) & 0xF) + 1;
  ++v3;
  FIELD_F32(a1, 144) = (float)(unsigned int)(16 * v4) * 0.0078125;
  FIELD_F32(a1, 148) = (float)(unsigned int)(16 * v3) * 0.0078125;
  v5 = (float)(unsigned int)(8 * v4);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + v5;
  v6 = (float)(unsigned int)(8 * v3);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - v6;
  FIELD_F32(a1, 492) = 128.0 - v5;
  FIELD_F32(a1, 496) = v6 + -128.0;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  LODWORD(a2[0].distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(a2[0].distToCenter.y) = "cube_kinoko_M";
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)a2, 0, 0, 0, 0, 0, 0, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v10, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6100) = v9;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v9, 0x0) + 68))(FIELD_U32(v9, 0x0), a1 + 144);
  v11 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 192))(a1) << 28;
  FIELD_U32(a1, 164) = v11;
  memset(a2, 0, 16);
  a2[0].topLeft.x = -v5;
  a2[0].topLeft.y = v6;
  a2[0].bottomRight.x = v5;
  a2[0].bottomRight.y = -v6;
  a2[0].rotation = v11;
  ShapedCollider_init((ShapedCollider *)(a1 + 6104), (StageActor *)a1, a2);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
  v12 = FIELD_F32(a1, 112);
  a2[0].distToCenter.x = FIELD_F32(a1, 108);
  a2[0].distToCenter.y = v12;
  LineFollower_init(
    (LineFollower *)(a1 + 6760),
    &a2[0].distToCenter,
    FIELD_U8(a1, 86),
    (FIELD_U32(a1, 20) & 0x10000) == 0,
    0);
  FIELD_U32(a1, 6904) = (((unsigned __int16)FIELD_U32(a1, 20) >> 12) + 1)
                         * dword_60AF2200[FIELD_U32(a1, 20) & 1];
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7D98);
  sub_6067A0EC(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
}
