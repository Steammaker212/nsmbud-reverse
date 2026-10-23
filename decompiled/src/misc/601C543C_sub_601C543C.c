/* sub_601C543C
 * address: 0x601C543C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C543C(_DWORD *a1)
{
  int result; // r0

  ((void (__fastcall *)(_DWORD *, float, float, float, float))loc_60832560)(a1 + 32, 2.3, 0.3, 0.2, 0.02);
  result = a1[32];
  a1[33] = result;
  a1[34] = result;
  return result;
}
