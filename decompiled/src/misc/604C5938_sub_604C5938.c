/* sub_604C5938
 * address: 0x604C5938   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_604C5938(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // r1
  unsigned int v5; // r2
  int v6; // r0
  int v7; // r7
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r2
  float v12; // s0
  float *result; // r0
  int v14; // r7
  unsigned int v15; // r3
  float v16; // s6
  float v17; // s4
  float v18; // s8
  float v19; // s10
  int v20; // r3

  sub_604C5C04();
  StateMgr__execute((StateMgr *)(a1 + 24));
  sub_6050DB10(a1 + 14192);
  sub_6050DB10(a1 + 17796);
  sub_6050DB10(a1 + 21400);
  sub_6050DB10(a1 + 25004);
  sub_6050229C(a1 + 4056);
  sub_6050A8A4(a1 + 6540);
  sub_60473B58((_DWORD *)(a1 + 48), 0xEu, 0);
  SE_SYS_MAP_VIEW_ZOOM_ref(a1);
  v2 = (_DWORD *)(a1 + 14152);
  v3 = FIELD_U32(a1, 14152);
  if ( v3 )
  {
    if ( v3 == 3 )
    {
      *v2 = 0;
      FIELD_U32(a1, 5084) = 256;
    }
    else
    {
      *v2 = 3;
    }
  }
  v4 = 0;
  v5 = 0;
  v6 = a1 + 13892;
  do
  {
    if ( *(_BYTE *)(v6 + v5) )
    {
      v7 = FIELD_U32(a1, 3560);
      if ( FIELD_U32(a1, 3556) > v5 )
        v7 += v4;
      if ( FIELD_U8(v7, 16) )
        *(_BYTE *)(v6 + v5) = 0;
    }
    ++v5;
    v4 += 20;
  }
  while ( v5 != 24 );
  FIELD_U8(a1, 14179) = 0;
  if ( FIELD_U8(a1, 14172) )
  {
    if ( (FIELD_U16(a1, 6408) & 0x10F0) != 0
      || (v10 = *(_DWORD *)(FIELD_U32(dword_60CCF448, 220) + 20), FIELD_F32(v10, 284) != 0.0)
      || FIELD_F32(v10, 288) != 0.0 )
    {
      v8 = sub_60502D80(a1 + 4056);
      v9 = 1;
      if ( !v8 )
      {
        if ( FIELD_U8(a1, 5102) )
        {
          v9 = FIELD_U8(a1, 14186);
          goto LABEL_22;
        }
        v9 = 0;
      }
      FIELD_U8(a1, 14186) = v9;
LABEL_22:
      if ( !v9 )
        FIELD_U8(a1, 14179) = 1;
    }
  }
  v11 = 0;
  FIELD_U8(a1, 14181) = 0;
  v12 = FIELD_F32(a1, 14128) + 1.0;
  FIELD_F32(a1, 14128) = v12;
  if ( v12 >= FIELD_F32(a1, 14124) )
    FIELD_U32(a1, 14128) = 0;
  result = (float *)(a1 + 14040);
  do
  {
    v14 = *(_DWORD *)(a1 + 13868 + 4 * v11);
    v15 = FIELD_U8(v14, 67);
    v16 = FIELD_F32(v14, 92);
    v17 = FIELD_F32(v14, 108);
    v18 = FIELD_F32(v14, 56) * 0.5;
    if ( (v15 & 3) == 2 )
    {
      v16 = v16 - v18;
    }
    else if ( (v15 & 3) == 1 )
    {
      v16 = v16 + v18;
      v17 = v17 + 0.0;
    }
    v19 = FIELD_F32(v14, 60) * 0.5;
    v20 = (v15 >> 2) & 3;
    if ( v20 == 2 )
    {
      v17 = v17 - v19;
    }
    else if ( v20 == 1 )
    {
      v17 = v19 + v17;
      v16 = v16 + 0.0;
    }
    ++v11;
    *(result - 3) = v16 - v18;
    *(result - 2) = v17 - v19;
    *(result - 1) = v18 + v16;
    *result = v19 + v17;
    result += 4;
  }
  while ( v11 != 6 );
  return result;
}
