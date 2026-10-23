/* sub_608DE6BC
 * address: 0x608DE6BC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608DE6BC(_DWORD *result)
{
  _DWORD *v1; // r1
  _DWORD *v2; // r3

  v1 = (_DWORD *)result[1];
  if ( v1 != result )
  {
    do
    {
      v2 = (_DWORD *)v1[1];
      *v1 = 0;
      v1[1] = 0;
      v1 = v2;
    }
    while ( v2 != result );
  }
  *result = result;
  result[1] = result;
  result[2] = 0;
  return result;
}
