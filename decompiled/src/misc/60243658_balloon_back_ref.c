/* balloon_back_ref
 * address: 0x60243658   size: 1288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall balloon_back_ref(int a1)
{
  void *ResArchiveById; // r6
  void *Model2; // r5
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r0
  void *v13; // r6
  void *v14; // r7
  ModelWrapper *v15; // r5
  ModelWrapper *v16; // r0
  int v17; // r0
  int v18; // r5
  int v19; // r0
  int v20; // r0
  void *v21; // r5
  void *v22; // r6
  ModelWrapper *v23; // r7
  ModelWrapper *v24; // r0
  int v25; // r0
  int v26; // r4
  char v27; // r12
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "balloon";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 1, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 1, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v4, 0x0) + 68))(FIELD_U32(v4, 0x0), a1 + 144);
  v6 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "float";
  SkeletalAnim_play(v6, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24) = 1065353216;
  *(_DWORD *)(**(_DWORD **)(a1 + 6300) + 36) = 25;
  v7 = **(_DWORD **)(FIELD_U32(a1, 6300) + 20);
  v8 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "balloon";
  TexAnim_play(v7, v8, &a2);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 20) + 24) = 0;
  v9 = **(_DWORD **)(FIELD_U32(a1, 6300) + 20);
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  v10 = **(_DWORD **)(FIELD_U32(a1, 6300) + 28);
  v11 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "float";
  sub_60446088(v10, v11, (int)&a2);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 24) = 1065353216;
  v12 = **(_DWORD **)(FIELD_U32(a1, 6300) + 28);
  FIELD_U32(v12, 20) = 0;
  FIELD_U32(v12, 28) |= 2u;
  v13 = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "balloon_back";
  v14 = (void *)Resource_getModel2(v13, &a2, 1, 1, 0, 0, 0, 0, 0);
  v15 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v16 = ModelWrapper_ctor(v15, v14, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v16, (int)v13, 0, 0);
  FIELD_U32(a1, 6304) = v15;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v15, 0x0) + 68))(FIELD_U32(v15, 0x0), a1 + 144);
  v17 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "float_back";
  SkeletalAnim_play(v17, (int)v13, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 24) = 1065353216;
  *(_DWORD *)(**(_DWORD **)(a1 + 6304) + 36) = 25;
  v18 = **(_DWORD **)(FIELD_U32(a1, 6304) + 20);
  v19 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "balloon_back";
  TexAnim_play(v18, v19, &a2);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 20) + 24) = 0;
  v20 = **(_DWORD **)(FIELD_U32(a1, 6304) + 20);
  FIELD_U32(v20, 20) = 0;
  FIELD_U32(v20, 28) |= 2u;
  if ( FIELD_U32(a1, 6320) == 1 )
  {
    v21 = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 1u);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "I_kinoko";
    v22 = (void *)Resource_getModel2(v21, &a2, 1, 0, 0, 0, 0, 0, 0);
    v23 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v24 = ModelWrapper_ctor(v23, v22, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v24, (int)v21, 0, 0);
    FIELD_U32(a1, 6308) = v23;
    (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v23, 0x0) + 68))(FIELD_U32(v23, 0x0), a1 + 6340);
    v25 = **(_DWORD **)(FIELD_U32(a1, 6308) + 12);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "wait";
    SkeletalAnim_play(v25, (int)v21, (int)&a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6308) + 12) + 4), 1);
    *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6308) + 12) + 24) = 1056964608;
    *(_DWORD *)(**(_DWORD **)(a1 + 6308) + 36) = 25;
    v26 = **(_DWORD **)(a1 + 6308);
    if ( ((unsigned int)&dword_60C80400 & ~(1612987112 << v27) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
    {
      dword_60C803FC = (int)&off_60BC3228;
      _cxa_guard_release(&dword_60C80400);
    }
    if ( v26 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v26)(v26, &dword_60C803FC) == 1 )
      {
        FIELD_U32(v26, 312) = 6;
        FIELD_U32(v26, 36) = 8;
      }
    }
  }
}
