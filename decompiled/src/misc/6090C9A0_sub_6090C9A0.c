/* sub_6090C9A0
 * address: 0x6090C9A0   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090C9A0(int result, float a2, float a3, float a4, float a5)
{
  FIELD_F32(result, 156) = a2;
  FIELD_F32(result, 160) = a3;
  FIELD_F32(result, 164) = a4;
  FIELD_F32(result, 168) = a5;
  FIELD_U8(result, 4) = 1;
  return result;
}
