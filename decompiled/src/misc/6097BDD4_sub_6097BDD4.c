/* sub_6097BDD4
 * address: 0x6097BDD4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097BDD4(int a1)
{
  sub_609273A4(a1 - 32);
  FIELD_U8(a1, 808) |= 0x1Cu;
  return sub_60924B2C(FIELD_U32(a1, 132));
}
