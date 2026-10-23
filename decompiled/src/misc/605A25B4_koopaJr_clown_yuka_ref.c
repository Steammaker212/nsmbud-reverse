/* koopaJr_clown_yuka_ref
 * address: 0x605A25B4   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall koopaJr_clown_yuka_ref(int a1)
{
  void *Resource; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  void (__fastcall ***v6)(_DWORD, _DWORD, void *, _DWORD *, int *); // r0
  void (__fastcall *v7)(_DWORD, _DWORD, void *, _DWORD *, int *); // r7
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  _DWORD v10[10]; // [sp+20h] [bp-28h] BYREF

  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "koopaJr_clown_yuka";
  a2.vtable = &sead__SafeStringBase__vtable;
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v10);
  a2.cstr = "koopaJr_clown_yuka";
  Model2 = (void *)Resource_getModel2(Resource, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, Resource, 0, 0);
  FIELD_U32(a1, 6104) = v4;
  v6 = (void (__fastcall ***)(_DWORD, _DWORD, void *, _DWORD *, int *))(*(int (__fastcall **)(void *, _DWORD))(*(_DWORD *)FIELD_U32(v4, 0x0) + 132))(
                                                                         FIELD_U32(v4, 0x0),
                                                                         0);
  v7 = **v6;
  v10[0] = 0;
  v7(v6, 0, &unk_60B023B4, v10, &dword_60B3B944);
  result = **(_DWORD **)(a1 + 6104);
  FIELD_U32(result, 36) = 1;
  return result;
}
