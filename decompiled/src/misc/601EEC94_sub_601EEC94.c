/* sub_601EEC94
 * address: 0x601EEC94   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601EEC94(int a1)
{
  float result; // s0

  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  result = FIELD_F32(a1, 84) + -80.0;
  FIELD_F32(a1, 84) = result;
  return result;
}
