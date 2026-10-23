/* sub_6068C060
 * address: 0x6068C060   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068C060(int a1)
{
  int result; // r0

  sub_6068C0CC(a1 + 28);
  sub_6068C0CC(a1 + 1308);
  sub_6068C0CC(a1 + 348);
  sub_6068C0CC(a1 + 1628);
  sub_6068C0CC(a1 + 668);
  sub_6068C0CC(a1 + 1948);
  sub_6068C0CC(a1 + 988);
  sub_6068C0CC(a1 + 2268);
  result = FIELD_U8(a1, 20);
  if ( result != 255 )
    FIELD_U8(a1, 20) = ++result;
  return result;
}
