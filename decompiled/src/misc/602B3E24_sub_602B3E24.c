/* sub_602B3E24
 * address: 0x602B3E24   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B3E24(int a1)
{
  sub_602A3EFC(a1 + 6476, 24, 0.0625);
  CollisionMgr_vf14(a1 + 648);
  FIELD_U8(a1, 6449) = 1;
  FIELD_U32(a1, 124) = 0x40000000;
  FIELD_U8(a1, 6884) = 1;
  return 1;
}
