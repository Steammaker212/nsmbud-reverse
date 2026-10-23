/* sub_6053FC24
 * address: 0x6053FC24   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6053FC24(_DWORD *result)
{
  if ( result[8672] == 1 && !result[8207] )
  {
    result[8673] = 1;
    result[8672] = 0;
    return (_DWORD *)sub_608169AC(dword_60CC6B68);
  }
  return result;
}
