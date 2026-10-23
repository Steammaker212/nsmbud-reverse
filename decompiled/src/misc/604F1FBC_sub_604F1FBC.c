/* sub_604F1FBC
 * address: 0x604F1FBC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F1FBC(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 74478);
  if ( result )
  {
    sub_6040349C(a1 + 56124);
    sub_6040349C(a1 + 59112);
    sub_6040349C(a1 + 62100);
    sub_6040349C(a1 + 65088);
    sub_6040349C(a1 + 68076);
    return sub_6040349C(a1 + 71064);
  }
  return result;
}
