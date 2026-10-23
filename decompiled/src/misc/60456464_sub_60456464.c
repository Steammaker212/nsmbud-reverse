/* sub_60456464
 * address: 0x60456464   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60456464(int result, char a2, char a3, char a4, __int16 a5)
{
  FIELD_U8(result, 184) = a2 & 7 | (16 * (a4 & 3));
  FIELD_U8(result, 185) = a3;
  FIELD_U16(result, 186) = a5;
  return result;
}
