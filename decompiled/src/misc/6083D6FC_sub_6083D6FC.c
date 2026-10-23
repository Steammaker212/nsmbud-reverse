/* sub_6083D6FC
 * address: 0x6083D6FC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083D6FC(int result)
{
  *(_BYTE *)result = 1;
  FIELD_U16(result, 4) &= 0xFFF0u;
  FIELD_U8(result, 1) = -1;
  FIELD_U8(result, 2) = -1;
  FIELD_U8(result, 8) = 0;
  FIELD_U8(result, 9) = 0;
  FIELD_U8(result, 10) = 0;
  FIELD_U8(result, 11) = 7;
  FIELD_U8(result, 12) = 0;
  FIELD_U8(result, 24) = 0;
  FIELD_U8(result, 25) = 0;
  FIELD_U8(result, 26) = 0;
  FIELD_U8(result, 27) = 7;
  FIELD_U8(result, 28) = 0;
  return result;
}
