/* sub_606C4000
 * address: 0x606C4000   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C4000(int result, char a2, unsigned int a3)
{
  if ( a3 <= 0xF )
  {
    result += 8 * a3;
    FIELD_U8(result, 6105) = a2;
  }
  return result;
}
