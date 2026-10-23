/* pakkun_tane_ref
 * address: 0x6030A988   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall pakkun_tane_ref(int a1)
{
  void *v2; // r0
  int v3; // r9
  void *Model2; // r7
  ModelWrapper *v5; // r5
  ModelWrapper *v6; // r0
  float32x2_t v8; // [sp+18h] [bp-58h] BYREF
  int v9; // [sp+20h] [bp-50h]
  int v10; // [sp+24h] [bp-4Ch]
  int v11; // [sp+28h] [bp-48h]
  int v12; // [sp+2Ch] [bp-44h]
  int v13; // [sp+30h] [bp-40h]
  int v14; // [sp+34h] [bp-3Ch]
  int v15; // [sp+38h] [bp-38h]
  int v16; // [sp+3Ch] [bp-34h]
  int v17; // [sp+40h] [bp-30h]
  int v18; // [sp+44h] [bp-2Ch]
  sead__SafeString a2; // [sp+48h] [bp-28h] BYREF

  if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
    sub_60003D84((_DWORD *)a1);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U32(a1, 6664) = 1;
  FIELD_U32(a1, 624) = a1 + 6636;
  v8.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v8.n64_u32[1] = (unsigned __int32)"pakkun_tane";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v8);
  a2.vtable = &sead__SafeStringBase__vtable;
  v3 = (int)v2;
  a2.cstr = "pakkun_tane";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v6, v3, 0, 0);
  FIELD_U32(a1, 6300) = v5;
  v8.n64_u64[0] = 1065353216;
  v9 = 0;
  v11 = 0;
  v12 = 1065353216;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 1065353216;
  v10 = FIELD_U32(a1, 108);
  v14 = FIELD_U32(a1, 112);
  v18 = FIELD_U32(a1, 116);
  Mtx34_rotateY(&v8, (unsigned int *)(a1 + 160));
  Mtx34_rotateX(&v8, (unsigned int *)(a1 + 156));
  Mtx34_rotateZ(&v8, (unsigned int *)(a1 + 164));
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6300) + 60))(**(_DWORD **)(a1 + 6300), &v8);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6300) + 68))(**(_DWORD **)(a1 + 6300), a1 + 144);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6300) + 52))(**(_DWORD **)(a1 + 6300));
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6300) + 56))(**(_DWORD **)(a1 + 6300));
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1132462080;
  FIELD_U32(a1, 504) = 1132462080;
  FIELD_U32(a1, 508) = 1115684864;
  FIELD_U32(a1, 512) = 1115684864;
  CollisionMgr_init(
    (CollisionMgr *)(a1 + 648),
    (StateActor *)a1,
    &stru_60AFF234,
    &stru_60AFF240,
    (CollisionMgr_Sensor *)&unk_60AFF24C);
  FIELD_U32(a1, 3192) |= 0x200u;
  FIELD_U32(a1, 3200) |= 0x200u;
  FIELD_U32(a1, 3176) |= 0x200u;
  FIELD_U32(a1, 3184) |= 0x200u;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9308C);
  return 1;
}
