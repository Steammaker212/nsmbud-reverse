/* sub_6000A454
 * address: 0x6000A454   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000A454(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 240) + 1;
  FIELD_U32(a1, 240) = result;
  if ( result == 8 )
  {
    SE_SYS_NICE_S_ref();
    result = FIELD_U32(a1, 240);
  }
  if ( result >= 9 )
  {
    FIELD_U32(a1, 240) = 8;
    return 8;
  }
  return result;
}
