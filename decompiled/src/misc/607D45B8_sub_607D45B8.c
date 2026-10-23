/* sub_607D45B8
 * address: 0x607D45B8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D45B8(int a1)
{
  int result; // r0

  SE_PLY_RIDE_CLOUD_ref(a1);
  FIELD_U32(a1, 1236) |= 0x1000000u;
  result = sub_607D6C28(a1);
  if ( result )
    return sub_607957D4(result, 6);
  return result;
}
