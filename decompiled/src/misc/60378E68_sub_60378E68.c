/* sub_60378E68
 * address: 0x60378E68   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60378E68(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r3
  unsigned int v5; // r1
  int *v6; // r0
  int v7; // r6
  int v8; // r7
  unsigned int v9; // r2
  int result; // r0
  float v11; // s6
  float v12; // s4
  float v13; // s0
  float v14; // s0

  v2 = sub_60377B20(dword_60C96478, *(_DWORD *)a1, FIELD_U32(a1, 12));
  v3 = v2;
  v4 = 0;
  FIELD_U32(a1, 4) = *(_DWORD *)a1;
  FIELD_U32(a1, 16) = FIELD_U32(a1, 12);
  v5 = FIELD_U32(a1, 8);
  if ( v5 < 2 )
    v4 = FIELD_U32(a1, 8);
  v6 = (int *)(v2 + 8 * v4);
  v7 = *v6;
  if ( *v6 == 4 )
  {
    *v6 = 0;
    v6[1] = 0;
    v5 = FIELD_U32(a1, 8) ^ 1;
    FIELD_U32(a1, 8) = v5;
  }
  else if ( v7 >= 10 && (unsigned int)v7 <= 0x13 )
  {
    v8 = v6[1];
    if ( sub_6037943C(v3) )
    {
      *(_DWORD *)a1 = v7 - 10;
      v5 = FIELD_U32(a1, 8);
      FIELD_U32(a1, 12) = (unsigned __int16)v8 - dword_60AF1FF8[v5];
    }
    else
    {
      v5 = FIELD_U32(a1, 8);
    }
  }
  v9 = FIELD_U32(a1, 12) + dword_60AF1FF8[v5];
  FIELD_U32(a1, 12) = v9;
  result = sub_60377B20(dword_60C96478, *(_DWORD *)a1, v9);
  v11 = FIELD_F32(result, 20) - FIELD_F32(v3, 20);
  v12 = FIELD_F32(result, 16) - FIELD_F32(v3, 16);
  FIELD_F32(a1, 20) = v12;
  FIELD_F32(a1, 24) = v11;
  v13 = sqrtf((float)(v11 * v11) + (float)(v12 * v12));
  if ( v13 > 0.0 )
  {
    v14 = 1.0 / v13;
    FIELD_F32(a1, 20) = v14 * FIELD_F32(a1, 20);
    FIELD_F32(a1, 24) = v14 * FIELD_F32(a1, 24);
  }
  return result;
}
