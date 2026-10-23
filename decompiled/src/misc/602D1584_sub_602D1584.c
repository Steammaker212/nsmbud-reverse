/* sub_602D1584
 * address: 0x602D1584   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D1584(int a1)
{
  int v2; // r5
  int v3; // r4
  int v4; // r4
  int v5; // r4

  v2 = a1 + 144;
  sub_602D1910(a1 + 6316, a1 + 144);
  v3 = FIELD_U32(a1, 6436);
  sub_602D1910(v3, v2);
  v4 = FIELD_U32(v3, 120);
  sub_602D1910(v4, v2);
  v5 = FIELD_U32(v4, 120);
  sub_602D1910(v5, v2);
  return sub_602D1910(FIELD_U32(v5, 120), v2);
}
