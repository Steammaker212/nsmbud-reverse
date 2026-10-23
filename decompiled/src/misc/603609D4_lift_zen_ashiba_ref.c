/* lift_zen_ashiba_ref
 * address: 0x603609D4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall lift_zen_ashiba_ref(int a1)
{
  void *ResArchiveById; // r8
  char *v3; // r0
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  ModelWrapper *result; // r0
  sead__SafeString a2; // [sp+18h] [bp-20h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  if ( FIELD_U8(a1, 1316) )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    v3 = "lift_zen_ashiba_8x10";
  }
  else
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    v3 = "lift_zen_ashiba_4x10";
  }
  a2.cstr = v3;
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 0, 0, 0, 0, 0);
  result = j_ModelWrapper_setupModel((int)v6, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 1312) = v5;
  return result;
}
