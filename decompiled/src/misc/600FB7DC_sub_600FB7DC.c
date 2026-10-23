/* sub_600FB7DC
 * address: 0x600FB7DC   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FB7DC(_DWORD *a1)
{
  void *v2; // r9
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  int v8; // r1
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r1
  int v12; // r0
  int (__fastcall *v13)(int, sead__SafeString *); // r2
  int v14; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  BowserJrBase__vf3EC((int)a1);
  v2 = (void *)a1[1774];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  a1[1775] = v4;
  animations = (unsigned int)v4[1].texAnims.animations;
  v7 = (int *)FIELD_U32(v4, 0xC);
  v8 = a1[1774];
  if ( FIELD_U32(v4, 0x8) > animations )
    v7 += animations;
  v9 = *v7;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jc_wait";
  SkeletalAnim_play(v9, v8, (int)&a2);
  v10 = **(_DWORD ***)(a1[1775] + 28);
  a1[1776] = v10;
  v11 = a1[1774];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "damage_s";
  ShuAnim_play(v10, v11, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1776] + 4), 1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 776))(a1);
  v12 = *(_DWORD *)a1[1775];
  v13 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v12 + 84);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "mask";
  v14 = v13(v12, &a2);
  return (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)a1[1775] + 112))(*(_DWORD *)a1[1775], v14, 0);
}
