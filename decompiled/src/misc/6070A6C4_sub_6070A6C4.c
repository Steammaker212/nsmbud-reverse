/* sub_6070A6C4
 * address: 0x6070A6C4   size: 924   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070A6C4(int a1)
{
  float v2; // s0
  int result; // r0
  float v4; // s2
  float v5; // r0
  _DWORD *v6; // r5
  int v7; // r1
  float v8; // s0
  float v9; // r1
  TileCheck *v10; // r0
  float v11; // s0
  int v12; // s0
  float v13; // s0
  float v14; // s2
  float v15; // s2
  int v16; // r1
  Vec2 positionOffset; // [sp+8h] [bp-C8h] BYREF
  Vec2 a3; // [sp+10h] [bp-C0h] BYREF
  TileCheck_Result v19; // [sp+18h] [bp-B8h] BYREF
  int v20; // [sp+44h] [bp-8Ch] BYREF
  int v21; // [sp+48h] [bp-88h] BYREF
  float v22[3]; // [sp+4Ch] [bp-84h] BYREF
  TileCheck v23; // [sp+58h] [bp-78h] BYREF
  TileCheck_Param v24; // [sp+A4h] [bp-2Ch] BYREF

  v2 = FIELD_F32(a1, 108);
  result = dword_60CC6484;
  if ( (float)(FIELD_F32(dword_60CC6484, 112) + -64.0) < v2 && v2 < (float)(FIELD_F32(dword_60CC6484, 120) + 64.0) )
  {
    result = FIELD_U32(a1, 7004);
    if ( result == 1 )
    {
      v4 = FIELD_F32(a1, 112);
      v5 = FIELD_F32(a1, 116);
      v22[0] = v2;
      v22[1] = v4 + -16.0;
      v22[2] = v5;
      ((void (__fastcall *)(int *, int *, float *, _DWORD))checkLiquidCollisions)(
        &v20,
        &v21,
        v22,
        FIELD_U8(a1, 86));
      v6 = (_DWORD *)(a1 + 7064);
      result = FIELD_U32(a1, 7064);
      switch ( result )
      {
        case 0:
          result = v20 - 3;
          if ( (unsigned int)(v20 - 3) <= 1 )
          {
            *(_DWORD *)&v23.field_0 = FIELD_U32(a1, 108);
            v23.field_4 = v21;
            TileMgr_splashRelated(TileMgr_instance, &v23, 14);
            if ( (FIELD_U8(a1, 2872) & 1) == 0 )
            {
              v7 = FIELD_U32(a1, 116);
              *(_DWORD *)&v23.field_0 = FIELD_U32(a1, 108);
              v23.field_4 = v21;
              v23.field_8 = v7;
              EffectData_create(1107, (Vec3 *)&v23, 0, 0);
            }
            *v6 = 1;
            v19.field_C = 0;
            v19.field_10 = 0;
            v8 = FIELD_F32(a1, 112);
            v9 = FIELD_F32(a1, 108);
            *(_WORD *)&v24.field_0 = 0;
            positionOffset.x = v9;
            a3.x = v9;
            positionOffset.y = v8;
            a3.y = v8 + -64.0;
            v24.field_2 = FIELD_U8(a1, 86);
            v24.field_3 = FIELD_U8(a1, 87);
            v24.field_4 = 0;
            v24.field_8 = 0;
            v10 = TileCheck_ctor(&v23, &v24);
            result = TileCheck_check(v10, &v19, &a3, &positionOffset, 15);
            if ( result == 1 )
            {
              result = v19.field_1C & 0xF;
              if ( result == 1 )
              {
                result = 7068;
                FIELD_U8(a1, 7068) = 1;
              }
            }
          }
          break;
        case 1:
          if ( FIELD_U8(a1, 7068) )
          {
            if ( FIELD_F32(a1, 112) <= (float)(*(float *)&v21 + -16.0) )
            {
              v11 = FIELD_F32(a1, 124) * 0.5;
              FIELD_F32(a1, 124) = v11;
              if ( v11 < -0.45 )
                FIELD_U32(a1, 124) = -1092196762;
            }
          }
          result = FIELD_U8(a1, 2872);
          if ( (result & 1) != 0 )
          {
            if ( FIELD_F32(a1, 112) <= *(float *)&v21 )
              FIELD_U32(a1, 124) = -1092196762;
            *v6 = 2;
            result = 2;
          }
          break;
        case 2:
          if ( (FIELD_U8(a1, 2872) & 1) != 0 )
          {
            result = a1 + 6024;
            v14 = FIELD_F32(a1, 6024);
            if ( v14 >= 0.1 || v14 <= -0.1 )
            {
              result = FIELD_U8(dword_60C99DD4, 1052);
              if ( (result & 0x3F) == 0 )
              {
                if ( v14 >= 0.1 )
                  v15 = 24.0;
                else
                  v15 = -24.0;
                v16 = FIELD_U32(a1, 112);
                *(float *)&v23.field_0 = FIELD_F32(a1, 108) + v15;
                v23.field_4 = v16;
                result = TileMgr_splashRelated(TileMgr_instance, &v23, 24);
              }
            }
          }
          else
          {
            v12 = FIELD_S32(a1, 112);
            if ( *(float *)&v12 <= *(float *)&v21 )
            {
              FIELD_U32(a1, 124) = -1092196762;
              FIELD_U32(a1, 100) = 0;
            }
            *(_DWORD *)&v23.field_0 = FIELD_U32(a1, 108);
            v23.field_4 = v12;
            TileMgr_splashRelated(TileMgr_instance, &v23, 14);
            *v6 = 3;
            result = 3;
          }
          break;
        case 3:
          if ( FIELD_F32(a1, 112) <= *(float *)&v21 )
          {
            FIELD_U32(a1, 124) = -1092196762;
            result = 0;
            FIELD_U32(a1, 100) = 0;
          }
          else
          {
            result = FIELD_U32(a1, 7004) | 2;
            v13 = -0.1875;
            if ( result != 2 )
              v13 = -0.1875 + -0.1875;
            FIELD_F32(a1, 100) = v13;
          }
          break;
        default:
          return result;
      }
    }
  }
  return result;
}
