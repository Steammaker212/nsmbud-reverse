/* sub_6083D6A0
 * address: 0x6083D6A0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083D6A0(int result)
{
  FIELD_U16(result, 2) &= 0xFFF0u;
  FIELD_U8(result, 1) = 5;
  FIELD_U32(result, 4) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 16) = 1065353216;
  *(_BYTE *)result = 0;
  FIELD_U32(result, 24) = 0;
  return result;
}
