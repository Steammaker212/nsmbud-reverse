/* sub_6024071C
 * address: 0x6024071C   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024071C(int a1)
{
  unsigned int v2; // r1
  int v3; // r1
  int v4; // r0
  float *v5; // r3
  float v6; // r0
  float *v7; // r1
  float v8; // s2
  float v9; // r2
  unsigned int v10; // r0
  float v11; // s0
  float v12; // s4
  float v13; // s2
  int result; // r0
  int v15; // r2

  FIELD_U32(a1, 6488) = 10;
  FIELD_U32(a1, 96) = -1065353216;
  FIELD_U32(a1, 104) = 1017370378;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 6496) = 0;
  FIELD_U32(a1, 124) = 0;
  v2 = FIELD_U32(dword_60C99D88, 24);
  if ( v2 >= 4 )
  {
    FIELD_U32(dword_60C99D88, 24) = 0;
    v2 = 0;
  }
  FIELD_U32(a1, 6396) = v2;
  if ( FIELD_U32(a1, 6400) )
  {
    v3 = FIELD_U32(a1, 6316);
  }
  else
  {
    v4 = sub_607FCAA8(dword_60CC6484);
    v3 = FIELD_U32(a1, 6316);
    if ( (v3 | 2) != 2 )
    {
      if ( (v4 | 1) == 3 )
      {
        v4 = 2;
        if ( FIELD_F32(dword_60CC6484, 128) > FIELD_F32(a1, 112) )
          v4 = 3;
      }
      else
      {
        v4 = (float)(FIELD_F32(dword_60CC6484, 112) + (float)(FIELD_F32(dword_60CC6484, 104) * 0.5)) > FIELD_F32(a1, 108);
      }
    }
    FIELD_U32(a1, 80) = v4;
    if ( !FIELD_U32(a1, 6320) && FIELD_U8(a1, 6313) )
    {
      if ( v4 == 1 )
      {
        FIELD_U32(a1, 80) = 0;
      }
      else if ( v4 )
      {
        v15 = 2;
        if ( v4 == 2 )
          v15 = 3;
        FIELD_U32(a1, 80) = v15;
      }
      else
      {
        FIELD_U32(a1, 80) = 1;
      }
    }
  }
  if ( (v3 | 2) == 2 )
  {
    v5 = (float *)dword_60CC6484;
    v6 = FIELD_F32(dword_60CC6484, 112);
    FIELD_F32(a1, 108) = v6;
    v7 = (float *)(a1 + 108);
    v8 = v6;
    v9 = v5[31];
    FIELD_F32(a1, 112) = v9;
    v10 = FIELD_U32(a1, 80);
    if ( v10 )
    {
      if ( v10 == 3 )
      {
        *v7 = v8 + (float)(v5[26] * 0.5);
        v13 = (float)(v5[27] + 32.0) + 5.0;
LABEL_23:
        v11 = v9 - v13;
LABEL_24:
        FIELD_F32(a1, 112) = v11;
        *v7 = flt_60AF2484[FIELD_U32(a1, 6396)] + *v7;
        if ( v10 > 1 )
          goto LABEL_28;
        goto LABEL_25;
      }
      if ( v10 == 2 )
      {
        v11 = v9 + 37.0;
        *v7 = v8 + (float)(v5[26] * 0.5);
        goto LABEL_24;
      }
      v12 = -37.0;
    }
    else
    {
      v12 = (float)(v5[26] + 32.0) + 5.0;
    }
    *v7 = v8 + v12;
    v7 = (float *)(a1 + 112);
    v13 = (float)(v5[27] * 0.5) + 32.0;
    goto LABEL_23;
  }
  if ( FIELD_U32(a1, 80) > 1u )
    goto LABEL_28;
LABEL_25:
  if ( FIELD_U8(a1, 6313) && !FIELD_U32(a1, 6320) )
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + 64.0;
LABEL_28:
  result = dword_60C99D88;
  ++FIELD_U32(dword_60C99D88, 24);
  return result;
}
