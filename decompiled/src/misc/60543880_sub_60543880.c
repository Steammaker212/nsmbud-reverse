/* sub_60543880
 * address: 0x60543880   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60543880(_DWORD *result)
{
  int v1; // r2

  result[8368] = 1;
  result[8372] = 0;
  if ( !*(_DWORD *)(result[8367] + 492) )
  {
    v1 = 23;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      v1 = 17;
    result[7857] = v1;
  }
  return result;
}
