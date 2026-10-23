/* sub_6047F3B4
 * address: 0x6047F3B4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047F3B4(_DWORD *a1)
{
  _DWORD *v2; // r4
  int v3; // r7

  v2 = a1 + 1;
  *a1 = 0;
  v3 = (int)(a1 + 102);
  sub_6045BF58((int)(a1 + 1), 0);
  sub_609094C4(v2, 192, 40, 5);
  sub_6045BF58(v3, 1);
  sub_609094C4(v3, 192, 40, 5);
  sub_6045BF58((int)(a1 + 203), 2);
  sub_609094C4(a1 + 203, 192, 40, 5);
  sub_6045BF58((int)(a1 + 304), 3);
  sub_609094C4(a1 + 304, 192, 40, 5);
  sub_6045BF58((int)(a1 + 405), 4);
  return sub_609094C4(a1 + 405, 192, 40, 5);
}
