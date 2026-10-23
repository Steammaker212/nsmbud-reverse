/* sub_608B0124
 * address: 0x608B0124   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608B0124(int a1)
{
  int v3; // r0
  float v4; // s16
  int v5; // r5
  _DWORD *v6; // r0
  float v7; // s2
  int v8; // r1
  int v9; // r0
  float v10; // s0
  float v11; // s2
  int v12; // r0
  int v13; // r1
  float v14; // s0
  float v15; // s2
  int v16; // r0
  int v17; // r1
  float v18; // s0
  float v19; // s2
  int v20; // r0
  int v21; // r1

  if ( FIELD_U8(a1, 206) == 2 )
    return 0.0;
  v3 = FIELD_U32(a1, 388);
  if ( v3
    && sub_608B1060(v3) == 1
    && (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 260) + 8))(FIELD_U32(a1, 260)) >= 1 )
  {
    v4 = 1.0;
    v5 = 0;
    while ( 1 )
    {
      v6 = (_DWORD *)sub_608B1008(FIELD_U32(a1, 388));
      if ( v6[1] > v5 )
      {
        if ( *(_BYTE *)(*v6 + v5) )
          break;
      }
      if ( ++v5 >= (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 260) + 8))(FIELD_U32(a1, 260)) )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v4 = FIELD_F32(a1, 240);
  }
  v7 = FIELD_F32(a1, 268);
  v8 = FIELD_U32(a1, 276);
  v9 = FIELD_U32(a1, 272);
  if ( v8 < v9 )
    v7 = FIELD_F32(a1, 264) + (float)((float)((float)v8 * (float)(v7 - FIELD_F32(a1, 264))) / (float)v9);
  v10 = (float)(v4 * *(float *)(FIELD_U32(a1, 16) + 44)) * v7;
  v11 = FIELD_F32(a1, 140);
  v12 = FIELD_U32(a1, 144);
  v13 = FIELD_U32(a1, 148);
  if ( v13 < v12 )
    v11 = FIELD_F32(a1, 136) + (float)((float)((float)v13 * (float)(v11 - FIELD_F32(a1, 136))) / (float)v12);
  v14 = v10 * v11;
  v15 = FIELD_F32(a1, 156);
  v16 = FIELD_U32(a1, 160);
  v17 = FIELD_U32(a1, 164);
  if ( v17 < v16 )
    v15 = FIELD_F32(a1, 152) + (float)((float)((float)v17 * (float)(v15 - FIELD_F32(a1, 152))) / (float)v16);
  v18 = v14 * v15;
  v19 = FIELD_F32(a1, 172);
  v20 = FIELD_U32(a1, 176);
  v21 = FIELD_U32(a1, 180);
  if ( v21 < v20 )
    v19 = FIELD_F32(a1, 168) + (float)((float)((float)v21 * (float)(v19 - FIELD_F32(a1, 168))) / (float)v20);
  return (float)((float)(v18 * v19) * FIELD_F32(a1, 52)) * FIELD_F32(a1, 108);
}
