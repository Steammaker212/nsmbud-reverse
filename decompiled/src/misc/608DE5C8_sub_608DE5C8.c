/* sub_608DE5C8
 * address: 0x608DE5C8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608DE5C8(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r2

  if ( FIELD_S32(a1, 8) < 1 )
    return 0;
  result = *(_DWORD **)(a1 + 4);
  if ( *result )
    *(_DWORD *)(*result + 4) = result[1];
  v3 = (_DWORD *)result[1];
  if ( v3 )
    *v3 = *result;
  *result = 0;
  result[1] = 0;
  --FIELD_U32(a1, 8);
  return result;
}
