/* sub_6049AB64
 * address: 0x6049AB64   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049AB64(_DWORD *a1)
{
  unsigned int v1; // r1
  int result; // r0

  *(_BYTE *)(a1[917] + 64) &= ~1u;
  *(_BYTE *)(a1[918] + 64) &= ~1u;
  *(_BYTE *)(a1[919] + 64) &= ~1u;
  *(_BYTE *)(a1[920] + 64) &= ~1u;
  v1 = a1[1333] + 8;
  if ( v1 >= 0xE )
    v1 = 0;
  result = a1[v1 + 909];
  FIELD_U8(result, 64) |= 1u;
  return result;
}
