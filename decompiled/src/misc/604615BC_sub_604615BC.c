/* sub_604615BC
 * address: 0x604615BC   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_604615BC(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  float v4; // s18
  float v5; // s0
  float v6; // s20
  float v7; // s16
  float v8; // s22
  float v9; // s26
  float v10; // s24
  float result; // s0

  v2 = sub_6014C4A4(a1 + 648);
  v3 = (v2 >> 20) & 0xFF0;
  v4 = FIELD_F32(a1, 120);
  v5 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v6 = *(float *)((char *)&sinLutTable[2] + v3) + (float)(v5 * *(float *)((char *)&sinLutTable[3] + v3));
  v7 = *(float *)((char *)sinLutTable + v3) + (float)(*(float *)((char *)&sinLutTable[1] + v3) * v5);
  if ( FIELD_U8(a1, 6054) || FIELD_U8(a1, 6053) )
    v4 = v4 * 0.5;
  v8 = FIELD_F32(a1, 124);
  v9 = FIELD_F32(a1, 6024);
  v10 = FIELD_F32(a1, 6028);
  sub_600037A0(a1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)((float)(v9 + (float)(v6 * v4)) + FIELD_F32(a1, 6000));
  result = (float)((float)(v8 + (float)(v7 * v4)) + v10) + FIELD_F32(a1, 112);
  FIELD_F32(a1, 112) = result;
  return result;
}
