/* sub_6024F818
 * address: 0x6024F818   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024F818(int a1)
{
  void *v2; // r11
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int **v6; // r8
  unsigned int animations; // r2
  int *v8; // r0
  int v9; // r5
  int v10; // r0
  int *v11; // r5
  int v12; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v15)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v16; // [sp+20h] [bp-28h]

  v15 = &sead__SafeStringBase__vtable;
  v16 = "basabasa";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v15);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "basa_eye_light";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 1, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  FIELD_U32(a1, 6308) = v4;
  v6 = (int **)(a1 + 6308);
  animations = (unsigned int)v4[1].texAnims.animations;
  v8 = (int *)FIELD_U32(v4, 0x8).animations;
  if ( FIELD_U32(v4, 0x8).count > animations )
    v8 += animations;
  v9 = *v8;
  v15 = &sead__SafeStringBase__vtable;
  v16 = "basabasa";
  v10 = LoadResource(ResourceMgrRelated_instance, &v15);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "eye_wait";
  SkeletalAnim_play(v9, v10, (int)&a2);
  v11 = *(int **)(*v6)[5];
  v6[4] = v11;
  v15 = &sead__SafeStringBase__vtable;
  v16 = "basabasa";
  v12 = LoadResource(ResourceMgrRelated_instance, &v15);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "eye_wait";
  TexAnim_play(v11, v12, &a2);
  result = **v6;
  FIELD_U32(result, 36) = 19;
  return result;
}
