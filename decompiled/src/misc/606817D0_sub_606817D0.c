/* sub_606817D0
 * address: 0x606817D0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606817D0(int a1)
{
  float result; // s0

  result = FIELD_F32(a1, 7472);
  FIELD_F32(a1, 124) = result;
  if ( FIELD_U8(a1, 7597) )
  {
    result = result + result;
    FIELD_F32(a1, 124) = result;
  }
  return result;
}
