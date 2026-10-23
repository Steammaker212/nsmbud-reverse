/* sub_6053BF9C
 * address: 0x6053BF9C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6053BF9C(_DWORD *a1)
{
  _DWORD *result; // r0
  int v2; // t1

  *(_BYTE *)(a1[13145] + 64) &= ~1u;
  *(_BYTE *)(a1[13146] + 64) &= ~1u;
  *(_BYTE *)(a1[13147] + 64) &= ~1u;
  *(_BYTE *)(a1[13148] + 64) &= ~1u;
  *(_BYTE *)(a1[13149] + 64) &= ~1u;
  *(_BYTE *)(a1[13150] + 64) &= ~1u;
  v2 = a1[13151];
  result = a1 + 13151;
  FIELD_U8(v2, 64) &= ~1u;
  *(_BYTE *)(result[1] + 64) &= ~1u;
  *(_BYTE *)(*result + 64) |= 1u;
  *((_BYTE *)result - 35881) = 0;
  *((_BYTE *)result - 35884) = 1;
  return result;
}
