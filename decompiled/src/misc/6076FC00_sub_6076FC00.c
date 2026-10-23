/* sub_6076FC00
 * address: 0x6076FC00   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076FC00(_DWORD *a1)
{
  int result; // r0

  a1[40] = sub_60773F3C(a1, a1[20]);
  a1[22] = 0;
  a1[23] = 0;
  a1[25] = 0;
  a1[2485] = 0;
  PlayerBase_dispatchVirtual3(a1[162], 16);
  a1[31] = 1065353216;
  result = a1[307] | 0x124400;
  a1[307] = result;
  return result;
}
