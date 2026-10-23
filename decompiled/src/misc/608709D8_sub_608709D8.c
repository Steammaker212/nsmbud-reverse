/* sub_608709D8
 * address: 0x608709D8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608709D8(int result)
{
  int v1; // r4
  int v2; // r5
  int v3; // r6

  v1 = result;
  v2 = FIELD_U16(result, 108);
  if ( FIELD_U16(result, 108) )
  {
    v3 = 0;
    do
    {
      result = sub_6086F65C(FIELD_U32(v1, 64) + v3);
      v3 += 184;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
