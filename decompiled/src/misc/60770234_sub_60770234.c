/* sub_60770234
 * address: 0x60770234   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60770234(_DWORD *a1)
{
  int result; // r0

  a1[302] |= 4u;
  sub_6078667C(a1 + 172, 6);
  PlayerBase_dispatchVirtual3(a1[162], 0);
  result = sub_60773F3C(a1, a1[20]);
  a1[40] = result;
  return result;
}
