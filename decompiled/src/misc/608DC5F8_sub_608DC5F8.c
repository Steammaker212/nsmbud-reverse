/* sub_608DC5F8
 * address: 0x608DC5F8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608DC5F8(_DWORD *a1)
{
  _DWORD *result; // r0

  result = sub_608ABD28(a1);
  *result = off_60C5BC88;
  result[3] = off_60C5BCA8;
  *((_BYTE *)result + 556) = 0;
  result[136] = 0;
  result[137] = 0;
  result[138] = 0;
  return result;
}
