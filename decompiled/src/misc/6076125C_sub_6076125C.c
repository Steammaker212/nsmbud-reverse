/* sub_6076125C
 * address: 0x6076125C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076125C(int a1)
{
  int v1; // r0
  int result; // r0

  FIELD_U8(a1, 6900) = 0;
  v1 = a1 + 6900;
  FIELD_U8(v1, 8) = 0;
  v1 += 8;
  *(_BYTE *)(v1 - 4) = 0;
  result = v1 - 4;
  FIELD_U8(result, 7) = 0;
  FIELD_U8(result, 6) = 0;
  FIELD_U8(result, 5) = 0;
  FIELD_U8(result, 3) = 0;
  FIELD_U8(result, 2) = 0;
  FIELD_U8(result, 1) = 0;
  *(_BYTE *)(result - 1) = 0;
  *(_BYTE *)(result - 2) = 0;
  *(_BYTE *)(result - 3) = 0;
  FIELD_U32(result, 152) = FIELD_U32(result, 144);
  FIELD_U32(result, 156) = FIELD_U32(result, 148);
  FIELD_U32(result, 144) = 0;
  FIELD_U32(result, 148) = 0;
  FIELD_U32(result, 224) = 0;
  FIELD_U32(result, 100) = 0;
  FIELD_U32(result, 120) = 0;
  FIELD_U32(result, 84) = 0;
  FIELD_U32(result, 80) = 0;
  FIELD_U32(result, 76) = 0;
  FIELD_U32(result, 72) = 0;
  return result;
}
