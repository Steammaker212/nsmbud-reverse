/* sub_6006677C
 * address: 0x6006677C   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006677C(int a1)
{
  void *v2; // r0
  int v3; // r8
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int **v7; // r4
  unsigned int animations; // r2
  int *v9; // r0
  int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "boss_shutter_peach";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "boss_shutter_peach";
  v3 = (int)v2;
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 1, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v6, v3, 0, 0);
  FIELD_U32(a1, 6100) = v5;
  v7 = (int **)(a1 + 6100);
  animations = (unsigned int)FIELD_U32(v5 + (1) * 48, 0x14);
  v9 = (int *)FIELD_U32(v5, 0xC);
  if ( FIELD_U32(v5, 0x8) > animations )
    v9 += animations;
  v10 = *v9;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shutout1";
  SkeletalAnim_play(v10, v3, (int)&a2);
  v11 = (*v7)[3];
  v12 = (*v7)[17];
  if ( (*v7)[2] > v12 )
    v11 += 4 * v12;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 0);
  *(_DWORD *)(**v7 + 32) = 0;
  result = **v7;
  FIELD_U32(result, 36) = 0;
  return result;
}
