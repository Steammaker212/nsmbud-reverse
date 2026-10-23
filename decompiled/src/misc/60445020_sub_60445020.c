/* sub_60445020
 * address: 0x60445020   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60445020(int a1, int a2)
{
  float v2; // s0
  int result; // r0

  v2 = FIELD_F32(a1, 12) - FIELD_F32(a2, 12);
  result = v2 > 0.0;
  if ( v2 < 0.0 )
    return -1;
  return result;
}
