/* shinkai_light_ref
 * address: 0x60677EC4   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall shinkai_light_ref(int a1)
{
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _DWORD *v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r1
  int *v11; // r0
  int v12; // r5
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shinkai_light";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 2, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 2, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6100) = v4;
  v6 = *FIELD_U32(v4, 0x1C);
  v7 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shinkai_light";
  ShuAnim_play(v6, v7, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6100) + 28) + 4), 1);
  v8 = **(_DWORD **)(FIELD_U32(a1, 6100) + 28);
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6100) + 28) + 24) = 1065353216;
  v9 = FIELD_U32(a1, 6100);
  v10 = FIELD_U32(v9, 24);
  v11 = *(int **)(v9 + 28);
  if ( v10 > 1 )
    ++v11;
  v12 = *v11;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shinkai_light";
  sub_60446088(v12, (int)ResArchiveById, &a2);
  FIELD_U32(v12, 20) = 0;
  FIELD_U32(v12, 28) |= 2u;
  FIELD_U32(v12, 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(v12 + 4), 1);
}
