/* sub_6037EF30
 * address: 0x6037EF30   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6037EF30(int a1)
{
  float result; // s0

  sub_602CB83C(a1 + 6324);
  result = FIELD_F32(a1, 144) * 16.0;
  FIELD_F32(a1, 12472) = result;
  return result;
}
