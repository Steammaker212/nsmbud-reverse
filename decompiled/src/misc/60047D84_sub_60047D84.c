/* sub_60047D84
 * address: 0x60047D84   size: 964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60047D84(int a1, float *a2)
{
  float v3; // s0
  float *v4; // r2
  float *v5; // r3
  int v7; // r0
  int *v8; // r8
  float v9; // r1
  _DWORD *v10; // r11
  float v11; // t1
  char v12; // r1
  TileCheck *v13; // r7
  int v14; // r6
  int v15; // r0
  float v16; // r4
  float v17; // s16
  float v18; // r5
  float v19; // s0
  float v20; // s2
  int v21; // r6
  bool v22; // zf
  char v23; // r12
  int v24; // r8
  float v25; // s0
  float v26; // s0
  float v27; // s2
  int v28; // r0
  float *v29; // r1
  _BYTE v32[4]; // [sp+10h] [bp-148h] BYREF
  float v33; // [sp+14h] [bp-144h]
  float v34; // [sp+18h] [bp-140h]
  int v35; // [sp+1Ch] [bp-13Ch]
  int v36; // [sp+20h] [bp-138h]
  TileCheck_Result resultStruct; // [sp+38h] [bp-120h] BYREF
  TileCheck v38; // [sp+64h] [bp-F4h] BYREF
  TileCheck v39; // [sp+B0h] [bp-A8h] BYREF
  TileCheck_Param v40; // [sp+FCh] [bp-5Ch] BYREF
  TileCheck_Param a2a; // [sp+108h] [bp-50h] BYREF
  int (**v42)(); // [sp+114h] [bp-44h] BYREF
  Vec2 positionOffset; // [sp+118h] [bp-40h] BYREF
  Vec2 a3[7]; // [sp+120h] [bp-38h] BYREF

  v3 = *a2;
  v4 = (float *)(a1 + 11292);
  v5 = (float *)(a1 + 11288);
  v8 = (int *)(a1 + 11468);
  v7 = FIELD_U32(a1, 11468);
  if ( !v7 )
    v4 = (float *)(a1 + 11184);
  v9 = *v4;
  if ( !v7 )
    v5 = (float *)(a1 + 11180);
  a3[0].x = *v5;
  a3[0].y = v9;
  v11 = FIELD_F32(a1, 11584);
  v10 = (_DWORD *)(a1 + 11584);
  *(_WORD *)&a2a.field_0 = 0;
  positionOffset.x = v3 + a3[0].x;
  positionOffset.y = v11;
  v42 = off_60BC30C8;
  a2a.field_2 = *((_BYTE *)v10 - 11498);
  v12 = *((_BYTE *)v10 - 11497);
  v40.field_0 = 0;
  v40.field_1 = 0;
  v40.field_2 = a2a.field_2;
  a2a.field_3 = v12;
  v40.field_3 = v12;
  a2a.field_4 = 0;
  v40.field_4 = 0;
  a2a.field_8 = (int)&v42;
  v40.field_8 = 0;
  TileCheck_ctor(&v39, &a2a);
  v13 = &v38;
  TileCheck_ctor(&v38, &v40);
  resultStruct.field_C = 0;
  v35 = 0;
  resultStruct.field_10 = 0;
  v36 = 0;
  v14 = TileCheck_check(&v39, &resultStruct, a3, &positionOffset, 8);
  v15 = ((int (__fastcall *)(TileCheck *, _BYTE *, Vec2 *, Vec2 *, int))loc_6015D2DC)(&v38, v32, a3, &positionOffset, 8);
  if ( v14 )
  {
    v16 = resultStruct.field_8;
    v17 = resultStruct.field_8;
    if ( v15 == 1 )
    {
      v18 = resultStruct.field_4;
      v19 = a3[0].y - resultStruct.field_8;
      v20 = a3[0].x - resultStruct.field_4;
LABEL_10:
      v21 = 1;
      FIELD_F32(a1, 11624) = sqrtf((float)(v20 * v20) + (float)(v19 * v19));
      FIELD_F32(a1, 11576) = v18;
      FIELD_F32(a1, 11580) = v16;
      return v21;
    }
    v21 = 1;
    v22 = resultStruct.field_20 == 0;
    if ( resultStruct.field_20 )
    {
      v13 = *(TileCheck **)(resultStruct.field_20 + 144);
      v22 = v13 == 0;
    }
    if ( !v22 && Actor__getProfileId((Actor *)v13) == 372 )
    {
      if ( ((unsigned int)dword_60C80420 & ~(1610907572 << v23) & 1) == 0 && _cxa_guard_acquire(dword_60C80420) )
      {
        dword_60C8041C = (int)&off_60BC00E0;
        _cxa_guard_release(dword_60C80420);
      }
      v24 = (**(int (__fastcall ***)(TileCheck *, int *))&FIELD_U8(v13, 0x0))(v13, &dword_60C8041C);
      v21 = 1;
      if ( v24 )
        v24 = (int)v13;
      FIELD_U8(v24, 6796) = 1;
      FIELD_U8(a1, 11685) = 1;
      FIELD_U8(a1, 11686) = FIELD_U8(v24, 6797);
      v25 = *(float *)&v13[1].field_20 + *(float *)&v13[7].field_28;
      FIELD_F32(a1, 11576) = v25;
      FIELD_U32(a1, 11580) = *v10;
      v26 = v25 - a3[0].x;
      *a2 = v26;
      v27 = v17 - a3[0].y;
      a2[1] = v17 - a3[0].y;
      FIELD_F32(a1, 11624) = sqrtf((float)((float)(v26 * v26) + (float)(v27 * v27)) + (float)(a2[2] * a2[2]));
      FIELD_U32(a1, 11460) = v24;
    }
  }
  else
  {
    if ( v15 == 1 )
    {
      v18 = v33;
      v16 = v34;
      v19 = a3[0].y - v34;
      v20 = a3[0].x - v33;
      goto LABEL_10;
    }
    v28 = *v8;
    if ( *v8 )
    {
      v29 = a2;
      if ( FIELD_F32(a1, 11608) < positionOffset.x )
        v28 ^= 1u;
    }
    else
    {
      v29 = a2;
      v28 = FIELD_F32(a1, 11604) > positionOffset.x;
    }
    *v29 = flt_60AF1E98[v28] + *v29;
    sub_60047D84(a1, v29);
    return 0;
  }
  return v21;
}
