/* hanachan_big_head_ref
 * address: 0x602546B8   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall hanachan_big_head_ref(_DWORD *a1, int r1_0)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  sead__SafeString a2; // [sp+18h] [bp-20h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(r1_0 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "hanachan_big_head";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v6, (int)ResArchiveById, 0, 0);
  a1[1] = v5;
  (*(void (__fastcall **)(sead__SafeString *, _DWORD *))(*a1 + 28))(&a2, a1);
  return sub_60421938(v5, (int)ResArchiveById, (int)&a2);
}
