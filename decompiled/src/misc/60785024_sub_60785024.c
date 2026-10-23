/* sub_60785024
 * address: 0x60785024   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60785024(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r6
  int (__fastcall ***v7)(_DWORD, int *); // r5
  char v8; // r12
  int v9; // r6
  char v10; // r12
  float v11; // s16
  float v12; // s2
  int v13; // s0
  int v15[16]; // [sp+18h] [bp-40h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)&dword_60CC4304, 0, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 644) = v4;
  v6 = (int)*FIELD_U32(v4, 0x18).animations;
  sub_60446088(v6, (int)ResArchiveById, &dword_60CC430C);
  AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 1);
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  FIELD_U32(v6, 24) = 1065353216;
  v7 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60C7B374 & ~(1618497812 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  v9 = 2;
  if ( v7 && (**v7)(v7, &dword_60C7B370) == 1 )
  {
    FIELD_U32(a1, 572) = 0;
    v11 = (float)(36.0 * 0.5) * 1.2;
    FIELD_F32(a1, 576) = v11;
    FIELD_U32(a1, 580) = 0;
    if ( ((unsigned int)&dword_60CC4300 & ~(1618497980 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60CC4300) )
    {
      dword_60CC4320 = 0;
      dword_60CC431C = 0;
      dword_60CC4318 = 0;
      dword_60CC4314 = 0;
      v12 = FIELD_F32(a1, 576);
      dword_60CC4334 = 0;
      unk_60CC4324 = -(float)(24.0 * 0.5);
      unk_60CC4328 = v11 + v12;
      unk_60CC432C = 24.0 * 0.5;
      unk_60CC4330 = v12 - v11;
      _cxa_guard_release(&dword_60CC4300);
    }
    ShapedCollider_init((ShapedCollider *)(a1 + 1216), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CC4314);
    FIELD_U32(a1, 1528) = sub_60785354;
    FIELD_U32(a1, 1532) = sub_60785414;
    FIELD_U32(a1, 1536) = sub_607854D4;
    ColliderBase_setType((ColliderBase *)(a1 + 1216), 31);
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1216));
    v9 = 1;
    ((void (__fastcall *)(int, int, int *))loc_602F2F3C)(a1 + 648, 1, &dword_60B3B98C);
    *(float *)&v13 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    *(float *)v15 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    v15[1] = v13;
    sub_602F322C(a1 + 648, v15, 0, 0);
    sub_602F31A0(a1 + 648, v15, 0);
    FIELD_U32(a1, 1872) = 180;
    sub_607A1DF4(v7, a1 + 108);
    sub_607855B8(a1);
  }
  return v9;
}
