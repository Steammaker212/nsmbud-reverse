/* sub_602A588C
 * address: 0x602A588C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602A588C(int a1)
{
  int v2; // r2
  signed int result; // r0

  v2 = FIELD_U8(a1, 0x17F8);
  result = 1;
  if ( !v2 )
  {
    result = FIELD_U8(a1, 536);
    if ( FIELD_U8(a1, 536) )
      return 1;
  }
  return result;
}
