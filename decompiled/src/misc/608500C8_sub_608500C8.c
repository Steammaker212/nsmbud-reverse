/* sub_608500C8
 * address: 0x608500C8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608500C8(int result, int a2, __int16 a3, __int16 a4, __int16 a5, char a6, char a7)
{
  FIELD_U32(result, 4) = a2;
  FIELD_U16(result, 12) = a3;
  FIELD_U16(result, 10) = a4;
  FIELD_U16(result, 8) = a5;
  FIELD_U8(result, 14) = a6;
  FIELD_U8(result, 15) = a7;
  FIELD_U8(result, 16) = 1;
  return result;
}
