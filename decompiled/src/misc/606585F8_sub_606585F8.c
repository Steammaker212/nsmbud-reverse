/* sub_606585F8
 * address: 0x606585F8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606585F8(int a1)
{
  int v2; // r5
  float result; // s0

  v2 = FIELD_U32(a1, 164);
  sub_606CA41C();
  if ( FIELD_U8(a1, 6852) )
    FIELD_U32(a1, 164) = v2;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) - FIELD_F32(a1, 572);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - FIELD_F32(a1, 576);
  result = FIELD_F32(a1, 116) - FIELD_F32(a1, 580);
  FIELD_F32(a1, 116) = result;
  return result;
}
