/* sub_6098B61C
 * address: 0x6098B61C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_6098B61C(sead_IDisposer *a1)
{
  sead_IDisposer *result; // r0

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)off_60C5FFC0;
  FIELD_U32(result + (1) * 16, 0x0) = (int)&off_60C600D8;
  FIELD_U32(result + (1) * 16, 0x4) = 0;
  FIELD_U32(result + (1) * 16, 0x8) = 0;
  FIELD_U32(result + (1) * 16, 0xC) = 0;
  FIELD_U32(result + (2) * 16, 0x0) = (int)&result[2];
  FIELD_U32(result + (2) * 16, 0x4) = (int)&result[2];
  FIELD_U32(result + (2) * 16, 0x8) = (int)&FIELD_U32(result + (2) * 16, 0x8);
  FIELD_U32(result + (2) * 16, 0xC) = (int)&FIELD_U32(result + (2) * 16, 0x8);
  FIELD_U32(result + (3) * 16, 0x0) = 0;
  FIELD_U32(result + (3) * 16, 0x4) = 0;
  FIELD_U32(result + (3) * 16, 0x8) = 0;
  FIELD_U32(result + (3) * 16, 0xC) = (int)&FIELD_U32(result + (3) * 16, 0xC);
  FIELD_U32(result + (4) * 16, 0x0) = (int)&FIELD_U32(result + (3) * 16, 0xC);
  FIELD_U32(result + (4) * 16, 0xC) = 0;
  FIELD_U32(result + (4) * 16, 0x8) = (int)&FIELD_U32(result + (4) * 16, 0x4);
  FIELD_U32(result + (4) * 16, 0x4) = (int)&FIELD_U32(result + (4) * 16, 0x4);
  FIELD_U32(result + (5) * 16, 0x4) = 0;
  FIELD_U32(result + (5) * 16, 0x8) = -1;
  FIELD_U32(result + (5) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (6) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(result + (7) * 16, 0x0) = 0;
  FIELD_U32(result + (6) * 16, 0xC) = 0;
  FIELD_U32(result + (6) * 16, 0x8) = 0;
  FIELD_U32(result + (6) * 16, 0x4) = 0;
  FIELD_U32(result + (7) * 16, 0x4) = 1061752795;
  LOBYTE(FIELD_U32(result + (7) * 16, 0x8)) = -1;
  BYTE2(result[7].field_C) = 0;
  BYTE2(FIELD_U32(result + (7) * 16, 0x8)) = 0;
  BYTE1(result[7].field_C) = 0;
  LOBYTE(FIELD_U32(result + (8) * 16, 0x0)) = 0;
  HIBYTE(result[7].field_C) = 0;
  BYTE1(FIELD_U32(result + (7) * 16, 0x8)) = 0;
  LOBYTE(result[7].field_C) = 0;
  HIBYTE(FIELD_U32(result + (7) * 16, 0x8)) = 0;
  BYTE1(FIELD_U32(result + (8) * 16, 0x0)) = 1;
  BYTE2(FIELD_U32(result + (8) * 16, 0x0)) = 3;
  FIELD_U32(result + (5) * 16, 0x0) = 4;
  return result;
}
