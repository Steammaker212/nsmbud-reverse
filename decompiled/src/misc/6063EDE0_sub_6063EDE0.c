/* sub_6063EDE0
 * address: 0x6063EDE0   size: 1044   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063EDE0(int a1)
{
  int v2; // r1
  void *v3; // r10
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r5
  int v8; // r1
  char *v9; // r0
  void *v10; // r10
  void *v11; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  int v14; // r0
  int v15; // r5
  int v16; // s16
  int v17; // r0
  char v18; // r12
  void *v19; // r5
  void *v20; // r6
  ModelWrapper *v21; // r7
  ModelWrapper *v22; // r0
  sead__SafeString a2; // [sp+18h] [bp-38h] BYREF
  int (**v25)(); // [sp+20h] [bp-30h] BYREF
  const char *v26; // [sp+24h] [bp-2Ch]

  v2 = FIELD_U32(a1, 80);
  v25 = &sead__SafeStringBase__vtable;
  v26 = "lift_han_leaf";
  if ( v2 == 1 )
  {
    v3 = (void *)LoadResource(ResourceMgrRelated_instance, &v25);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "leafbud2";
    Model2 = (void *)Resource_getModel2(v3, &a2, 1, 0, 0, 0, 0, 0, 0);
    v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v6, v3, 0, 0);
    FIELD_U32(a1, 6104) = v5;
    v7 = (int)*FIELD_U32(v5, 0xC);
    v25 = &sead__SafeStringBase__vtable;
    v26 = "lift_han_leaf";
    v8 = LoadResource(ResourceMgrRelated_instance, &v25);
    a2.vtable = &sead__SafeStringBase__vtable;
    v9 = "leafbud2_ap";
  }
  else
  {
    v10 = (void *)LoadResource(ResourceMgrRelated_instance, &v25);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "leafbud";
    v11 = (void *)Resource_getModel2(v10, &a2, 1, 0, 0, 0, 0, 0, 0);
    v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v13 = ModelWrapper_ctor(v12, v11, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v13, v10, 0, 0);
    FIELD_U32(a1, 6104) = v12;
    v7 = (int)*FIELD_U32(v12, 0xC);
    v25 = &sead__SafeStringBase__vtable;
    v26 = "lift_han_leaf";
    v8 = LoadResource(ResourceMgrRelated_instance, &v25);
    a2.vtable = &sead__SafeStringBase__vtable;
    v9 = "leafbud_ap";
  }
  a2.cstr = v9;
  SkeletalAnim_play(v7, v8, (const char **)&a2);
  v15 = a1 + 6104;
  v14 = FIELD_U32(a1, 6104);
  if ( (FIELD_U8(a1, 27) & 0x10) != 0 )
  {
    v16 = *(_DWORD *)(**(_DWORD **)(v14 + 12) + 8);
    FIELD_U8(a1, 6163) = 1;
  }
  else
  {
    v16 = 0;
  }
  *(_DWORD *)(**(_DWORD **)(v14 + 12) + 24) = 0;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v15 + 12) + 4), 0);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v15 + 12) + 4));
  v17 = **(_DWORD **)(*(_DWORD *)v15 + 12);
  FIELD_U32(v17, 20) = v16;
  FIELD_U32(v17, 28) |= 2u;
  if ( ((unsigned int)dword_60CB5880 & ~(1617162380 << v18) & 1) == 0 && _cxa_guard_acquire(dword_60CB5880) )
  {
    dword_60CB58BC = (int)&sead__SafeStringBase__vtable;
    dword_60CB58C0 = (int)"lift_han_leaf_S";
    dword_60CB58C4 = (int)&sead__SafeStringBase__vtable;
    dword_60CB58C8 = (int)"lift_han_leaf_M";
    dword_60CB58CC = (int)&sead__SafeStringBase__vtable;
    dword_60CB58D0 = (int)"lift_han_leaf_L";
    sub_60000288();
    _cxa_guard_release(dword_60CB5880);
  }
  v25 = &sead__SafeStringBase__vtable;
  v26 = "lift_han_leaf";
  v19 = (void *)LoadResource(ResourceMgrRelated_instance, &v25);
  v20 = (void *)Resource_getModel2(
                  v19,
                  (sead__SafeString *)((char *)&dword_60CB5880[15] + ((FIELD_U32(a1, 24) >> 5) & 0x18)),
                  1,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0);
  v21 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v22 = ModelWrapper_ctor(v21, v20, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v22, v19, 0, 0);
  FIELD_U32(a1, 6108) = v21;
  if ( (FIELD_U8(a1, 27) & 0x10) != 0 )
    return lift_han_leaf_ref(a1);
  else
    return lift_han_leaf_ref_63FDE8(a1);
}
