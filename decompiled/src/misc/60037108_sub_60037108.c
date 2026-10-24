/* sub_60037108
 * address: 0x60037108   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60037108(_DWORD *a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  int v8; // r1
  int v9; // r0
  _DWORD *v10; // r0
  int *v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r0
  _DWORD *v19; // r0
  int v20; // r1
  int v21; // r0
  int (__fastcall *v22)(int, sead__SafeString *); // r2
  int v23; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  BowserJrBase__vf3EC();
  v2 = (void *)a1[1774];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  a1[1775] = v4;
  animations = (unsigned int)FIELD_U32(v4 + (1) * 48, 0x14);
  v7 = (int *)FIELD_U32(v4, 0xC);
  v8 = a1[1774];
  if ( FIELD_U32(v4, 0x8) > animations )
    v7 += animations;
  v9 = *v7;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jcb_wait";
  SkeletalAnim_play(v9, v8, (int)&a2);
  v10 = (_DWORD *)a1[1775];
  v11 = (int *)v10[3];
  v12 = v10[2];
  v13 = v10[17];
  if ( v12 > v13 )
    v11 += v13;
  v14 = *v11;
  FIELD_U32(v14, 20) = 0;
  FIELD_U32(v14, 28) |= 2u;
  v15 = (_DWORD *)a1[1775];
  v16 = v15[3];
  v17 = v15[2];
  v18 = v15[17];
  if ( v17 > v18 )
    v16 += 4 * v18;
  *(_DWORD *)(*(_DWORD *)v16 + 24) = 1065353216;
  v19 = **(_DWORD ***)(a1[1775] + 28);
  a1[1776] = v19;
  v20 = a1[1774];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "damage_s";
  ShuAnim_play(v19, v20, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1776] + 4), 1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 776))(a1);
  v21 = *(_DWORD *)a1[1775];
  v22 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v21 + 84);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "mask";
  v23 = v22(v21, &a2);
  return (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)a1[1775] + 112))(*(_DWORD *)a1[1775], v23, 0);
}
