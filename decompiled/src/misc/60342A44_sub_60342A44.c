/* sub_60342A44
 * address: 0x60342A44   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60342A44(int a1)
{
  void *v2; // r8
  void *Model2; // r5
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _DWORD **v6; // r5
  int v7; // r8
  unsigned int *v8; // r10
  unsigned int *v9; // r7
  sead__SafeString a2; // [sp+18h] [bp-58h] BYREF
  float32x2_t v12; // [sp+20h] [bp-50h] BYREF
  int v13; // [sp+28h] [bp-48h]
  int v14; // [sp+2Ch] [bp-44h]
  int v15; // [sp+30h] [bp-40h]
  int v16; // [sp+34h] [bp-3Ch]
  int v17; // [sp+38h] [bp-38h]
  int v18; // [sp+3Ch] [bp-34h]
  int v19; // [sp+40h] [bp-30h]
  int v20; // [sp+44h] [bp-2Ch]
  int v21; // [sp+48h] [bp-28h]
  int v22; // [sp+4Ch] [bp-24h]

  v12.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v12.n64_u32[1] = (unsigned __int32)"choropoo";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "manhole";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  FIELD_U32(a1, 6100) = v4;
  v6 = (_DWORD **)(a1 + 6100);
  FIELD_U32(a1, 144) = 1065353216;
  v7 = a1 + 144;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 80) = FIELD_U32(a1, 20) & 1;
  FIELD_U32(a1, 156) = 0;
  v8 = (unsigned int *)(a1 + 156);
  FIELD_U32(a1, 160) = 0;
  v9 = (unsigned int *)(a1 + 160);
  FIELD_U32(a1, 164) = 0x20000000;
  a1 += 164;
  FIELD_U32(a1, 328) = 0;
  FIELD_U32(a1, 332) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 5920), (StateBase *)&dword_60C946EC);
  v12.n64_u64[0] = 1065353216;
  v13 = 0;
  v15 = 0;
  v16 = 1065353216;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 1065353216;
  v14 = *(_DWORD *)(a1 - 56);
  v18 = *(_DWORD *)(a1 - 52);
  v22 = *(_DWORD *)(a1 - 48);
  Mtx34_rotateY(&v12, v9);
  Mtx34_rotateX(&v12, v8);
  Mtx34_rotateZ(&v12, (unsigned int *)a1);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)**v6 + 60))(**v6, &v12);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v6 + 68))(**v6, v7);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v6 + 52))(**v6);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v6 + 56))(**v6);
  return 1;
}
