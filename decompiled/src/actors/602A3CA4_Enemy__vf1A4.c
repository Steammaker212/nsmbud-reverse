/* Enemy__vf1A4
 * address: 0x602A3CA4   size: 20   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
float __fastcall Enemy__vf1A4(int a1)
{
  float result; // s0

  result = FIELD_F32(a1, 124) + 2.0;
  FIELD_F32(a1, 124) = result;
  return result;
}
