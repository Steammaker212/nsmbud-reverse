/* sub_605E2BB8
 * address: 0x605E2BB8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605E2BB8(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *result; // r0

  v2 = a1 + 1516;
  ((void (__fastcall *)(_DWORD *))loc_605EAE74)(a1 + 1516);
  result = a1 + 1614;
  if ( !a1[1614] )
  {
    *result = 0;
    a1[1613] = 0;
    sub_605EB5E4(v2);
    result = (_DWORD *)(a1[1560] & 0xFFFFFFEF);
    a1[1560] = result;
  }
  return result;
}
