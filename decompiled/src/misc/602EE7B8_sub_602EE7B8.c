/* sub_602EE7B8
 * address: 0x602EE7B8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EE7B8(int result, int a2, unsigned int a3)
{
  if ( !FIELD_U8(result, 7525) )
  {
    if ( a3 >= 4 )
      a3 = FIELD_S8(result, 84);
    return sub_602EE7D8(result, a2, a3, 0);
  }
  return result;
}
