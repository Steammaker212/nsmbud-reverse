/* sub_60766A4C
 * address: 0x60766A4C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60766A4C(_DWORD *a1)
{
  int result; // r0

  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 624))(a1, 6);
  result = a1[309] | 2;
  a1[309] = result;
  return result;
}
