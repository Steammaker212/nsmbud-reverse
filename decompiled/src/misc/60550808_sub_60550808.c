/* sub_60550808
 * address: 0x60550808   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60550808(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  unsigned int v4; // r1
  float v5; // s0
  float v6; // s2
  float v7; // s4
  float v8; // s6
  int v9; // r1
  float v10; // s4
  float v11; // s6
  float v12; // s6
  float v13; // s4
  float v14; // s6
  float v15; // s8
  float result; // s0

  v2 = (_DWORD *)(a1 + 84);
  FIELD_U16(dword_60C99DD4, 1382) = 0;
  FIELD_U16(a1, 42) = 0;
  sub_6047DEC8((_DWORD *)(a1 + 84), FIELD_U32(a1, 4), 1, 0);
  sub_6047DEC8(v2, FIELD_U32(a1, 8), 1, FIELD_U16(dword_60CC6D78, 109052));
  sub_60473B58(v2, 0xEu, 0);
  v3 = FIELD_U32(a1, 12);
  v4 = FIELD_U8(v3, 67);
  v5 = FIELD_F32(v3, 92);
  v6 = FIELD_F32(v3, 108);
  if ( (v4 & 3) == 2 )
  {
    v7 = FIELD_F32(v3, 56);
    v8 = -0.5;
  }
  else
  {
    if ( (v4 & 3) != 1 )
      goto LABEL_6;
    v7 = FIELD_F32(v3, 56);
    v8 = 0.5;
  }
  v5 = v5 + (float)(v7 * v8);
LABEL_6:
  v9 = (v4 >> 2) & 3;
  if ( v9 == 1 )
  {
    v10 = FIELD_F32(v3, 60);
    v11 = -0.5;
  }
  else
  {
    if ( v9 != 2 )
    {
      v10 = FIELD_F32(v3, 60);
      goto LABEL_12;
    }
    v10 = FIELD_F32(v3, 60);
    v11 = 0.5;
  }
  v6 = v6 + (float)(v10 * v11);
LABEL_12:
  v12 = FIELD_F32(v3, 56);
  FIELD_U32(a1, 32) = 255;
  v13 = v10 * 0.5;
  v14 = v12 * 0.5;
  v15 = v5 - v14;
  result = v5 + v14;
  FIELD_F32(a1, 16) = v15;
  FIELD_F32(a1, 20) = v6 - v13;
  FIELD_F32(a1, 24) = result;
  FIELD_F32(a1, 28) = v6 + v13;
  FIELD_U8(a1, 36) = 0;
  return result;
}
