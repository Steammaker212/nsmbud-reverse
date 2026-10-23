/* sub_6076B574
 * address: 0x6076B574   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076B574(_DWORD *a1)
{
  PlayerBase_dispatchVirtual3(a1[162], 137);
  a1[303] |= 0x20u;
  a1[20] = 0;
  a1[40] = sub_60773F3C(a1, 0);
  return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 740))(a1, 2);
}
