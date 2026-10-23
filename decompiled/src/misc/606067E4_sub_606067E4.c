/* sub_606067E4
 * address: 0x606067E4   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606067E4(int a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  void (__fastcall ***v7)(_DWORD, int, void *, sead__SafeString *, int *); // r0
  void (__fastcall *v8)(_DWORD, int, void *, sead__SafeString *, int *); // r7
  int (__fastcall ***v9)(_DWORD, int, void *, sead__SafeString *, int *); // r0
  int (__fastcall *v10)(_DWORD, int, void *, sead__SafeString *, int *); // r7
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "Mask_flashlight_obake";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "flashlight_obake";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 4) = v4;
  *((_DWORD *)FIELD_U32(v4, 0x0) + 9) = 23;
  v6 = **(_DWORD **)(FIELD_U32(a1, 4) + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "flashlight_obake";
  sub_60446088(v6, (int)v2, &a2);
  v7 = (void (__fastcall ***)(_DWORD, int, void *, sead__SafeString *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 4) + 132))(
                                                                                **(_DWORD **)(a1 + 4),
                                                                                0);
  v8 = **v7;
  a2.vtable = 0;
  v8(v7, 1, &unk_60B023B4, &a2, &dword_60B3B944);
  v9 = (int (__fastcall ***)(_DWORD, int, void *, sead__SafeString *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 4) + 132))(
                                                                               **(_DWORD **)(a1 + 4),
                                                                               0);
  v10 = **v9;
  a2.vtable = 0;
  return v10(v9, 2, &unk_60B023B4, &a2, &dword_60B3B944);
}
