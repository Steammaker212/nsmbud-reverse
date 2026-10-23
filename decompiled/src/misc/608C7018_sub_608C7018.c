/* sub_608C7018
 * address: 0x608C7018   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C7018(int result)
{
  int v1; // r2

  v1 = FIELD_U32(result, 1544);
  if ( v1 == result )
  {
    result += 772;
  }
  else if ( v1 != result + 772 )
  {
    return result;
  }
  FIELD_U32(result, 768) = 0;
  return result;
}
