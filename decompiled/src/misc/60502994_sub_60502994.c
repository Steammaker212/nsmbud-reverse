/* sub_60502994
 * address: 0x60502994   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60502994(int result, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r12
  int v5; // r3

  v2 = FIELD_U32(result, 56);
  v3 = result + 52;
  if ( v2 != result + 52 )
  {
    result = FIELD_U32(result, 64);
    v4 = v3 - result;
    v5 = v2 - result;
    do
    {
      FIELD_U32(v5, 200) = a2;
      v2 = FIELD_U32(v2, 4);
      v5 = v2 - result;
    }
    while ( v2 - result != v4 );
  }
  return result;
}
