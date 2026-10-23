/* sub_60187030
 * address: 0x60187030   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60187030(int a1, unsigned int a2, unsigned int a3, char a4)
{
  _BYTE *result; // r0

  if ( a2 >= 9 )
    a2 = 0;
  result = (_BYTE *)(a1 + 2 * a2 + 1080);
  if ( a3 < 2 )
    result += a3;
  *result = a4;
  return result;
}
