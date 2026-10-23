/* sub_601F3114
 * address: 0x601F3114   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601F3114(int a1)
{
  _DWORD *result; // r0

  result = **(_DWORD ***)(FIELD_U32(a1, 304) + 12);
  result[5] = result[2];
  result[7] |= 2u;
  return result;
}
