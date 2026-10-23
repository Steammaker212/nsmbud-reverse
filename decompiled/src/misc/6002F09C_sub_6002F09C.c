/* sub_6002F09C
 * address: 0x6002F09C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002F09C(int a1)
{
  int result; // r0

  result = FIELD_U16(a1, 6276);
  if ( !result )
  {
    result = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( result )
      FIELD_U8(result, 6100) = 1;
  }
  return result;
}
