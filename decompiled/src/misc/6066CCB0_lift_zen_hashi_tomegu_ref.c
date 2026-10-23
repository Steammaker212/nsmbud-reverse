/* lift_zen_hashi_tomegu_ref
 * address: 0x6066CCB0   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_zen_hashi_tomegu_ref(int a1)
{
  void *ResArchiveById; // r9
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  ModelWrapper **v6; // r6
  int v7; // r1
  StateMgr *v8; // r0
  int *v9; // r1
  sead__SafeString a2; // [sp+18h] [bp-60h] BYREF
  int v12; // [sp+20h] [bp-58h]
  int v13; // [sp+24h] [bp-54h]
  int v14; // [sp+28h] [bp-50h]
  int v15; // [sp+2Ch] [bp-4Ch]
  int v16; // [sp+30h] [bp-48h]
  int v17; // [sp+34h] [bp-44h]
  int v18; // [sp+38h] [bp-40h]
  int v19; // [sp+3Ch] [bp-3Ch]
  int v20; // [sp+40h] [bp-38h]
  int v21; // [sp+44h] [bp-34h]
  signed int v22[3]; // [sp+48h] [bp-30h] BYREF
  signed int v23; // [sp+54h] [bp-24h] BYREF

  FIELD_U32(a1, 500) = 1133510656;
  FIELD_U32(a1, 504) = 1115684864;
  FIELD_U32(a1, 116) = 1142784000;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_zen_hashi_tomegu";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6100) = v4;
  v6 = (ModelWrapper **)(a1 + 6100);
  v7 = FIELD_U8(a1, 28);
  FIELD_U8(a1, 6104) = v7;
  if ( sub_606D4384(v22, v7) )
  {
    sub_606D45B8(a1 + 6108, a1 + 6116);
    sub_606D4384(&v23, FIELD_U8(a1, 6104));
    v22[1] = 0;
    v22[2] = 0;
    sub_606D465C(&a2, a1 + 6112);
    v8 = (StateMgr *)(a1 + 6084);
    v9 = &dword_60CB6F00;
  }
  else
  {
    v8 = (StateMgr *)(a1 + 6084);
    v9 = &dword_60CB6EE0;
  }
  StateMgr__changeState(v8, (StateBase *)v9);
  a2.vtable = (void *)1065353216;
  a2.cstr = 0;
  v12 = 0;
  v14 = 0;
  v15 = 1065353216;
  v16 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 1065353216;
  v13 = FIELD_U32(a1, 108);
  v17 = FIELD_U32(a1, 112);
  v21 = FIELD_U32(a1, 116);
  (*(void (__fastcall **)(void *, sead__SafeString *))(*(_DWORD *)(*v6)->model + 60))((*v6)->model, &a2);
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)(*v6)->model + 68))((*v6)->model, a1 + 144);
  ModelWrapper_updateModel(*v6);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1103101952;
  FIELD_U32(a1, 508) = 1115684864;
  FIELD_U32(a1, 512) = 1120403456;
  return 1;
}
