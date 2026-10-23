/* sub_6038C924
 * address: 0x6038C924   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6038C924(int a1, float a2)
{
  int v2; // r5
  float *v3; // r4
  float v4; // r1
  float *v5; // r11
  float v6; // s2
  float v7; // s4
  TileCheck *v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r0
  TileCheck_Result v14; // [sp+10h] [bp-108h] BYREF
  _BYTE v15[4]; // [sp+38h] [bp-E0h] BYREF
  float v16; // [sp+3Ch] [bp-DCh]
  int v17; // [sp+44h] [bp-D4h]
  int v18; // [sp+48h] [bp-D0h]
  _BYTE v19[4]; // [sp+60h] [bp-B8h] BYREF
  float v20; // [sp+64h] [bp-B4h]
  int v21; // [sp+6Ch] [bp-ACh]
  int v22; // [sp+70h] [bp-A8h]
  TileCheck v23; // [sp+8Ch] [bp-8Ch] BYREF
  TileCheck_Param v24; // [sp+D8h] [bp-40h] BYREF
  Vec2 positionOffset; // [sp+E4h] [bp-34h] BYREF
  Vec2 a3[5]; // [sp+ECh] [bp-2Ch] BYREF

  v2 = 0;
  v3 = (float *)(a1 + 8260);
  v5 = (float *)(a1 + 8264);
  v4 = FIELD_F32(a1, 8264);
  a3[0].x = FIELD_F32(a1, 8260);
  a3[0].y = v4;
  v6 = FIELD_F32(a1, 120);
  v7 = FIELD_F32(a1, 124);
  *(_WORD *)&v24.field_0 = 0;
  positionOffset.x = a3[0].x + (float)((float)(v6 * a2) * 0.5);
  positionOffset.y = v4 + (float)(v7 * a2);
  v24.field_2 = FIELD_U8(a1, 86);
  v24.field_3 = FIELD_U8(a1, 87);
  v24.field_4 = 0;
  v24.field_8 = 0;
  v8 = TileCheck_ctor(&v23, &v24);
  v21 = 0;
  v17 = 0;
  v14.field_C = 0;
  v22 = 0;
  v18 = 0;
  v14.field_10 = 0;
  v9 = ((int (__fastcall *)(TileCheck *, _BYTE *, Vec2 *, Vec2 *, int))loc_6015D2DC)(v8, v19, a3, &positionOffset, 15);
  v10 = ((int (__fastcall *)(TileCheck *, _BYTE *, Vec2 *, Vec2 *, int))loc_6015D6F0)(
          &v23,
          v15,
          a3,
          &positionOffset,
          15);
  if ( v9 || (v10 ^ 1) == 1 )
  {
    if ( v10 == 1 )
    {
      if ( FIELD_F32(a1, 120) >= 0.0 )
      {
        if ( v20 >= v16 )
          return v2;
      }
      else if ( v20 <= v16 )
      {
        return v2;
      }
    }
    v11 = TileCheck_check(&v23, &v14, a3, &positionOffset, 15);
    v2 = (FIELD_U8(a1, 8285) == 0) & (unsigned __int8)v11;
    if ( FIELD_U8(a1, 8285) && v11 == 1 )
      return sqrtf(
               (float)((float)(*v5 - v14.field_8) * (float)(*v5 - v14.field_8))
             + (float)((float)(*v3 - v14.field_4) * (float)(*v3 - v14.field_4))) <= 40.0;
  }
  return v2;
}
