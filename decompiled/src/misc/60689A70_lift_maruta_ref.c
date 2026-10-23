/* lift_maruta_ref
 * address: 0x60689A70   size: 748   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall lift_maruta_ref(int a1)
{
  void *v2; // r0
  void *v3; // r9
  void *Model2; // r7
  ModelWrapper *v5; // r5
  ModelWrapper *v6; // r0
  float v7; // s0
  float v8; // s16
  unsigned int v9; // r1
  int v10; // r2
  ActiveColliderMgr *v11; // r5
  SolidOnTopColliderInfo info; // [sp+18h] [bp-68h] BYREF
  int v14; // [sp+30h] [bp-50h]
  unsigned int v15; // [sp+34h] [bp-4Ch]
  int v16; // [sp+38h] [bp-48h]
  sead__SafeString a2; // [sp+40h] [bp-40h] BYREF
  unsigned int v18; // [sp+48h] [bp-38h]
  unsigned int v19; // [sp+4Ch] [bp-34h]

  LODWORD(info.field_0) = &sead__SafeStringBase__vtable;
  info.field_4 = (int)"lift_maruta";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &info);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_maruta";
  v3 = v2;
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v6, v3, 0, 0);
  FIELD_U32(a1, 6300) = v5;
  FIELD_U32(a1, 116) = 0;
  v7 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  FIELD_F32(a1, 144) = v7 / 304.0;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v8 = v7 * 0.5;
  FIELD_F32(a1, 6448) = v7 * 0.5;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_F32(a1, 500) = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  v9 = a1 + 6304;
  FIELD_U32(a1, 504) = 1115684864;
  v10 = FIELD_U32(a1, 8);
  do
  {
    FIELD_U32(v9, 4) = v10;
    v9 += 12;
  }
  while ( v9 <= a1 + 6436 );
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C1710C, 0);
  FIELD_F32(a1, 312) = v8;
  v11 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v11, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v11, (ActiveCollider *)(a1 + 188));
  }
  memset(&info, 0, 16);
  info.points = (Vec2 *)&a2;
  info.rotation = 0;
  a2.vtable = (void *)0xC3180000;
  a2.cstr = (char *)0xC2000000;
  v18 = 0xC3180000;
  v19 = 1107820544;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6464), (StageActor *)a1, &info);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6464));
  memset(&info, 0, 16);
  info.points = (Vec2 *)&a2;
  info.rotation = 0;
  a2.vtable = (void *)1125646336;
  a2.cstr = (char *)1107820544;
  v18 = 1125646336;
  v19 = 0xC2000000;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6912), (StageActor *)a1, &info);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6912));
  memset(&info, 0, 16);
  info.points = (Vec2 *)0xC3180000;
  info.rotation = 1107296256;
  v14 = 1125646336;
  v15 = 0xC2000000;
  v16 = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 7360), (StageActor *)a1, (ShapedColliderInfo *)&info);
  ColliderBase_setSolidity((ColliderBase *)(a1 + 7360), 0);
  FIELD_U32(a1, 7696) = a1 + 8028;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 7360));
  ((void (__fastcall *)(int))loc_60689D78)(a1);
  return 1;
}
