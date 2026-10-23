/* sub_605CC4D8
 * address: 0x605CC4D8   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605CC4D8(int a1, float a2)
{
  return CollisionMgr_process((_BYTE *)(a1 + 648), a2);
}
