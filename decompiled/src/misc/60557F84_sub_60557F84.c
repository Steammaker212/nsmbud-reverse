/* sub_60557F84
 * address: 0x60557F84   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60557F84(int a1)
{
  int result; // r0

  result = sub_604741D8((_DWORD *)(a1 + 40), 1u, &dword_60CAD670, 0);
  FIELD_U8(a1, 3673) = 1;
  FIELD_U8(a1, 3688) = 0;
  FIELD_U8(a1, 3685) = 1;
  return result;
}
