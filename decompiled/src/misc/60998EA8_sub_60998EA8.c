/* sub_60998EA8
 * address: 0x60998EA8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60998EA8(int result)
{
  FIELD_U16(result, 6) = 42;
  *(_BYTE *)result = 2;
  FIELD_U8(result, 1) = 2;
  FIELD_U8(result, 2) = 2;
  FIELD_U8(result, 3) = 0;
  FIELD_U8(result, 4) = 0;
  FIELD_U8(result, 5) = 1;
  FIELD_U32(result, 8) = -998637568;
  FIELD_U32(result, 12) = 1148846080;
  FIELD_U32(result, 16) = 0;
  return result;
}
