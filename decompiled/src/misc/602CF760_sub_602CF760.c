/* sub_602CF760
 * address: 0x602CF760   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CF760(int a1)
{
  int v2; // r4
  int v3; // r4
  int v4; // r4

  sub_602D18F8(a1 + 6316);
  v2 = FIELD_U32(a1, 6436);
  sub_602D18F8(v2);
  v3 = FIELD_U32(v2, 120);
  sub_602D18F8(v3);
  v4 = FIELD_U32(v3, 120);
  sub_602D18F8(v4);
  sub_602D18F8(FIELD_U32(v4, 120));
  return 1;
}
