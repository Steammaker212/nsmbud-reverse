/* sub_60913508
 * address: 0x60913508   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913508(int a1)
{
  int result; // r0

  result = sub_608F4A80(a1);
  *(_DWORD *)result = off_60C5D4C0;
  FIELD_U32(result, 244) = 0;
  FIELD_U8(result, 248) = 0;
  FIELD_U8(result, 249) = 4;
  FIELD_U8(result, 250) = 0;
  FIELD_U32(result, 416) = 0;
  FIELD_U32(result, 420) = 0;
  FIELD_U32(result, 240) = 0;
  FIELD_U32(result, 192) = FIELD_U32(dword_60CCFC8C, 36);
  return result;
}
