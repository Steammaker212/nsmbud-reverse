/* sub_601F67C4
 * address: 0x601F67C4   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601F67C4(int a1)
{
  void *v2; // r5
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  void *v6; // r5
  void *v7; // r6
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  void *v10; // r5
  void *heap; // r6
  void *v12; // r8
  ModelWrapper *v13; // r7
  ModelWrapper *v14; // r0
  int v15; // r0
  int (__fastcall *v16)(int, sead__SafeString *); // r2
  sead__SafeString identifier; // [sp+1Ch] [bp-2Ch] BYREF

  sub_60002B50(a1 + 732);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobShipKoopaJr";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  FIELD_U32(a1, 756) = v2;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobShipKoopaJr";
  Model = (void *)Resource_getModel(v2, &identifier, 6, 2, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  FIELD_U32(a1, 752) = v4;
  FIELD_U32(a1, 304) = v4;
  FIELD_U32(a1, 308) = FIELD_U32(a1, 756);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobShipKoopaJrBoro";
  v6 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  FIELD_U32(a1, 764) = v6;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobShipKoopaJrBoro";
  v7 = (void *)Resource_getModel(v6, &identifier, 6, 2, 0, 0, 0, 0, 1, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v9 = sub_60421830(v8, v7, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v9, (int)v6, 0, 0);
  FIELD_U32(a1, 760) = v8;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "magic_hand";
  v10 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  FIELD_U32(a1, 772) = v10;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "magic_hand";
  heap = *(void **)(a1 + 748);
  v12 = (void *)Resource_getModel(v10, &identifier, 6, 1, 0, 0, 0, 0, 1, (int)heap);
  v13 = (ModelWrapper *)operator_new_8DE25C(0x30u, heap, 4);
  v14 = ModelWrapper_ctor(v13, v12, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v14, (int)v10, 0, heap);
  FIELD_U32(a1, 768) = v13;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v13, 0x0) + 68))(FIELD_U32(v13, 0x0), a1 + 128);
  v15 = **(_DWORD **)(a1 + 304);
  v16 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v15 + 84);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "center";
  FIELD_U32(a1, 924) = v16(v15, &identifier);
  FIELD_U32(a1, 212) = 1141473280;
  if ( sub_6019B154(6u, 0x16u) == 1 )
    FIELD_U16(a1, 932) = 0;
  sub_601F0304(a1);
  if ( !FIELD_U8(a1, 932) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 352))(a1);
  return 1;
}
