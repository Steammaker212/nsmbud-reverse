/* sub_607946F4
 * address: 0x607946F4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607946F4(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 208);
  if ( (v1 & 8) == 0 )
  {
    FIELD_U8(result, 236) = 1;
    FIELD_U32(result, 208) = v1 | 8;
  }
  return result;
}
