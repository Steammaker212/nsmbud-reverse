/* sub_601F258C
 * address: 0x601F258C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601F258C(int a1, int a2)
{
  float v4; // s0
  float result; // s0
  float v6[7]; // [sp+4h] [bp-1Ch] BYREF

  FIELD_U32(a1, 176) = 0;
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 184) = 0;
  FIELD_U32(a1, 188) = 0;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 196) = 0;
  FIELD_U32(a1, 164) = FIELD_U32(a1, 632);
  FIELD_U32(a1, 168) = FIELD_U32(a1, 628);
  v6[0] = 0.0;
  v6[1] = 0.0;
  v6[2] = 1.0;
  sub_601862E0(a1, v6);
  FIELD_F32(a1, 200) = (*(float (__fastcall **)(int, int))(*(_DWORD *)a1 + 332))(a1, a2);
  FIELD_U32(a1, 588) = 0x100000000LL / a2;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 80) = FIELD_U32(a1, 568);
  v4 = FIELD_F32(a1, 572);
  FIELD_U32(a1, 88) = FIELD_U32(a1, 576);
  result = v4 + FIELD_F32(a1, 628);
  FIELD_F32(a1, 84) = result;
  return result;
}
