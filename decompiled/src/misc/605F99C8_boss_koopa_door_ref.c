/* boss_koopa_door_ref
 * address: 0x605F99C8   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall boss_koopa_door_ref(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r0
  _DWORD *v8; // r5
  int v9; // r0
  int v10; // r0
  unsigned int v11; // r1
  int *v12; // r0
  int v13; // r5
  int v14; // r0
  int v15; // r0
  unsigned int v16; // r1
  int v17; // r0
  int v18; // r0
  unsigned int v19; // r1
  int *v20; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "boss_koopa_door";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 1, 2, 1, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 2, 1, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  v6 = (int)*FIELD_U32(v4, 0x8).animations;
  v7 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "boss_koopa_door";
  SkeletalAnim_play(v6, v7, (const char **)&a2);
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 12));
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4), 0);
  v8 = **(_DWORD ***)(FIELD_U32(a1, 6300) + 28);
  v9 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = (char *)&unk_60AD3107;
  ShuAnim_play(v8, v9, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 24) = 1065353216;
  v10 = FIELD_U32(a1, 6300);
  v11 = FIELD_U32(v10, 24);
  v12 = *(int **)(v10 + 28);
  if ( v11 > 1 )
    ++v12;
  v13 = *v12;
  v14 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = (char *)&unk_60AD3107;
  sub_60446088(v13, v14, &a2);
  v15 = FIELD_U32(a1, 6300);
  v16 = FIELD_U32(v15, 24);
  v17 = FIELD_U32(v15, 28);
  if ( v16 > 1 )
    v17 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v17 + 4), 1);
  v18 = FIELD_U32(a1, 6300);
  v19 = FIELD_U32(v18, 24);
  v20 = *(int **)(v18 + 28);
  if ( v19 > 1 )
    ++v20;
  result = *v20;
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
