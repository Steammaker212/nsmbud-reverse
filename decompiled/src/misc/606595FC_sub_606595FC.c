/* sub_606595FC
 * address: 0x606595FC   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606595FC(int a1, sead__SafeString *a2)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0
  void *v8; // r6
  ModelWrapper *v9; // r7
  ModelWrapper *v10; // r0

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  Model2 = (void *)Resource_getModel2(ResArchiveById, a2, 0, 0, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v7, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6192) = v6;
  v8 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)&dword_60CB65EC, 0, 0, 0, 0, 0, 0, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, v8, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v10, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6196) = v9;
  return 6196;
}
