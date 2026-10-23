/* sub_603FEF70
 * address: 0x603FEF70   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FEF70(int a1)
{
  int v1; // r4
  int v2; // r5

  v1 = a1;
  v2 = a1 + 16;
  sub_604FC590(a1 + 16, 0);
  sub_604FD19C(v2);
  sub_604FC590(v1 + 40132, 1);
  sub_604FD19C(v1 + 40132);
  sub_604FC590(v1 + 80248, 2);
  sub_604FD19C(v1 + 80248);
  v1 += 120364;
  sub_604FC590(v1, 3);
  return sub_604FD19C(v1);
}
