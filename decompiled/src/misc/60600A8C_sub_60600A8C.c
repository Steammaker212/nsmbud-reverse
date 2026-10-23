/* sub_60600A8C
 * address: 0x60600A8C   size: 936   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60600A8C(int a1)
{
  void *v2; // r11
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  int v7; // r0
  float v8; // s6
  float v9; // s2
  int v10; // r1
  int result; // r0
  int v12; // r9
  void *CurrentHeap_const; // r7
  void *v14; // r4
  ModelWrapper *v15; // r6
  ModelWrapper *v16; // r0
  int v17; // r0
  _DWORD *v18; // r4
  int v19; // r0
  int v20; // r0
  void *v21; // [sp+28h] [bp-78h]
  _BYTE *v22; // [sp+2Ch] [bp-74h]
  _BYTE *v23; // [sp+30h] [bp-70h]
  int v24; // [sp+34h] [bp-6Ch]
  _DWORD v25[2]; // [sp+38h] [bp-68h] BYREF
  sead__SafeString a2; // [sp+40h] [bp-60h] BYREF
  int v27; // [sp+48h] [bp-58h]
  float v28; // [sp+4Ch] [bp-54h] BYREF
  float v29; // [sp+50h] [bp-50h]
  float v30; // [sp+54h] [bp-4Ch]
  int v31; // [sp+58h] [bp-48h]
  float v32; // [sp+5Ch] [bp-44h]
  float v33; // [sp+60h] [bp-40h]
  float v34; // [sp+64h] [bp-3Ch]
  int v35; // [sp+68h] [bp-38h]
  float v36; // [sp+6Ch] [bp-34h]
  float v37; // [sp+70h] [bp-30h]
  float v38; // [sp+74h] [bp-2Ch]
  int v39; // [sp+78h] [bp-28h]

  sub_60002B50(a1 + 27192);
  v28 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v29 = COERCE_FLOAT("center_firebar");
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v28);
  Model2 = (void *)Resource_getModel2(
                     v2,
                     (sead__SafeString *)&dword_60CB2828[2 * FIELD_U32(a1, 30672)],
                     0,
                     0,
                     1,
                     0,
                     0,
                     0,
                     0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 27212) = v4;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v4, 0x0) + 68))(FIELD_U32(v4, 0x0), a1 + 144);
  v6 = FIELD_U32(a1, 112);
  v7 = FIELD_U32(a1, 108);
  v8 = (float)(-0.00030118 * 0.0) + 1.0;
  v9 = (float)(0.024541 * 0.0) + 0.0;
  v28 = (float)(v8 * v8) + (float)(v9 * (float)(v9 * v9));
  v32 = v9 * v8;
  v36 = (float)(v9 * v32) - v32;
  v29 = v36;
  v33 = v8 * v8;
  v37 = (float)(v9 * v9) + (float)(v9 * (float)(v8 * v8));
  v30 = v9 * v8;
  v34 = -v9;
  v38 = v8 * v8;
  v31 = v7;
  v35 = v6;
  v39 = 1164394496;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 27212) + 60))(**(_DWORD **)(a1 + 27212), &v28);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 27212));
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "firebar_L";
  v21 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  v24 = a1;
  v23 = (_BYTE *)(a1 + 6101);
  v10 = FIELD_U8(a1, 6100);
  v22 = (_BYTE *)(a1 + 6100);
  result = FIELD_U8(a1, 6101) * v10;
  if ( FIELD_U8(a1, 6101) * (_BYTE)v10 )
  {
    v12 = 0;
    do
    {
      if ( v12 > 7 )
        CurrentHeap_const = *(void **)(v24 + 27208);
      else
        CurrentHeap_const = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = "firebar_L";
      v14 = (void *)Resource_getModel2(v21, &a2, 0, 0, 1, 0, 0, 0, (int)CurrentHeap_const);
      v15 = (ModelWrapper *)operator_new_8DE25C(0x30u, CurrentHeap_const, 4);
      v16 = ModelWrapper_ctor(v15, v14, 0, 0, 1, 0, 0);
      ModelWrapper_setup(v16, v21, 0, CurrentHeap_const);
      v17 = 0;
      if ( (unsigned int)v12 < 0x20 )
        v17 = v12;
      v18 = (_DWORD *)(v24 + 4 * v17);
      v18[6804] = v15;
      v18 += 6804;
      a2.vtable = (void *)1061997773;
      a2.cstr = (char *)1061997773;
      v27 = 1061997773;
      (*(void (__fastcall **)(void *, sead__SafeString *))(*(_DWORD *)FIELD_U32(v15, 0x0) + 68))(FIELD_U32(v15, 0x0), &a2);
      *(_DWORD *)(*(_DWORD *)*v18 + 36) = 24;
      v19 = **(_DWORD **)(*v18 + 28);
      v25[0] = &sead__SafeStringBase__vtable;
      v25[1] = "firebar_L";
      sub_60446088(v19, (int)v21, v25);
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v18 + 28) + 4), 1);
      ++v12;
      v20 = **(_DWORD **)(*v18 + 28);
      FIELD_U32(v20, 20) = 0;
      FIELD_U32(v20, 28) |= 2u;
      *(_DWORD *)(**(_DWORD **)(*v18 + 28) + 24) = 1065353216;
      result = (unsigned __int8)(*v23 * *v22);
    }
    while ( v12 < result );
  }
  return result;
}
