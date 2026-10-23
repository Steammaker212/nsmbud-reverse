/* sub_6055D694
 * address: 0x6055D694   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055D694(_DWORD *a1)
{
  int result; // r0

  *(_BYTE *)(a1[3391] + 64) &= ~1u;
  *(_BYTE *)(a1[3392] + 64) &= ~1u;
  *(_BYTE *)(a1[3393] + 64) &= ~1u;
  *(_BYTE *)(a1[3394] + 64) &= ~1u;
  result = a1[3395];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
