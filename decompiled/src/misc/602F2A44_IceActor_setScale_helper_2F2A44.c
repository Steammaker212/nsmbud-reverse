/* IceActor_setScale_helper_2F2A44
 * address: 0x602F2A44   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall IceActor_setScale_helper_2F2A44(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  FIELD_U32(a1, 4) = *a2;
  FIELD_U32(a1, 8) = a2[1];
  FIELD_U32(a1, 12) = a2[2];
  result = *(_DWORD **)a1;
  if ( result )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)*result + 68))(*result);
  return result;
}
