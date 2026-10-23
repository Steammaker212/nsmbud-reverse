/* sub_607CD01C
 * address: 0x607CD01C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CD01C(int a1)
{
  int result; // r0

  result = 0;
  if ( (FIELD_U8(a1, 1237) & 0x20) != 0 )
  {
    sub_6076504C(a1);
    FIELD_U32(a1, 1236) &= 0xFFFF9FFF;
    return 1;
  }
  return result;
}
