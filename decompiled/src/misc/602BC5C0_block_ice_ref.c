/* block_ice_ref
 * address: 0x602BC5C0   size: 964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall block_ice_ref(int a1)
{
  unsigned int v2; // r7
  int v3; // r1
  int v4; // r12
  unsigned int v5; // r3
  float v6; // s2
  int v7; // s0
  void *v8; // r0
  int v9; // r5
  void *Model2; // r6
  ModelWrapper *v11; // r7
  ModelWrapper *v12; // r0
  float v13; // s0
  float v14; // s2
  float v15; // s0
  float v16; // s10
  ShapedColliderInfo v18; // [sp+18h] [bp-78h] BYREF
  sead__SafeString a2; // [sp+3Ch] [bp-54h] BYREF
  float v20; // [sp+44h] [bp-4Ch]
  float v21; // [sp+48h] [bp-48h]
  float v22; // [sp+4Ch] [bp-44h]
  float v23; // [sp+50h] [bp-40h]
  float v24; // [sp+54h] [bp-3Ch]
  float v25; // [sp+58h] [bp-38h]
  float v26; // [sp+5Ch] [bp-34h]
  float v27; // [sp+60h] [bp-30h]
  float v28; // [sp+64h] [bp-2Ch]
  float v29; // [sp+68h] [bp-28h]

  v2 = FIELD_U32(a1, 24);
  v3 = ((v2 >> 8) & 0xF) + 1;
  FIELD_U8(a1, 6304) = v3;
  v4 = (v2 & 0xF) + 1;
  FIELD_U8(a1, 6305) = v4;
  v5 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 6306) = BYTE1(v5) & 0xF;
  FIELD_U8(a1, 6308) = BYTE2(v5) & 0xF;
  v6 = *(float *)&dword_60AF25D4[(v5 >> 12) & 3];
  v7 = -11930464 * byte_60AFE76C[(HIWORD(v2) & 0xF) % 5u];
  FIELD_U32(a1, 80) = ((v5 >> 20) & 1) == 0;
  FIELD_U16(a1, 7010) = 10 * (v5 >> 28);
  FIELD_U16(a1, 7012) = 10 * (HIBYTE(v5) & 0xF);
  FIELD_U32(a1, 6344) = (int)(float)(v6 * (float)v7);
  FIELD_U8(a1, 6332) = (v5 & 0xF0000) != 0;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_F32(a1, 144) = (float)(unsigned int)v3;
  FIELD_F32(a1, 148) = (float)(unsigned int)v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "block_ice";
  v8 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  v9 = (int)v8;
  a2.cstr = "block_ice";
  Model2 = (void *)Resource_getModel2(v8, &a2, 1, 0, 0, 0, 0, 0, 0);
  v11 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v12 = ModelWrapper_ctor(v11, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v12, v9, 0, 0);
  FIELD_U32(a1, 6300) = v11;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v11, 0x0) + 68))(FIELD_U32(v11, 0x0), a1 + 144);
  memset(&v18, 0, 16);
  v13 = FIELD_F32(a1, 144);
  v14 = FIELD_F32(a1, 148) * 16.0;
  v18.topLeft.x = (float)(v13 * -16.0) * 0.5;
  v18.topLeft.y = v14;
  v18.bottomRight.x = (float)(v13 * 16.0) * 0.5;
  v18.bottomRight.y = 0.0;
  v18.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6352), (StageActor *)a1, &v18);
  FIELD_U32(a1, 6680) = sub_602BC9A8;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6352));
  FIELD_U32(a1, 508) = 1132462080;
  FIELD_U32(a1, 512) = 1132462080;
  sub_602BCB10(a1);
  FIELD_U8(a1, 6333) = 1;
  a2.vtable = (void *)1065353216;
  a2.cstr = 0;
  v20 = 0.0;
  v22 = 0.0;
  v23 = 1.0;
  v24 = 0.0;
  v26 = 0.0;
  v27 = 0.0;
  v28 = 1.0;
  v21 = FIELD_F32(a1, 108);
  v25 = FIELD_F32(a1, 112);
  v29 = FIELD_F32(a1, 116);
  Mtx34_rotateZ((float32x2_t *)&a2, (unsigned int *)(a1 + 164));
  v15 = FIELD_F32(a1, 6324);
  v16 = FIELD_F32(a1, 6320);
  v21 = v21
      + (float)((float)((float)(v15 * *(float *)&a2.cstr) + (float)(v16 * *(float *)&a2.vtable)) + (float)(v20 * 0.0));
  v25 = v25 + (float)((float)((float)(v15 * v23) + (float)(v16 * v22)) + (float)(v24 * 0.0));
  v29 = v29 + (float)((float)((float)(v15 * v27) + (float)(v16 * v26)) + (float)(v28 * 0.0));
  (*(void (__fastcall **)(_DWORD, sead__SafeString *))(***(_DWORD ***)(a1 + 6300) + 60))(**(_DWORD **)(a1 + 6300), &a2);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6300) + 68))(**(_DWORD **)(a1 + 6300), a1 + 144);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6300));
  FIELD_U32(a1, 6312) = FIELD_U16(a1, 7012);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91164);
  return 1;
}
