/* sub_606273E4
 * address: 0x606273E4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606273E4(int a1)
{
  unsigned int v1; // r2
  _DWORD *result; // r0

  FIELD_U32(a1, 6468) = 0;
  v1 = a1 + 6796;
  result = (_DWORD *)(a1 + 6472);
  do
  {
    *result = 0;
    result[4] = 0;
    result[5] = 0x40000000;
    result += 9;
  }
  while ( (unsigned int)result <= v1 );
  return result;
}
