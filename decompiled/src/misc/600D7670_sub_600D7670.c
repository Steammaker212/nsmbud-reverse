/* sub_600D7670
 * address: 0x600D7670   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_600D7670(_DWORD *result)
{
  unsigned int v1; // r1

  result[26] = 1036831949;
  v1 = result[20] ^ 1;
  if ( v1 >= 2 )
    v1 = 0;
  result[33] = result[v1 + 2030];
  return result;
}
