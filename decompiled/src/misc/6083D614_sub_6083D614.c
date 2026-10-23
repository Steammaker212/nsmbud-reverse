/* sub_6083D614
 * address: 0x6083D614   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083D614(int result)
{
  *(_DWORD *)result = 50462722;
  FIELD_U16(result, 4) &= 0xFFF0u;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U8(result, 6) = 0;
  FIELD_U16(result, 26) &= ~1u;
  FIELD_U8(result, 24) = 1;
  FIELD_U32(result, 28) = -1;
  return result;
}
