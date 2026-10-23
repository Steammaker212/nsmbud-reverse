/* sub_604C84E8
 * address: 0x604C84E8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C84E8(_DWORD *a1)
{
  int result; // r0

  *(_BYTE *)(a1[3467] + 64) &= ~1u;
  *(_BYTE *)(a1[3468] + 64) &= ~1u;
  *(_BYTE *)(a1[3469] + 64) &= ~1u;
  *(_BYTE *)(a1[3470] + 64) &= ~1u;
  *(_BYTE *)(a1[3471] + 64) &= ~1u;
  result = a1[3472];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
