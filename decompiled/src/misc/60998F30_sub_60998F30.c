/* sub_60998F30
 * address: 0x60998F30   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60998F30(int result)
{
  *(_BYTE *)result = 1;
  FIELD_U8(result, 1) = 0;
  FIELD_U32(result, 4) = 0;
  FIELD_U16(result, 16) = 0;
  FIELD_U16(result, 18) = 1;
  FIELD_U32(result, 32) = 0;
  FIELD_U32(result, 36) = 1;
  FIELD_U8(result, 8) = 2;
  FIELD_U8(result, 9) = 3;
  FIELD_U8(result, 10) = 4;
  FIELD_U8(result, 11) = 5;
  FIELD_U32(result, 48) = 0;
  return result;
}
