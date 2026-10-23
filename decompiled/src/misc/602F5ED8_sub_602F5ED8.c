/* sub_602F5ED8
 * address: 0x602F5ED8   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602F5ED8(int a1)
{
  void *v2; // r5
  int *v3; // r4
  void *Model2; // r8
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  unsigned int animations; // r2
  int *v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r1
  _DWORD *v13; // r0
  int v14; // r1
  int v15; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "kuribo_iga";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  FIELD_U32(a1, 6300) = v2;
  v3 = (int *)(a1 + 6300);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "kuribo_iga";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 1, 1, 1, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 1, 1, 1, 0);
  j_ModelWrapper_setupModel((int)v6, (int)v2, 0, 0);
  v3[1] = (int)v5;
  animations = (unsigned int)v5[1].texAnims.animations;
  v8 = (int *)FIELD_U32(v5, 0xC);
  v9 = *v3;
  if ( FIELD_U32(v5, 0x8) > animations )
    v8 += animations;
  v10 = *v8;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "walk";
  SkeletalAnim_play(v10, v9, (int)&a2);
  v11 = **(_DWORD **)(v3[1] + 20);
  v3[2] = v11;
  v12 = *v3;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "walk";
  TexAnim_play(v11, v12, &a2);
  v13 = **(_DWORD ***)(v3[1] + 28);
  v3[3] = (int)v13;
  v14 = *v3;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wakeUp";
  ShuAnim_play(v13, v14, (int)&a2);
  v15 = **(_DWORD **)(v3[1] + 36);
  v3[4] = v15;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "look";
  sub_6045195C(v15, *v3, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(v3[4] + 4), 0);
}
