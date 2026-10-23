/* LuigiAnm_ref
 * address: 0x6075A088   size: 760   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LuigiAnm_ref(int a1, int a2, int a3, int a4, signed int unk4)
{
  int v7; // r0
  const char *v8; // r1
  int v9; // r0
  void *v10; // r6
  int Model; // r0
  void *v12; // r9
  ModelWrapper *v13; // r7
  ModelWrapper *v14; // r0
  int v15; // r0
  void *v16; // r5
  int Model2; // r0
  void *v18; // r8
  ModelWrapper *v19; // r6
  ModelWrapper *v20; // r0
  int (**v22)(); // [sp+1Ch] [bp-34h] BYREF
  const char *v23; // [sp+20h] [bp-30h]
  int v24; // [sp+24h] [bp-2Ch]
  int v25; // [sp+28h] [bp-28h] BYREF

  sub_6078C444(a1, &dword_60CBEF90[34 * a2], a2, a3, a4, unk4);
  *(_DWORD *)a1 = off_60C23FAC;
  v22 = &sead__SafeStringBase__vtable;
  v23 = "LuigiAnm";
  FIELD_U32(a1, 544) = LoadResource(ResourceMgrRelated_instance, &v22);
  FIELD_U32(a1, 568) = 0;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 0;
  FIELD_U8(a1, 564) = 0;
  FIELD_U32(a1, 560) = 0;
  FIELD_U32(a1, 556) = 0;
  FIELD_U32(a1, 552) = 0;
  FIELD_U32(a1, 548) = 0;
  FIELD_U8(dword_60C9BBD4, 18064) = FIELD_U8(a1, 540);
  v22 = 0;
  v23 = 0;
  v24 = 0;
  sub_608DEB0C(&v22, 2, (int)&v25);
  v7 = (int)v22;
  v8 = v23;
  if ( (int)v22 < (int)v23 )
  {
    *(_DWORD *)(v24 + 4 * (_DWORD)v22) = FIELD_U32(a1, 20);
    v7 = (int)v22 + 1;
    v22 = (int (**)())((char *)v22 + 1);
    v8 = v23;
  }
  if ( v7 < (int)v8 )
  {
    *(_DWORD *)(v24 + 4 * v7) = FIELD_U32(a1, 544);
    v22 = (int (**)())((char *)v22 + 1);
  }
  sub_6078C590(a1, &v22);
  v9 = sub_60792ACC(a1);
  v10 = *(void **)(a1 + 16);
  if ( v9 == 1 )
    Model = Resource_getModel(v10, (sead__SafeString *)&dword_60CBF0B0[4 * a2], 6, 0, 1, 0, 0, 0, 1, 0);
  else
    Model = Resource_getModel2(*(void **)(a1 + 16), (sead__SafeString *)&dword_60CBF0B0[4 * a2], 0, 1, 0, 0, 0, 0, 0);
  v12 = (void *)Model;
  v13 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v14 = ModelWrapper_ctor(v13, v12, 0, 1, 0, 0, 0);
  ModelWrapper_setup(v14, v10, (int *)&v22, 0);
  FIELD_U32(a1, 548) = v13;
  v15 = sub_60792ACC(a1);
  v16 = *(void **)(a1 + 16);
  if ( v15 == 1 )
    Model2 = Resource_getModel(v16, (sead__SafeString *)&dword_60CBF0B0[4 * a2 + 2], 6, 0, 1, 0, 0, 0, 1, 0);
  else
    Model2 = Resource_getModel2(
               *(void **)(a1 + 16),
               (sead__SafeString *)&dword_60CBF0B0[4 * a2 + 2],
               0,
               1,
               0,
               0,
               0,
               0,
               0);
  v18 = (void *)Model2;
  v19 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v20 = ModelWrapper_ctor(v19, v18, 0, 1, 0, 0, 0);
  ModelWrapper_setup(v20, v16, (int *)&v22, 0);
  FIELD_U32(a1, 552) = v19;
  FIELD_U8(dword_60C9BBD4, 18064) = 1;
  sub_6078E5A8(a1, FIELD_U32(a1, 472));
  return a1;
}
