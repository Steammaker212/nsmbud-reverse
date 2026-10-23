/* sub_604E4C58
 * address: 0x604E4C58   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604E4C58(_DWORD *result)
{
  int v1; // r1
  int v2; // s1
  _DWORD *v3; // r0

  v1 = result[15707];
  if ( v1 )
  {
    v2 = FIELD_U32(v1, 108);
    v3 = result + 210;
    v3[904] = FIELD_U32(v1, 92);
    result = v3 + 905;
    *result = v2;
  }
  return result;
}
