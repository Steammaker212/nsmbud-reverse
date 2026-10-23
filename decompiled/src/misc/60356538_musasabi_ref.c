/* musasabi_ref
 * address: 0x60356538   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall musasabi_ref(int a1, int r1_0)
{
  int *v3; // r4
  void *v4; // r9
  void *Model2; // r7
  ModelWrapper *v6; // r5
  ModelWrapper *v7; // r0
  unsigned int animations; // r2
  int *v9; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  v3 = (int *)(a1 + 6412);
  v4 = *(void **)(a1 + 6412);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "musasabi";
  Model2 = (void *)Resource_getModel2(v4, &a2, 2, 1, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v7 = sub_60421830(v6, Model2, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v7, (int)v4, 0, 0);
  *(v3 - 20) = (int)v6;
  animations = (unsigned int)v6[1].texAnims.animations;
  v9 = (int *)FIELD_U32(v6, 0x8).animations;
  if ( FIELD_U32(v6, 0x8).count > animations )
    v9 += animations;
  SkeletalAnim_play(*v9, *v3, (int)&dword_60C952A0[4 * r1_0 + 2 * *((unsigned __int8 *)v3 + 20)]);
  TexAnim_play(**(_DWORD **)(*(v3 - 20) + 20), *v3, &dword_60C95250[2 * r1_0 + 6]);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(v3 - 20) + 20) + 4), 1);
  return (*(int (__fastcall **)(_DWORD, int *))(**(_DWORD **)*(v3 - 20) + 68))(*(_DWORD *)*(v3 - 20), v3 - 1567);
}
