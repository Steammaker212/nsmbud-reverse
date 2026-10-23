/* sub_604FFD54
 * address: 0x604FFD54   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FFD54(int a1)
{
  int v1; // r4
  int v2; // r7

  v1 = a1;
  v2 = a1 + 4;
  sub_6045BF58(a1 + 4, 0);
  sub_609094C4(v2, 192, 40, 5);
  sub_6045BF58(v1 + 408, 1);
  sub_609094C4(v1 + 408, 192, 40, 5);
  sub_6045BF58(v1 + 812, 2);
  sub_609094C4(v1 + 812, 192, 40, 5);
  sub_6045BF58(v1 + 1216, 3);
  sub_609094C4(v1 + 1216, 192, 40, 5);
  v1 += 1620;
  sub_6045BF58(v1, 4);
  return sub_609094C4(v1, 192, 40, 5);
}
