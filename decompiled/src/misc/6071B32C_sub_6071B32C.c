/* sub_6071B32C
 * address: 0x6071B32C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_6071B32C(int a1, unsigned int a2, int a3, unsigned int a4, __int16 a5)
{
  unsigned int v5; // r12
  _WORD *result; // r0

  v5 = 0;
  if ( a4 >= 3 )
    a4 = 0;
  if ( a2 < 4 )
    v5 = a2;
  result = (_WORD *)(*(_DWORD *)(a1 + 12 * v5 + 4 * a4 + 944) + 2 * a3);
  *result = a5;
  return result;
}
