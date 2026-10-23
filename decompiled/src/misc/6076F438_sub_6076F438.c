/* sub_6076F438
 * address: 0x6076F438   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6076F438(_DWORD *a1)
{
  unsigned int result; // r0

  a1[2485] = 5;
  PlayerBase_dispatchVirtual3(a1[162], 23);
  result = a1[302] & 0xFEFBFFFF;
  a1[302] = result;
  return result;
}
