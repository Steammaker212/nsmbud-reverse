/* sub_609ACF6C
 * address: 0x609ACF6C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609ACF6C(int a1, int a2)
{
  int result; // r0

  result = FIELD_U8(a1, 4);
  if ( (result & 1) == 0 )
    return sub_6093EA98(dword_60CD09F8, a2);
  return result;
}
