/* pol_light_ref
 * address: 0x6036EF50   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall pol_light_ref(int a1)
{
  void *ResArchiveById; // r8
  int v3; // r0
  _DWORD *v4; // r4
  void *Model2; // r6
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0
  char *v8; // r1
  _DWORD *v9; // r0
  int *v10; // r0
  int v11; // r0
  int v12; // r1
  void *v13; // r6
  ModelWrapper *v14; // r7
  ModelWrapper *v15; // r0
  int v16; // r11
  char *v17; // r1
  int v18; // r0
  char *v19; // r1
  int v20; // r0
  _DWORD **v21; // r0
  _DWORD *v22; // r0
  int v23; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v4 = (_DWORD *)(a1 + 6340);
  v3 = FIELD_U32(a1, 6340);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = off_60BF0848[v3];
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 1, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v7, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v6;
  v8 = off_60BF0850[FIELD_U32(a1, 6340)];
  v9 = *FIELD_U32(v6, 0x18).animations;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = v8;
  ShuAnim_play(v9, (int)ResArchiveById, (int)&a2);
  v10 = (int *)(a1 + 6300);
  if ( FIELD_U32(a1, 6340) )
  {
    v11 = *v10;
    v12 = 1;
  }
  else
  {
    FIELD_U8(a1, 6388) = 0;
    v12 = 0;
    v11 = *v10;
  }
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(v11 + 28) + 4), v12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "pol_light";
  v13 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 1, 2, 0, 0, 0, 0);
  v14 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v15 = ModelWrapper_ctor(v14, v13, 1, 1, 2, 0, 0);
  ModelWrapper_setup(v15, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6304) = v14;
  v16 = a1 + 6304;
  v17 = off_60BF0858[*v4];
  v18 = (int)*FIELD_U32(v14, 0x8).animations;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = v17;
  SkeletalAnim_play(v18, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v16 + 12) + 4), 1);
  v19 = off_60BF0858[*v4];
  v20 = **(_DWORD **)(*(_DWORD *)v16 + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = v19;
  sub_60446088(v20, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v16 + 28) + 4), 1);
  v21 = *(_DWORD ***)(*(_DWORD *)v16 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v16 + 24) > 1u )
    ++v21;
  v22 = *v21;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "pol_light_st";
  ShuAnim_play(v22, (int)ResArchiveById, (int)&a2);
  v23 = *(_DWORD *)(*(_DWORD *)v16 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v16 + 24) > 1u )
    v23 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v23 + 4), 1);
}
