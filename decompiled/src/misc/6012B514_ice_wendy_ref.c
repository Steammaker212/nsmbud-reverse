/* ice_wendy_ref
 * address: 0x6012B514   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ice_wendy_ref(int a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r0
  unsigned int v8; // r1
  _DWORD **v9; // r0
  _DWORD *v10; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ice_wendy";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ice_wendy_ashiba";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 2, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 2, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  FIELD_U32(a1, 644) = v4;
  v6 = (int)*FIELD_U32(v4, 0x1C);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ice_wendy_ashiba";
  sub_60446088(v6, (int)v2, (int)&a2);
  v7 = FIELD_U32(a1, 644);
  v8 = FIELD_U32(v7, 24);
  v9 = *(_DWORD ***)(v7 + 28);
  if ( v8 > 1 )
    ++v9;
  v10 = *v9;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ice_wendy_ashiba";
  return ShuAnim_play(v10, (int)v2, (int)&a2);
}
