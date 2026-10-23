/* sub_60959B54
 * address: 0x60959B54   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60959B54(_DWORD *a1)
{
  _DWORD *v2; // r5

  v2 = a1 + 42;
  *a1 = off_60C5EA84;
  sub_6083D230((int)(a1 + 42));
  sub_6083D31C((int)(a1 + 96));
  memset(a1 + 2, 0, 0xA0u);
  a1[34] = v2;
  a1[36] = a1 + 96;
  a1[112] = a1 + 2;
  return a1;
}
