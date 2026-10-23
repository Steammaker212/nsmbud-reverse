/* wing_kuri_ref_2
 * address: 0x60363110   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall wing_kuri_ref_2(int a1)
{
  void *v2; // r11
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  int v8; // r4
  int v9; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v12)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v13; // [sp+20h] [bp-28h]

  v12 = &sead__SafeStringBase__vtable;
  v13 = "wing";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v12);
  a2.cstr = "wing";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  FIELD_U32(a1, 6824) = v4;
  animations = (unsigned int)v4[1].texAnims.animations;
  v7 = (int *)FIELD_U32(v4, 0xC);
  if ( FIELD_U32(v4, 0x8) > animations )
    v7 += animations;
  v8 = *v7;
  v12 = &sead__SafeStringBase__vtable;
  v13 = "wing";
  v9 = LoadResource(ResourceMgrRelated_instance, &v12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wing_kuri";
  return SkeletalAnim_play(v8, v9, (int)&a2);
}
