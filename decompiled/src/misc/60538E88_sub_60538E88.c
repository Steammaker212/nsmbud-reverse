/* sub_60538E88
 * address: 0x60538E88   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60538E88(int a1, float a2)
{
  int v3; // r7
  int v4; // r5
  float v5; // s0
  int v6; // r6
  int *v7; // r8
  int v8; // r11
  int v9; // r6
  bool v10; // cc
  int v11; // r5
  int result; // r0
  int v13; // r10
  unsigned int v14; // r1
  unsigned int v15; // r5
  int v16; // r6

  v3 = 0;
  v4 = FIELD_U32(a1, 83616);
  FIELD_U8(a1, 52672) = 0;
  FIELD_U8(a1, 52673) = 0;
  FIELD_U8(a1, 52674) = 0;
  sub_6047EEC4(a1 + 15740, 0, a2);
  v6 = 0;
  v7 = (int *)(a1 + 16732);
  if ( (unsigned int)v4 < 3 )
    v6 = v4;
  FIELD_U8(a1, 16200) = 0;
  v8 = dword_60B03A48[v4];
  if ( *(_DWORD *)(a1 + 4012 * v6 + 4048) )
  {
    *v7 = v8;
  }
  else
  {
    sub_6047EEC4(a1 + 15740, v8, v5);
    *(_BYTE *)(a1 + v8 + 16200) = 0;
    sub_6047E518(a1 + 15740, 0, 0, (int)&dword_60B3B944);
    v3 = 1;
    *(_BYTE *)(a1 + v6 + 52672) = 1;
  }
  v9 = v4 + 1;
  v10 = v4 <= 1;
  v11 = 0;
  result = 0;
  if ( !v10 )
    v9 = 0;
  if ( (unsigned int)v9 < 3 )
    v11 = v9;
  if ( *(_DWORD *)(a1 + 4012 * v11 + 4048) )
  {
    if ( v3 == 1 )
      *v7 = dword_60B03A48[v9];
  }
  else
  {
    v13 = dword_60B03A48[v9];
    sub_6047EEC4(a1 + 15740, v13, v5);
    *(_BYTE *)(a1 + v13 + 16200) = 0;
    sub_6047E518(a1 + 15740, 0, 0, (int)&dword_60B3B944);
    *(_BYTE *)(a1 + v11 + 52672) = 1;
    result = v3;
  }
  v14 = v9 + 1;
  v15 = 0;
  if ( v9 > 1 )
    v14 = 0;
  if ( v14 < 3 )
    v15 = v14;
  if ( *(_DWORD *)(a1 + 4012 * v15 + 4048) )
  {
    if ( result == 1 )
    {
      result = dword_60B03A48[v14];
      *v7 = result;
    }
  }
  else
  {
    v16 = dword_60B03A48[v14];
    sub_6047EEC4(a1 + 15740, v16, v5);
    *(_BYTE *)(a1 + v16 + 16200) = 0;
    sub_6047E518(a1 + 15740, 0, 0, (int)&dword_60B3B944);
    *(_BYTE *)(a1 + v15 + 52672) = 1;
    return a1 + v15;
  }
  return result;
}
