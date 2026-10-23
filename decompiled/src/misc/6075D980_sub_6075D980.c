/* sub_6075D980
 * address: 0x6075D980   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6075D980(int a1)
{
  int v1; // r2
  int v2; // r0
  float result; // s0

  v1 = FIELD_U32(a1, 196);
  v2 = FIELD_U32(a1, 300);
  if ( (v1 & 0x1800000) != 0 )
    v2 = 0;
  result = flt_60B0A84C[v2];
  if ( (v1 & 8) != 0 )
    return result + flt_60B0A864[v2];
  return result;
}
