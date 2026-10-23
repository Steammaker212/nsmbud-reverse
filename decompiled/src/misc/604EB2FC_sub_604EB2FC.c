/* sub_604EB2FC
 * address: 0x604EB2FC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EB2FC(_DWORD *a1)
{
  int result; // r0

  a1[142] = 2;
  a1[143] = 5;
  result = operator_new_8DE09C(0x30u);
  FIELD_U32(result, 8) = 2139095039;
  FIELD_U32(result, 12) = 2139095039;
  FIELD_U32(result, 16) = -8388609;
  FIELD_U32(result, 20) = -8388609;
  *(_DWORD *)result = 255;
  FIELD_U8(result, 4) = 0;
  FIELD_U32(result, 32) = 2139095039;
  FIELD_U32(result, 36) = 2139095039;
  FIELD_U32(result, 40) = -8388609;
  FIELD_U32(result, 44) = -8388609;
  FIELD_U32(result, 24) = 255;
  FIELD_U8(result, 28) = 0;
  a1[145] = result;
  return result;
}
