/* lift_turi_ashiba_wire_ref
 * address: 0x606D942C   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_turi_ashiba_wire_ref(int a1)
{
  void *v2; // r6
  void *Model2; // r8
  ModelWrapper *v4; // r5
  ModelWrapper *v5; // r0
  sead__SafeString a2; // [sp+18h] [bp-48h] BYREF
  int v8; // [sp+20h] [bp-40h]
  int v9; // [sp+24h] [bp-3Ch]
  int v10; // [sp+28h] [bp-38h]
  int v11; // [sp+2Ch] [bp-34h]
  int v12; // [sp+30h] [bp-30h]
  int v13; // [sp+34h] [bp-2Ch]
  int v14; // [sp+38h] [bp-28h]
  int v15; // [sp+3Ch] [bp-24h]
  int v16; // [sp+40h] [bp-20h]
  int v17; // [sp+44h] [bp-1Ch]

  FIELD_U32(a1, 116) = -1010302976;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_turi_ashiba_wire";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  FIELD_U32(a1, 6120) = v2;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_turi_ashiba_wire";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 6124) = v4;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1098907648;
  FIELD_U32(a1, 504) = 1144520704;
  FIELD_U32(a1, 508) = 1098907648;
  FIELD_U32(a1, 512) = 1144520704;
  a2.vtable = (void *)1065353216;
  a2.cstr = 0;
  v8 = 0;
  v10 = 0;
  v11 = 1065353216;
  v12 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 1065353216;
  v9 = FIELD_U32(a1, 108);
  v13 = FIELD_U32(a1, 112);
  v17 = FIELD_U32(a1, 116);
  (*(void (__fastcall **)(void *, sead__SafeString *))(*(_DWORD *)FIELD_U32(v4, 0x0) + 60))(FIELD_U32(v4, 0x0), &a2);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6124) + 68))(**(_DWORD **)(a1 + 6124), a1 + 144);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6124));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6124));
  return 1;
}
