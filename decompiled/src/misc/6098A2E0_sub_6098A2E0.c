/* sub_6098A2E0
 * address: 0x6098A2E0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098A2E0(_DWORD *result, unsigned int a2, int a3)
{
  _DWORD *v3; // r3

  v3 = (_DWORD *)result[2];
  if ( result[1] > a2 )
    v3 += a2;
  *v3 = a3;
  if ( !result[3] )
    result[3] = a3;
  return result;
}
