/* sub_60263858
 * address: 0x60263858   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60263858(int a1)
{
  void *v2; // r0
  int v3; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  unsigned int animations; // r2
  int *v8; // r0
  int v9; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "bros";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  v3 = (int)v2;
  a2.cstr = "bros";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 1, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v6, v3, 0, 0);
  FIELD_U32(a1, 6300) = v5;
  animations = (unsigned int)v5[1].texAnims.animations;
  v8 = (int *)FIELD_U32(v5, 0x8).animations;
  if ( FIELD_U32(v5, 0x8).count > animations )
    v8 += animations;
  v9 = *v8;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "walk";
  SkeletalAnim_play(v9, v3, (int)&a2);
  return sub_60263B68(a1);
}
