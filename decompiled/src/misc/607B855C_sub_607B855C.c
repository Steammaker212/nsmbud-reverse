/* sub_607B855C
 * address: 0x607B855C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B855C(int a1)
{
  FIELD_U32(a1, 1224) |= 0x420u;
  SE_PLY_RIDE_CLOUD_ref(a1);
  return sub_607957D4(a1, 6);
}
