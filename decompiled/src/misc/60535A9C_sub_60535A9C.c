/* sub_60535A9C
 * address: 0x60535A9C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60535A9C(_DWORD *a1)
{
  _DWORD *result; // r0
  int v2; // t1

  *(_BYTE *)(a1[13158] + 64) &= ~1u;
  *(_BYTE *)(a1[13159] + 64) &= ~1u;
  *(_BYTE *)(a1[13160] + 64) &= ~1u;
  *(_BYTE *)(a1[13161] + 64) &= ~1u;
  *(_BYTE *)(a1[13162] + 64) &= ~1u;
  *(_BYTE *)(a1[13163] + 64) &= ~1u;
  *(_BYTE *)(a1[13164] + 64) &= ~1u;
  *(_BYTE *)(a1[13165] + 64) &= ~1u;
  v2 = a1[13166];
  result = a1 + 13166;
  FIELD_U8(v2, 64) &= ~1u;
  *(_BYTE *)(result[1] + 64) &= ~1u;
  *(_BYTE *)(*result + 64) |= 1u;
  *((_BYTE *)result - 35921) = 0;
  *((_BYTE *)result - 35924) = 1;
  return result;
}
