/* sub_607CF05C
 * address: 0x607CF05C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CF05C(int a1)
{
  int result; // r0

  result = sub_60766AA0(a1);
  if ( result == 1 )
  {
    result = sub_607D6C28(a1);
    if ( result )
      return FallDown_type_d_mode_d_IsPassingDown_s_ref_7A7220(result);
  }
  return result;
}
