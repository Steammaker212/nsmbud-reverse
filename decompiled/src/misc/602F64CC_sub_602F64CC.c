/* sub_602F64CC
 * address: 0x602F64CC   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F64CC(int a1)
{
  _BYTE *v2; // r5
  int result; // r0
  float v4; // r1
  float v5; // r2
  float v6; // r1
  int v7; // r2
  int v8; // r3
  const char *sound; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // [sp+8h] [bp-38h] BYREF
  int v14; // [sp+Ch] [bp-34h] BYREF
  _DWORD v15[4]; // [sp+10h] [bp-30h] BYREF
  Vec3 a2[2]; // [sp+20h] [bp-20h] BYREF

  v2 = (_BYTE *)(a1 + 6321);
  if ( FIELD_U8(a1, 6321) )
  {
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) == 0 )
    {
      *v2 = 0;
      v4 = FIELD_F32(a1, 112);
      v5 = FIELD_F32(a1, 116);
      a2[0].x = FIELD_F32(a1, 108);
      a2[0].z = v5;
      a2[0].y = v4 + -2.0;
      ((void (__fastcall *)(int *, _DWORD, Vec3 *, _DWORD))checkLiquidCollisions)(
        &v13,
        0,
        a2,
        FIELD_U8(a1, 86));
      result = v13;
      if ( v13 )
      {
        result = 1;
        *v2 = 1;
      }
    }
  }
  else
  {
    v6 = FIELD_F32(a1, 112);
    a2[0].x = FIELD_F32(a1, 108);
    a2[0].y = v6;
    a2[0].z = 4500.0;
    if ( (FIELD_U8(a1, 2872) & 1) == 0 )
    {
      v15[0] = LODWORD(a2[0].x);
      v15[2] = LODWORD(a2[0].z);
      *(float *)&v15[1] = a2[0].y + -2.0;
      ((void (__fastcall *)(int *, float *, _DWORD *, _DWORD))checkLiquidCollisions)(
        &v14,
        &a2[0].y,
        v15,
        FIELD_U8(a1, 86));
      result = v14;
      if ( !v14 )
        return result;
      *v2 = 1;
      a2[0].z = 6500.0;
      if ( result == 1 )
      {
        v7 = 271;
        v8 = 6;
        sound = "SE_OBJ_CMN_SPLASH";
      }
      else if ( (unsigned int)(result - 3) > 1 )
      {
        if ( result != 5 )
          return result;
        v7 = 272;
        v8 = 23;
        sound = "SE_OBJ_CMN_SPLASH_POISON";
      }
      else
      {
        v7 = 273;
        v8 = 16;
        sound = "SE_OBJ_CMN_SPLASH_LAVA";
      }
      return StageActor__createWaterSplash((StageActor *)a1, (Vec2 *)a2, v7, v8, sound);
    }
    *v2 = 1;
    a2[0].z = sub_600024C4(a1);
    v10 = FIELD_U32(a1, 5956);
    if ( (unsigned int)(unsigned __int8)__ROR4__(v10, 8) - 3 > 1 )
    {
      v12 = BYTE1(v10);
      switch ( v12 )
      {
        case 11:
          v11 = 270;
          break;
        case 2:
          v11 = 268;
          break;
        case 1:
          v11 = 269;
          break;
        default:
          v11 = 266;
          break;
      }
    }
    else
    {
      v11 = 267;
    }
    return EffectData_create(v11, a2, 0, 0);
  }
  return result;
}
