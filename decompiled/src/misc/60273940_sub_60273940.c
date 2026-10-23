/* sub_60273940
 * address: 0x60273940   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60273940(int a1, int a2)
{
  int v2; // r5
  int v3; // r4

  v2 = FIELD_U32(a2, 64);
  v3 = 0;
  if ( v2 && sub_60274A5C(FIELD_U32(a2, 64)) == 1 )
  {
    v3 = 1;
    FIELD_U8(v2, 6568) = 1;
    sub_602A3EFC(v2 + 6532, 24);
  }
  return v3;
}
