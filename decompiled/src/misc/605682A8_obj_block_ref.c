/* obj_block_ref
 * address: 0x605682A8   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall obj_block_ref(int a1)
{
  void *v2; // r9
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  int v8; // [sp+20h] [bp-28h] BYREF
  int v9; // [sp+24h] [bp-24h]

  FIELD_U32(a1, 116) = 1140457472;
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = (int)"obj_block";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v8);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_block_kowarenai";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 6104) = v4;
  FIELD_U32(a1, 500) = 1140850688;
  FIELD_U32(a1, 504) = 1140850688;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  ShapedCollider_init((ShapedCollider *)(a1 + 6112), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CAE510);
  FIELD_U32(a1, 6336) = 4;
  FIELD_U32(a1, 516) = 1140850688;
  FIELD_U32(a1, 520) = 1140850688;
  FIELD_U32(a1, 524) = 1149239296;
  FIELD_U32(a1, 528) = 1149239296;
  v8 = 1115684864;
  v9 = 1115684864;
  sub_6069AFA0(a1 + 6768, a1 + 108, a1 + 492, &v8, a1 + 6112);
  return 1;
}
