/* lift_suisha_ashiba_ref
 * address: 0x60667DB0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall lift_suisha_ashiba_ref(int a1)
{
  unsigned int v1; // r4
  Profile *v2; // r0
  void *ResArchiveById; // r0
  void *v4; // r6
  void *Model2; // r7
  ModelWrapper *v6; // r5
  ModelWrapper *v7; // r0
  unsigned int result; // r0
  unsigned int v9; // [sp+18h] [bp-30h]
  sead__SafeString a2; // [sp+1Ch] [bp-2Ch] BYREF

  v9 = a1 + 8056;
  v1 = a1 + 6104;
  do
  {
    v2 = Profile__get(0x166u);
    ResArchiveById = (void *)Profile__getResArchiveById(v2, 0);
    a2.vtable = &sead__SafeStringBase__vtable;
    v4 = ResArchiveById;
    a2.cstr = "lift_suisha_ashiba";
    Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
    v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v7 = ModelWrapper_ctor(v6, Model2, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v7, v4, 0, 0);
    FIELD_U32(v1, 12) = v6;
    v1 += 488;
    result = v9;
  }
  while ( v1 < v9 );
  return result;
}
