/* sub_605405F4
 * address: 0x605405F4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605405F4(int result)
{
  FIELD_U32(result, 32832) = 0;
  *(_BYTE *)(FIELD_U32(result, 31712) + 64) &= ~1u;
  FIELD_U8(result, 34724) = 0;
  return result;
}
