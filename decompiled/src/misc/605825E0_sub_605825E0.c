/* sub_605825E0
 * address: 0x605825E0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_605825E0(__int64 result)
{
  int v1; // r2
  int v2; // r3

  HIDWORD(result) = 0;
  v1 = 0;
  do
  {
    v2 = result + v1;
    v1 += 48;
    FIELD_U32(v2, 28) = 0;
    FIELD_U32(v2, 32) = 0;
    FIELD_U8(v2, 36) = 0;
    FIELD_U32(v2, 52) = 0;
    FIELD_U32(v2, 56) = 0;
    FIELD_U8(v2, 60) = 0;
  }
  while ( v1 != 6144 );
  return result;
}
