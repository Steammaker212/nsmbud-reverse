/* kuriboMini_ref
 * address: 0x6025250C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall kuriboMini_ref(int *a1)
{
  void *v2; // r5
  void *Model2; // r9
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  int v8; // r1
  int v9; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "kuriboMini";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[1575] = (int)v2;
  a1 += 1575;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "kuriboMini";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  a1[1] = (int)v4;
  animations = (unsigned int)v4[1].texAnims.animations;
  v7 = (int *)FIELD_U32(v4, 0xC);
  v8 = *a1;
  if ( FIELD_U32(v4, 0x8) > animations )
    v7 += animations;
  v9 = *v7;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "walk";
  return SkeletalAnim_play(v9, v8, (int)&a2);
}
