/* sub_601496B4
 * address: 0x601496B4   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601496B4(int a1)
{
  void *v2; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  bool v6; // zf
  _BOOL4 v7; // r0
  int v8; // r0
  _DWORD **v9; // r7
  StateMgr *v10; // r0
  int *v11; // r1
  sead__SafeString a2; // [sp+18h] [bp-50h] BYREF
  float32x2_t v14; // [sp+20h] [bp-48h] BYREF
  int v15; // [sp+28h] [bp-40h]
  int v16; // [sp+2Ch] [bp-3Ch]
  int v17; // [sp+30h] [bp-38h]
  int v18; // [sp+34h] [bp-34h]
  int v19; // [sp+38h] [bp-30h]
  int v20; // [sp+3Ch] [bp-2Ch]
  int v21; // [sp+40h] [bp-28h]
  int v22; // [sp+44h] [bp-24h]
  int v23; // [sp+48h] [bp-20h]
  int v24; // [sp+4Ch] [bp-1Ch]

  FIELD_U32(a1, 116) = 1153138688;
  v14.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v14.n64_u32[1] = (unsigned __int32)"choropoo";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v14);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "spanner";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  FIELD_U32(a1, 6472) = v4;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v6 = (FIELD_U32(a1, 20) & 1) == 0;
  v7 = !(FIELD_U8(a1, 20) & 1);
  FIELD_U32(a1, 80) = v7;
  FIELD_U32(a1, 11868) = v7;
  v8 = 0x20000000;
  if ( !v6 )
    v8 = -536870912;
  FIELD_U32(a1, 164) = v8;
  v14.n64_u8[0] = 3;
  ActiveCollider_init2(
    (ActiveCollider *)(a1 + 188),
    (StateActor *)a1,
    (ActiveColliderInfo *)&unk_60BD435C,
    (unsigned __int8 *)&v14,
    0);
  v9 = (_DWORD **)(a1 + 6472);
  FIELD_U32(a1, 300) = a1 + 11980;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  if ( (FIELD_U8(a1, 20) & 0x10) != 0 )
  {
    v10 = (StateMgr *)(a1 + 6084);
    v11 = &dword_60C88190;
  }
  else
  {
    FIELD_U8(a1, 11864) = 1;
    v10 = (StateMgr *)(a1 + 6084);
    v11 = &dword_60C881B0;
  }
  StateMgr__changeState(v10, (StateBase *)v11);
  v14.n64_u64[0] = 1065353216;
  v15 = 0;
  v17 = 0;
  v18 = 1065353216;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 1065353216;
  v16 = FIELD_U32(a1, 108);
  v20 = FIELD_U32(a1, 112);
  v24 = FIELD_U32(a1, 116);
  Mtx34_rotateY(&v14, (unsigned int *)(a1 + 160));
  Mtx34_rotateX(&v14, (unsigned int *)(a1 + 156));
  Mtx34_rotateZ(&v14, (unsigned int *)(a1 + 164));
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)**v9 + 60))(**v9, &v14);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v9 + 68))(**v9, a1 + 144);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v9 + 52))(**v9);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v9 + 56))(**v9);
  return 1;
}
