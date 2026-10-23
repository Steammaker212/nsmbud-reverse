/* koopaJr_shell_ref
 * address: 0x600892F8   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall koopaJr_shell_ref(int a1)
{
  void *ResArchiveById; // r9
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  ActiveColliderMgr *v6; // r6
  int v7; // r2
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  sub_600FB724();
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_shell";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 7612) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lkp_shell_model_in";
  sub_6040F4B8(v4, &a2, 0);
  FIELD_U32(a1, 7604) = &dword_60C81F68;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC75B0, 0);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 6832) = a1 + 7704;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF557C, &stru_60AF5588, &stru_60AF5594);
  FIELD_U32(a1, 3200) |= 0x10000800u;
  FIELD_U32(a1, 3192) |= 0x10000800u;
  v7 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0x10000800u;
  FIELD_U32(a1, 3184) = v7 | 0x10000800;
  ((void (__fastcall *)(int))loc_6008950C)(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81968);
  return 1;
}
