/* sub_6098D8C4
 * address: 0x6098D8C4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098D8C4(_DWORD *a1, unsigned int a2)
{
  _BYTE *v2; // r3
  unsigned int v3; // r2
  _DWORD *result; // r0

  v2 = (_BYTE *)a1[8];
  if ( a1[7] > a2 )
    v2 += a2;
  *v2 = -1;
  v3 = a1[5];
  result = (_DWORD *)a1[6];
  if ( v3 > a2 )
    result += a2;
  *result = 0;
  return result;
}
