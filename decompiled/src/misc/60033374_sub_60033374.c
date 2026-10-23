/* sub_60033374
 * address: 0x60033374   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60033374(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "KK";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 0, 2, 1, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 2, 1, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  sub_60421AE4(v4, &a2, 1);
  FIELD_U32(a1, 144) = 1067869798;
  FIELD_U32(a1, 148) = 1067869798;
  FIELD_U32(a1, 152) = 1067869798;
  return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6300) + 68))(**(_DWORD **)(a1 + 6300));
}
