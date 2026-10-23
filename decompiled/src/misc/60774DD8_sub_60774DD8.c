/* sub_60774DD8
 * address: 0x60774DD8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60774DD8(_DWORD *a1)
{
  a1[308] &= ~0x40000000u;
  a1[309] &= ~0x20u;
  a1[302] &= ~0x4000000u;
  return sub_607865BC(a1 + 172, 6);
}
