/* sub_608D7020
 * address: 0x608D7020   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608D7020(_DWORD *result, int a2)
{
  unsigned int v2; // r1

  v2 = (unsigned int)(a2 - *result) / result[2];
  *((_BYTE *)result + (v2 >> 3) + 20) &= ~(1 << (v2 & 7));
  --result[4];
  return result;
}
