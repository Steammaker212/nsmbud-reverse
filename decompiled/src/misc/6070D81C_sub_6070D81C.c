/* sub_6070D81C
 * address: 0x6070D81C   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070D81C(int a1, sead__SafeString *a2)
{
  void *ResArchiveById; // r5
  void *Model2; // r7
  ModelWrapper *v6; // r4
  ModelWrapper *v7; // r0
  int result; // r0
  void *v9; // r7
  void *v10; // r4
  int v11; // r5
  ModelWrapper *v12; // r0

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  Model2 = (void *)Resource_getModel2(ResArchiveById, a2, 0, 0, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v7, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6120) = v6;
  result = 0;
  if ( *a2[1].cstr )
  {
    v9 = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 1u);
    v10 = (void *)Resource_getModel2(v9, a2 + 1, 0, 0, 1, 0, 0, 0, 0);
    v11 = operator_new_8DE25C(0x30u, 0, 4);
    v12 = ModelWrapper_ctor((ModelWrapper *)v11, v10, 0, 0, 1, 0, 0);
    ModelWrapper_setup(v12, v9, 0, 0);
    FIELD_U32(a1, 6124) = v11;
    return sub_60446088(**(_DWORD **)(v11 + 28), (int)v9, &dword_60CBCB7C);
  }
  return result;
}
