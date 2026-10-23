/* sub_607A17B0
 * address: 0x607A17B0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A17B0(_DWORD *a1)
{
  a1[306] &= 0xFFFFBA3F;
  a1[304] &= ~0x100u;
  a1[305] &= ~0x100000u;
  return sub_607865BC((int)(a1 + 172), 2);
}
