/* sub_605DFA18
 * address: 0x605DFA18   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_605DFA18(int *result)
{
  int v1; // lr
  int v2; // r2
  int v3; // t1

  result[1591] = 0;
  result[1592] = 0;
  result[1593] = 0;
  v1 = result[1566];
  result[1567] &= ~2u;
  result[1565] &= ~0x10000000u;
  result[1566] = v1 & 0xFFFFFEDE;
  v2 = result[1701];
  if ( (v2 & 0x800) == 0 && result[1693] != 3 )
  {
    result[1701] = v2 | 1;
    v3 = result[1702];
    result += 1702;
    *result = v3 | 1;
  }
  return result;
}
