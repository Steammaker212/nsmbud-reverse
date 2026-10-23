/* sub_6063CC30
 * address: 0x6063CC30   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6063CC30(ModelWrapper **a1, void *a2, sead__SafeString *a3, ModelWrapper **a4)
{
  ModelWrapper **v4; // r7
  unsigned int v8; // r5
  ModelWrapper *result; // r0

  v4 = a1;
  v8 = (unsigned int)(a1 + 10);
  do
  {
    result = sub_6063C8A0(v4, a2, a3, a4);
    v4 += 5;
    a4 += 3;
  }
  while ( (unsigned int)v4 < v8 );
  return result;
}
