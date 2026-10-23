/* sub_6023349C
 * address: 0x6023349C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6023349C(int a1, int a2)
{
  float v4; // s8
  float v5; // s10
  float v6; // s0
  float v7; // s2
  float v8; // s4
  float v9; // s6
  float result; // s0
  float v11[3]; // [sp+0h] [bp-28h] BYREF
  _BYTE v12[28]; // [sp+Ch] [bp-1Ch] BYREF

  sub_6090A308(a1 + 80, v12);
  sub_6090BED8(a1 + 168, v11, v12);
  v4 = v11[0];
  v5 = v11[1];
  v6 = FIELD_F32(dword_60CC6484, 116);
  v7 = FIELD_F32(dword_60CC6484, 120);
  v8 = FIELD_F32(dword_60CC6484, 124);
  v9 = FIELD_F32(dword_60CC6484, 128);
  FIELD_U32(a2, 8) = 0;
  result = v6 + (float)((float)(v7 - v6) * v4);
  *(float *)a2 = result;
  FIELD_F32(a2, 4) = v9 + (float)((float)(v8 - v9) * v5);
  return result;
}
