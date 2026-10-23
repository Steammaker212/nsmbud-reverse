/* sub_608DF090
 * address: 0x608DF090   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608DF090(_DWORD *result)
{
  int v1; // r1
  _DWORD *v2; // r1
  int v3; // r2
  int v4; // r2

  v1 = *result;
  if ( *result && *(_DWORD **)(v1 + 4) == result )
  {
    FIELD_U32(v1, 4) = result[2];
    v2 = result + 3;
    v4 = result[2];
    if ( !v4 )
      goto LABEL_10;
LABEL_9:
    FIELD_U32(v4, 12) = result[3];
    result[2] = 0;
    goto LABEL_10;
  }
  v2 = result + 3;
  v3 = result[3];
  if ( v3 )
    FIELD_U32(v3, 8) = result[2];
  v4 = result[2];
  if ( v4 )
    goto LABEL_9;
  if ( *result )
    *(_DWORD *)(*(_DWORD *)(*result + 4) + 12) = *v2;
LABEL_10:
  *v2 = 0;
  *result = 0;
  return result;
}
