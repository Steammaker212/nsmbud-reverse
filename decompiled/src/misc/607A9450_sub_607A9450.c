/* sub_607A9450
 * address: 0x607A9450   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A9450(int a1)
{
  FIELD_U32(a1, 1204) |= 0x8000u;
  sub_607A6A48(a1);
  PlayerBase_dispatchVirtual3(a1 + 11356, 193, 0.0);
  FIELD_U32(a1, 9704) = 0;
  return 9704;
}
