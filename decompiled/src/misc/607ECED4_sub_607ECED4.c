/* sub_607ECED4
 * address: 0x607ECED4   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607ECED4(int a1)
{
  float result; // s0
  float v2; // s2
  float v3; // s4
  float v4; // s6
  float v5; // s8
  float v6; // s10
  float v7; // s12

  v2 = FIELD_F32(a1, 556);
  v3 = FIELD_F32(a1, 560);
  v4 = FIELD_F32(a1, 564);
  v5 = FIELD_F32(a1, 568);
  v6 = FIELD_F32(a1, 572);
  v7 = FIELD_F32(a1, 576);
  FIELD_U32(a1, 66756) = 30;
  FIELD_F32(a1, 1036) = (float)(0.0 - v2) / 30.0;
  FIELD_F32(a1, 1040) = (float)(820.0 - v3) / 30.0;
  FIELD_F32(a1, 1044) = (float)(2720.0 - v4) / 30.0;
  FIELD_F32(a1, 1048) = (float)(0.0 - v5) / 30.0;
  FIELD_F32(a1, 1052) = (float)(20.0 - v6) / 30.0;
  FIELD_F32(a1, 1056) = (float)(300.0 - v7) / 30.0;
  result = 40.0 / (float)30;
  FIELD_F32(dword_60CA146C, 279740) = result;
  return result;
}
