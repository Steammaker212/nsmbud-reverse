/* sub_60727CB8
 * address: 0x60727CB8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int16 *__fastcall sub_60727CB8(int a1, int a2)
{
  int v2; // r12
  unsigned __int16 *result; // r0
  int v4; // r3

  v2 = FIELD_U32(a1, 140);
  if ( v2 < 1 )
    return 0;
  result = *(unsigned __int16 **)(a1 + 20);
  v4 = 0;
  while ( *result != a2 )
  {
    ++v4;
    result += 14;
    if ( v4 >= v2 )
      return 0;
  }
  return result;
}
