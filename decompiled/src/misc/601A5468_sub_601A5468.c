/* sub_601A5468
 * address: 0x601A5468   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A5468(int a1)
{
  void *v2; // r5
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  int v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r0
  sead__SafeString identifier; // [sp+18h] [bp-28h] BYREF

  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "obj_baloon_Mii";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  FIELD_U32(a1, 300) = v2;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "obj_baloon_Mii";
  Model = (void *)Resource_getModel(v2, &identifier, 6, 1, 1, 1, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 1, 1, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  FIELD_U32(a1, 304) = v4;
  v6 = FIELD_U32(a1, 300);
  v7 = (int)*FIELD_U32(v4, 0xC);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "appear";
  SkeletalAnim_play(v7, v6, (int)&identifier);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 304) + 12) + 4), 0);
  v8 = **(_DWORD **)(FIELD_U32(a1, 304) + 12);
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 304) + 12) + 24) = 0;
  v9 = FIELD_U32(a1, 300);
  v10 = **(_DWORD **)(FIELD_U32(a1, 304) + 28);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "wait";
  return sub_60446088(v10, v9, (int)&identifier);
}
