/* sub_6033C4A8
 * address: 0x6033C4A8   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6033C4A8(int a1)
{
  _BYTE *v2; // r5
  int result; // r0
  float v4; // r0
  float v5; // r1
  TileCheck *v6; // r0
  float v7; // r1
  int v8; // r2
  _BYTE *v9; // r4
  int v10; // t1
  int v11; // r1
  int v12; // r2
  int v13; // r3
  const char *sound; // r0
  int v15; // r0
  Vec3 *p_a2; // r1
  int v17; // r0
  int v18; // r0
  float v19; // r1
  int v20; // [sp+4h] [bp-8Ch] BYREF
  Vec2 a3; // [sp+8h] [bp-88h] BYREF
  int v22; // [sp+10h] [bp-80h]
  int v23; // [sp+14h] [bp-7Ch] BYREF
  TileCheck a2; // [sp+18h] [bp-78h] BYREF
  TileCheck_Param v25; // [sp+68h] [bp-28h] BYREF
  Vec2 positionOffset; // [sp+78h] [bp-18h] BYREF

  v2 = (_BYTE *)(a1 + 6700);
  if ( !FIELD_U8(a1, 6700) )
  {
    v11 = FIELD_U32(a1, 112);
    *(_DWORD *)&a2.field_0 = FIELD_U32(a1, 108);
    a2.field_4 = v11;
    a2.field_8 = 1166843904;
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      a2.field_8 = sub_600024C4(a1);
      *v2 = 1;
      v15 = FIELD_U32(a1, 5956);
      if ( (unsigned int)(unsigned __int8)__ROR4__(v15, 8) - 3 > 1 )
      {
        p_a2 = (Vec3 *)&a2;
        v18 = BYTE1(v15);
        switch ( v18 )
        {
          case 11:
            v17 = 270;
            break;
          case 2:
            v17 = 268;
            break;
          case 1:
            v17 = 269;
            break;
          default:
            v17 = 266;
            break;
        }
      }
      else
      {
        p_a2 = (Vec3 *)&a2;
        v17 = 267;
      }
    }
    else
    {
      *(_DWORD *)&v25.field_0 = *(_DWORD *)&a2.field_0;
      v25.field_8 = a2.field_8;
      *(float *)&v25.field_4 = *(float *)&a2.field_4 + -2.0;
      ((void (__fastcall *)(int *, int *, TileCheck_Param *, _DWORD))checkLiquidCollisions)(
        &v23,
        &a2.field_4,
        &v25,
        FIELD_U8(a1, 86));
      result = v23;
      if ( v23 )
      {
        *v2 = 1;
        a2.field_8 = 1170939904;
        if ( result == 1 )
        {
          v12 = 271;
          v13 = 6;
          sound = "SE_OBJ_CMN_SPLASH";
        }
        else if ( (unsigned int)(result - 3) > 1 )
        {
          if ( result != 5 )
            return result;
          v12 = 272;
          v13 = 23;
          sound = "SE_OBJ_CMN_SPLASH_POISON";
        }
        else
        {
          v12 = 273;
          v13 = 16;
          sound = "SE_OBJ_CMN_SPLASH_LAVA";
        }
        return StageActor__createWaterSplash((StageActor *)a1, (Vec2 *)&a2, v12, v13, sound);
      }
      result = FIELD_U8(a1, 6701);
      if ( !FIELD_U8(a1, 6701) )
        return result;
      *v2 = 1;
      v19 = FIELD_F32(a1, 112);
      a3.x = FIELD_F32(a1, 108);
      a3.y = v19;
      v22 = 1166843904;
      p_a2 = (Vec3 *)&a3;
      v17 = 266;
    }
    return EffectData_create(v17, p_a2, 0, 0);
  }
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) == 0 )
  {
    v4 = FIELD_F32(a1, 108);
    v5 = FIELD_F32(a1, 112);
    *(_WORD *)&v25.field_0 = 0;
    a3.x = v4;
    a3.y = v5;
    positionOffset.x = v4;
    positionOffset.y = v5 + -4.0;
    v25.field_2 = FIELD_U8(a1, 86);
    v25.field_3 = FIELD_U8(a1, 87);
    v25.field_4 = 0;
    v25.field_8 = 0;
    v6 = TileCheck_ctor(&a2, &v25);
    result = TileCheck_check(v6, 0, &a3, &positionOffset, 8);
    if ( !result )
    {
      *v2 = 0;
      v7 = FIELD_F32(a1, 112);
      v8 = FIELD_U32(a1, 116);
      *(_DWORD *)&a2.field_0 = FIELD_U32(a1, 108);
      a2.field_8 = v8;
      *(float *)&a2.field_4 = v7 + -2.0;
      ((void (__fastcall *)(int *, _DWORD, TileCheck *, _DWORD))checkLiquidCollisions)(
        &v20,
        0,
        &a2,
        FIELD_U8(a1, 86));
      if ( v20 )
      {
        *v2 = 1;
        v10 = FIELD_U8(a1, 6701);
        v9 = (_BYTE *)(a1 + 6701);
        result = v10;
        if ( !v10 )
          return result;
        result = 0;
        *v9 = 0;
      }
      else
      {
        result = FIELD_U8(a1, 6701);
        if ( !FIELD_U8(a1, 6701) )
          return result;
        result = 1;
      }
      *v2 = result;
    }
  }
  return result;
}
