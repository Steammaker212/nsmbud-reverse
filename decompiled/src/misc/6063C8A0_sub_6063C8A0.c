/* sub_6063C8A0
 * address: 0x6063C8A0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6063C8A0(ModelWrapper **a1, void *a2, sead__SafeString *a3, ModelWrapper **a4)
{
  void *Model2; // r9
  ModelWrapper *v8; // r6
  ModelWrapper *v9; // r0
  ModelWrapper *result; // r0

  Model2 = (void *)Resource_getModel2(a2, a3, 0, 0, 0, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v9, a2, 0, 0);
  *a1 = v8;
  a1[1] = *a4;
  a1[2] = a4[1];
  result = a4[2];
  a1[3] = result;
  return result;
}
