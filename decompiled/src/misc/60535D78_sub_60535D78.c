/* sub_60535D78
 * address: 0x60535D78   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60535D78(int result)
{
  *(_BYTE *)(FIELD_U32(result, 52600) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(result, 52604) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(result, 52608) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(result, 52612) + 64) &= ~1u;
  FIELD_U8(result, 83625) = 0;
  return result;
}
