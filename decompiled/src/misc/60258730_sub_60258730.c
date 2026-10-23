/* sub_60258730
 * address: 0x60258730   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60258730(int a1)
{
  _DWORD *result; // r0

  FIELD_U8(a1, 6924) = 1;
  result = **(_DWORD ***)(FIELD_U32(a1, 6300) + 20);
  result[6] = 0;
  result[5] = 0;
  result[7] |= 2u;
  return result;
}
