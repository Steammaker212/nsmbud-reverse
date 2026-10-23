/* sub_60864FB0
 * address: 0x60864FB0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60864FB0(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 4);
  if ( result )
  {
    sub_60855BF0(result);
    FIELD_U32(a1, 4) = 0;
    *(_WORD *)a1 = 0;
    return 0;
  }
  return result;
}
