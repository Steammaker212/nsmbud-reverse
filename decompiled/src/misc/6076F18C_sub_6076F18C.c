/* sub_6076F18C
 * address: 0x6076F18C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6076F18C(_DWORD *result)
{
  int v1; // r1
  int v2; // t1

  if ( result[2778] )
  {
    v2 = result[2779];
    result += 2779;
    v1 = v2;
    if ( v2 )
      *result = v1 - 1;
  }
  return result;
}
