/* sub_6061FF14
 * address: 0x6061FF14   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6061FF14(_DWORD *result)
{
  unsigned int v1; // r1

  v1 = result[5];
  result[1669] = HIWORD(v1) & 0xF;
  result[1670] = v1 & 0xF;
  result[1580] = 0;
  result[155] = result + 1660;
  return result;
}
