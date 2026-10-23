/* sub_601FEDB4
 * address: 0x601FEDB4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FEDB4(int result, _DWORD *a2)
{
  bool v2; // zf

  v2 = *a2 == 4;
  if ( *a2 == 4 )
  {
    result = FIELD_U8(result, 3229);
    v2 = result == 0;
  }
  if ( v2 )
    return sub_60239158(dword_60C8D9DC, a2, 9, 0);
  return result;
}
