/* sub_6084892C
 * address: 0x6084892C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084892C(_DWORD *a1)
{
  int result; // r0

  sub_60998DB4(a1[4]);
  a1[4] = 0;
  sub_60998DB4(a1[5]);
  a1[5] = 0;
  sub_60998DB4(a1[6]);
  a1[6] = 0;
  sub_60998DB4(a1[7]);
  a1[7] = 0;
  sub_60998DB4(*a1);
  *a1 = 0;
  sub_60998DB4(a1[1]);
  a1[1] = 0;
  sub_60998DB4(a1[2]);
  a1[2] = 0;
  result = sub_60998DB4(a1[3]);
  a1[3] = 0;
  return result;
}
