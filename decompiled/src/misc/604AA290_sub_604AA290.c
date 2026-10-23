/* sub_604AA290
 * address: 0x604AA290   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_604AA290(int a1)
{
  _BYTE *result; // r0
  int v2; // r1

  result = (_BYTE *)(a1 + 97953);
  v2 = 61;
  do
  {
    if ( *(result - 8) )
      *result = 1;
    --v2;
    result += 2988;
  }
  while ( v2 );
  return result;
}
