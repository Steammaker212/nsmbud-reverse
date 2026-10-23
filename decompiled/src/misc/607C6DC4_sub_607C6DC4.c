/* sub_607C6DC4
 * address: 0x607C6DC4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C6DC4(_DWORD *a1)
{
  a1[307] |= 0x400u;
  sub_607C4344((int)a1);
  a1[25] = 0;
  a1[31] = 0;
  a1[20] ^= 1u;
  a1[23] = 0;
  a1[22] = 0;
  sub_607C6E18(a1);
  return sub_607865BC((int)(a1 + 172), 5);
}
