/* sub_602BCB10
 * address: 0x602BCB10   size: 736   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602BCB10(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // s4
  float v5; // s0
  float v6; // s4
  unsigned int v7; // r1
  float v8; // s0
  int v9; // s4
  float v10; // s0
  float v11; // s4
  float v12; // s2
  int v13; // s4
  float v14; // s0
  float v15; // s4
  int v16; // s4
  float v17; // s0
  float v18; // s4
  _DWORD *v19; // r4
  _DWORD v21[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v22[6]; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_U8(a1, 6332);
  if ( v2 == 2 )
  {
    FIELD_U32(a1, 164) = 0x80000000;
    v3 = FIELD_U32(a1, 80);
    v9 = dword_60AF1FF8[v3];
    FIELD_U32(a1, 6316) = v9 << 30;
    v10 = (float)FIELD_U8(a1, 6304);
    v11 = (float)v9;
    v12 = (float)((float)(v10 * 16.0) * 0.5) * v11;
    FIELD_F32(a1, 6328) = (float)(v10 * 16.0) * v11;
    v8 = v10 * -16.0;
    FIELD_F32(a1, 6320) = v12;
    v7 = FIELD_U8(a1, 6305);
    FIELD_F32(a1, 6324) = (float)v7 * -16.0;
  }
  else if ( v2 == 1 )
  {
    v3 = FIELD_U32(a1, 80);
    v13 = dword_60AF1FF8[v3];
    FIELD_U32(a1, 164) = -1073741824 * v13;
    FIELD_U32(a1, 6316) = 0x80000000;
    v14 = (float)FIELD_U8(a1, 6305);
    v15 = (float)v13;
    FIELD_F32(a1, 6328) = (float)(v14 * 16.0) * v15;
    v7 = FIELD_U8(a1, 6304);
    v8 = v14 * -16.0;
    FIELD_F32(a1, 6320) = (float)((float)((float)v7 * 16.0) * -0.5) * v15;
    FIELD_F32(a1, 6324) = v8;
  }
  else if ( v2 )
  {
    v3 = FIELD_U32(a1, 80);
    v16 = dword_60AF1FF8[v3];
    FIELD_U32(a1, 164) = v16 << 30;
    FIELD_U32(a1, 6316) = 0;
    v17 = (float)FIELD_U8(a1, 6305);
    v18 = (float)v16;
    FIELD_F32(a1, 6328) = (float)(v17 * 16.0) * v18;
    v7 = FIELD_U8(a1, 6304);
    v8 = v17 * -16.0;
    FIELD_F32(a1, 6320) = (float)((float)((float)v7 * 16.0) * 0.5) * v18;
    FIELD_U32(a1, 6324) = 0;
  }
  else
  {
    FIELD_U32(a1, 164) = 0;
    v3 = FIELD_U32(a1, 80);
    v4 = dword_60AF1FF8[v3];
    FIELD_U32(a1, 6316) = -1073741824 * v4;
    v5 = (float)FIELD_U8(a1, 6304);
    v6 = (float)v4;
    FIELD_F32(a1, 6328) = (float)(v5 * 16.0) * v6;
    FIELD_F32(a1, 6320) = (float)((float)(v5 * 16.0) * -0.5) * v6;
    FIELD_U32(a1, 6324) = 0;
    v7 = FIELD_U8(a1, 6305);
    v8 = v5 * -16.0;
  }
  *(float *)v22 = v8;
  if ( v3 == 1 )
    v8 = -v8;
  v21[0] = 0;
  v21[1] = 0;
  if ( v3 == 1 )
    *(float *)v21 = v8;
  *(float *)&v22[1] = (float)v7 * 16.0;
  if ( v3 == 1 )
    v22[0] = 0;
  FIELD_U32(a1, 6336) = 0;
  v19 = (_DWORD *)(a1 + 6336);
  sub_60160948(v19 + 4);
  v19[65] = *v19;
  return sub_60165340((int)(v19 + 4), v22, v21);
}
