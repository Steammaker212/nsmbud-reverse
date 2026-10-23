/* sub_604289D4
 * address: 0x604289D4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604289D4(int a1, int a2, int a3, int a4)
{
  int v6; // r6

  FIELD_U32(a1, 12) = a3;
  v6 = a1 + 664;
  sub_6092166C(a1 + 664, dword_60C9CC80 + 37592);
  sub_609216EC(v6, a4, 1, 1);
  FIELD_U16(a1, 10) = -1;
  FIELD_U16(a1, 8) = -1;
  FIELD_U16(a1, 6) = -1;
  FIELD_U16(a1, 4) = -1;
  FIELD_U8(a1, 760) = -1;
  return sub_6043DB2C(a1 + 16);
}
