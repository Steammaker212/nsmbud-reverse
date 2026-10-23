/* sub_6097BDB0
 * address: 0x6097BDB0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097BDB0(int a1)
{
  sub_609273A4(a1);
  FIELD_U8(a1, 840) |= 0x1Cu;
  return sub_60924B2C(FIELD_U32(a1, 164));
}
