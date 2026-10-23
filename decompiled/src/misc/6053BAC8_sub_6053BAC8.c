/* sub_6053BAC8
 * address: 0x6053BAC8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053BAC8(int result)
{
  *(_BYTE *)(FIELD_U32(result, 52560) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(result, 52564) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(result, 52568) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(result, 52572) + 64) &= ~1u;
  FIELD_U8(result, 83565) = 0;
  return result;
}
