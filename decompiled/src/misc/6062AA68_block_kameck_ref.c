/* block_kameck_ref
 * address: 0x6062AA68   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall block_kameck_ref(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r9
  void *Model2; // r7
  ModelWrapper *v5; // r5
  ModelWrapper *v6; // r0
  int v7; // r0
  SolidOnTopColliderInfo info; // [sp+18h] [bp-48h] BYREF
  sead__SafeString a2; // [sp+30h] [bp-30h] BYREF
  int v11; // [sp+38h] [bp-28h]
  int v12; // [sp+3Ch] [bp-24h]

  a1[29] = 0;
  a1[1641] = a1[27];
  a1[1642] = a1[28];
  a1[1643] = 0;
  LODWORD(info.field_0) = &sead__SafeStringBase__vtable;
  info.field_4 = (int)"block_kameck";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &info);
  a2.vtable = &sead__SafeStringBase__vtable;
  v3 = v2;
  a2.cstr = "block_kameck";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v6, v3, 0, 0);
  a1[1651] = v5;
  obj_chikuwa_block_ref((int)a1);
  v7 = a1[1639];
  FIELD_U32(v7, 20) = 0;
  FIELD_U32(v7, 28) |= 2u;
  a1[36] = 1065353216;
  a1[37] = 1065353216;
  a1[38] = 1065353216;
  ShapedCollider_init((ShapedCollider *)(a1 + 1652), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CB3DB8);
  a1[1730] = sub_6062B004;
  a1[1731] = sub_6062B0E8;
  a1[1732] = sub_6062B1CC;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1652));
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 162), &stru_60B06A3C, 3);
  a1[800] |= 0x40000000u;
  info.field_0 = 0.0;
  info.field_4 = 1090519040;
  info.field_8 = 0;
  info.field_C = 0.0;
  info.points = (Vec2 *)&a2;
  a2.vtable = (void *)-1056964608;
  a2.cstr = 0;
  v11 = 1090519040;
  v12 = 0;
  info.rotation = a1[41];
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 1526), (StageActor *)a1, &info);
  sub_60160630((ColliderBase *)(a1 + 1526), 2);
  ColliderBase_setType((ColliderBase *)(a1 + 1526), 16);
  a1[1617] = 1090519040;
  a1[1604] = sub_605EC52C;
  a1[123] = 0;
  a1[124] = 0;
  a1[125] = 1107296256;
  a1[126] = 1107296256;
  a1[127] = 1107296256;
  a1[128] = 1107296256;
  a1[1817] = 0;
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB3DF4);
  sub_6062ACF4(a1);
  return 1;
}
