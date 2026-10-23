/* sub_60744AFC
 * address: 0x60744AFC   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60744AFC(int a1)
{
  float v2; // s18
  float v3; // s20
  float v4; // s0
  float v5; // s0
  float v6; // s2
  float v7; // s8
  float result; // s0

  sub_60421AE4(*(_DWORD **)(a1 + 648), (int)&dword_60CBE4D0, 1, 1.0, 0.0);
  sub_60421AE4(*(_DWORD **)(a1 + 652), (int)&dword_60CBE4E0, 1, 1.0, 0.0);
  FIELD_U32(a1, 696) = 90;
  FIELD_U32(a1, 728) = 0;
  FIELD_F32(a1, 732) = sub_6074C8FC() * 0.3;
  FIELD_U32(a1, 736) = 0;
  v2 = FIELD_F32(a1, 708) - FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 704) - FIELD_F32(a1, 108);
  v4 = sqrtf((float)(v2 * v2) + (float)(v3 * v3));
  if ( v4 > 0.0 )
  {
    v2 = v2 * (float)(1.0 / v4);
    v3 = v3 * (float)(1.0 / v4);
  }
  v5 = v4 / 90.0;
  v6 = (float)(FIELD_F32(a1, 712) - FIELD_F32(a1, 116)) / 90.0;
  v7 = v5 * v3;
  result = v5 * v2;
  FIELD_F32(a1, 120) = v7;
  FIELD_F32(a1, 124) = result;
  FIELD_F32(a1, 128) = v6;
  FIELD_U32(a1, 144) = 1008981770;
  FIELD_U32(a1, 148) = 1008981770;
  FIELD_U32(a1, 152) = 1008981770;
  return result;
}
