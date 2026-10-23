/* firebar_L_base_ref
 * address: 0x60601BC8   size: 896   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall firebar_L_base_ref(int a1)
{
  void *v2; // r5
  void *Model2; // r8
  ModelWrapper *v4; // r6
  ModelWrapper *v5; // r0
  int v6; // r1
  int v7; // r0
  float v8; // s6
  float v9; // s2
  int v10; // r1
  int result; // r0
  int v12; // r8
  void *CurrentHeap_const; // r4
  void *v14; // r6
  ModelWrapper *v15; // r7
  ModelWrapper *v16; // r0
  int v17; // r0
  _DWORD *v18; // r4
  int v19; // r0
  int v20; // r0
  _BYTE *v21; // [sp+30h] [bp-68h]
  _BYTE *v22; // [sp+34h] [bp-64h]
  int v23; // [sp+38h] [bp-60h]
  sead__SafeString identifier; // [sp+3Ch] [bp-5Ch] BYREF
  sead__SafeString a2; // [sp+44h] [bp-54h] BYREF
  float v26; // [sp+4Ch] [bp-4Ch]
  int v27; // [sp+50h] [bp-48h]
  float v28; // [sp+54h] [bp-44h]
  float v29; // [sp+58h] [bp-40h]
  float v30; // [sp+5Ch] [bp-3Ch]
  int v31; // [sp+60h] [bp-38h]
  float v32; // [sp+64h] [bp-34h]
  float v33; // [sp+68h] [bp-30h]
  float v34; // [sp+6Ch] [bp-2Ch]
  int v35; // [sp+70h] [bp-28h]

  sub_60002B50(a1 + 27192);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "firebar_L";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "firebar_L_base";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 27212) = v4;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v4, 0x0) + 68))(FIELD_U32(v4, 0x0), a1 + 27216);
  v6 = FIELD_U32(a1, 112);
  v7 = FIELD_U32(a1, 108);
  v8 = (float)(-0.00030118 * 0.0) + 1.0;
  v9 = (float)(0.024541 * 0.0) + 0.0;
  *(float *)&a2.vtable = (float)(v8 * v8) + (float)(v9 * (float)(v9 * v9));
  v28 = v9 * v8;
  v32 = (float)(v9 * v28) - v28;
  *(float *)&a2.cstr = v32;
  v29 = v8 * v8;
  v33 = (float)(v9 * v9) + (float)(v9 * (float)(v8 * v8));
  v26 = v9 * v8;
  v30 = -v9;
  v34 = v8 * v8;
  v27 = v7;
  v31 = v6;
  v35 = 1164394496;
  (*(void (__fastcall **)(_DWORD, sead__SafeString *))(***(_DWORD ***)(a1 + 27212) + 60))(
    **(_DWORD **)(a1 + 27212),
    &a2);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 27212));
  v23 = a1;
  v22 = (_BYTE *)(a1 + 6101);
  v10 = FIELD_U8(a1, 6100);
  v21 = (_BYTE *)(a1 + 6100);
  result = FIELD_U8(a1, 6101) * v10;
  if ( FIELD_U8(a1, 6101) * (_BYTE)v10 )
  {
    v12 = 0;
    do
    {
      if ( v12 > 6 )
        CurrentHeap_const = *(void **)(v23 + 27208);
      else
        CurrentHeap_const = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
      identifier.vtable = &sead__SafeStringBase__vtable;
      identifier.cstr = "firebar_L";
      v14 = (void *)Resource_getModel2(v2, &identifier, 0, 0, 1, 0, 0, 0, (int)CurrentHeap_const);
      v15 = (ModelWrapper *)operator_new_8DE25C(0x30u, CurrentHeap_const, 4);
      v16 = ModelWrapper_ctor(v15, v14, 0, 0, 1, 0, 0);
      ModelWrapper_setup(v16, v2, 0, CurrentHeap_const);
      v17 = 0;
      if ( (unsigned int)v12 < 0x40 )
        v17 = v12;
      v18 = (_DWORD *)(v23 + 4 * v17);
      v18[6807] = v15;
      v18 += 6807;
      (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v15, 0x0) + 68))(FIELD_U32(v15, 0x0), v23 + 144);
      *(_DWORD *)(*(_DWORD *)*v18 + 36) = 24;
      v19 = **(_DWORD **)(*v18 + 28);
      identifier.vtable = &sead__SafeStringBase__vtable;
      identifier.cstr = "firebar_L";
      sub_60446088(v19, (int)v2, &identifier);
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v18 + 28) + 4), 1);
      ++v12;
      v20 = **(_DWORD **)(*v18 + 28);
      FIELD_U32(v20, 20) = 0;
      FIELD_U32(v20, 28) |= 2u;
      *(_DWORD *)(**(_DWORD **)(*v18 + 28) + 24) = 1065353216;
      result = (unsigned __int8)(*v22 * *v21);
    }
    while ( v12 < result );
  }
  return result;
}
