/* sub_607AE5A8
 * address: 0x607AE5A8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AE5A8(_DWORD *a1)
{
  a1[303] |= 0x80000u;
  a1[306] |= 0x2404u;
  a1[25] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[30] = 0;
  a1[31] = 0;
  (*(void (__fastcall **)(_DWORD *, float))(*a1 + 1088))(a1, 400.0);
  return PlayerBase_dispatchVirtual3((int)(a1 + 2839), 183, 0.0);
}
