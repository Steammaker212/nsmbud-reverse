/* sub_607F1550
 * address: 0x607F1550   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607F1550(int a1)
{
  float result; // s0
  float v2; // s2
  float v3; // s4
  float v4; // s6
  float v5; // s8
  float v6; // s10
  float v7; // s12

  v2 = FIELD_F32(a1, 552);
  v3 = FIELD_F32(a1, 556);
  v4 = FIELD_F32(a1, 560);
  v5 = FIELD_F32(a1, 564);
  v6 = FIELD_F32(a1, 568);
  v7 = FIELD_F32(a1, 572);
  FIELD_U32(a1, 1460) = 30;
  FIELD_F32(a1, 1032) = (float)(0.0 - v2) / 30.0;
  FIELD_F32(a1, 1036) = (float)(820.0 - v3) / 30.0;
  FIELD_F32(a1, 1040) = (float)(2720.0 - v4) / 30.0;
  FIELD_F32(a1, 1044) = (float)(0.0 - v5) / 30.0;
  FIELD_F32(a1, 1048) = (float)(20.0 - v6) / 30.0;
  FIELD_F32(a1, 1052) = (float)(300.0 - v7) / 30.0;
  result = 40.0 / (float)30;
  FIELD_F32(dword_60C99E2C, 638256) = result;
  return result;
}
