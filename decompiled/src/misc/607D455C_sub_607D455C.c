/* sub_607D455C
 * address: 0x607D455C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D455C(int a1)
{
  sub_60774D2C(a1);
  FIELD_U32(a1, 1224) |= 8u;
  return PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 119, 0.0);
}
