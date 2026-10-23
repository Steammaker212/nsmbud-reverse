/* sub_6084E138
 * address: 0x6084E138   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084E138(int a1)
{
  int result; // r0

  result = sub_60849B4C(a1);
  FIELD_U32(result, 52) = 2139095039;
  FIELD_U32(result, 56) = 0;
  FIELD_U32(result, 60) = 0;
  FIELD_U32(result, 64) = 0;
  FIELD_U32(result, 68) = 4;
  FIELD_U32(result, 72) = 0;
  FIELD_U32(result, 76) = &unk_60CC7EF0;
  FIELD_U16(result, 80) = 0;
  return result;
}
