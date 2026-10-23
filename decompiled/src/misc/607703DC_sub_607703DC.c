/* sub_607703DC
 * address: 0x607703DC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607703DC(_DWORD *a1)
{
  int result; // r0

  a1[302] &= ~0x100u;
  sub_607865BC(a1 + 172, 2);
  result = a1[2497];
  a1[22] = result;
  return result;
}
