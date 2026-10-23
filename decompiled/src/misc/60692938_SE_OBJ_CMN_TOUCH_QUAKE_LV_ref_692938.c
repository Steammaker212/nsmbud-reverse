/* SE_OBJ_CMN_TOUCH_QUAKE_LV_ref_692938
 * address: 0x60692938   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_TOUCH_QUAKE_LV_ref_692938(int a1)
{
  int v2; // r0
  int v3; // r6
  int *v4; // r5
  int v5; // r11
  float v6; // r1
  int *v7; // r9
  float v8; // s0
  float v9; // s2
  float v10; // s4
  float v11; // s6
  int v12; // r0
  int result; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r2
  Vec3 position; // [sp+4h] [bp-5Ch] BYREF
  float v18; // [sp+10h] [bp-50h]
  int v19; // [sp+14h] [bp-4Ch]
  int v20; // [sp+18h] [bp-48h]
  int v21; // [sp+1Ch] [bp-44h]
  float v22; // [sp+20h] [bp-40h]
  int v23; // [sp+24h] [bp-3Ch]
  int v24; // [sp+28h] [bp-38h]
  int v25; // [sp+2Ch] [bp-34h]
  int v26; // [sp+30h] [bp-30h]
  Vec2 out; // [sp+34h] [bp-2Ch] BYREF

  FIELD_U8(a1, 7620) = 0;
  if ( FIELD_U8(a1, 7621) )
  {
    v2 = FIELD_U32(dword_60C99DD4, 1052);
    FIELD_F32(a1, 7612) = (float)(*(float *)((char *)sinLutTable + ((v2 << 8) & 0xF00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v2 << 8) & 0xF00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    FIELD_F32(a1, 7616) = (float)(*(float *)((char *)sinLutTable + ((v2 << 9) & 0xE00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v2 << 9) & 0xE00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    v3 = Global_BasicSoundActor2;
    v4 = (int *)(a1 + 108);
    v5 = FIELD_U32(a1, 8);
    v7 = (int *)(a1 + 112);
    v6 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v3, "SE_OBJ_CMN_TOUCH_QUAKE_LV", v5, &out, 0);
    v8 = FIELD_F32(a1, 7616);
    v9 = FIELD_F32(a1, 7612);
  }
  else
  {
    v8 = 0.0;
    v4 = (int *)(a1 + 108);
    v7 = (int *)(a1 + 112);
    FIELD_U32(a1, 7612) = 0;
    FIELD_U32(a1, 7616) = 0;
    v9 = 0.0;
  }
  v10 = FIELD_F32(a1, 112);
  v11 = FIELD_F32(a1, 108);
  v12 = FIELD_U32(a1, 116);
  position.x = 1.0;
  position.y = 0.0;
  position.z = 0.0;
  v19 = 0;
  v20 = 1065353216;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 1065353216;
  v18 = v11 + v9;
  v22 = v10 + v8;
  v26 = v12;
  sub_60693478(a1 + 6124, &position, FIELD_U32(a1, 6120));
  result = sub_6069AFA0(a1 + 7560, v4, a1 + 492, a1 + 7604, a1 + 6904);
  if ( result == 1 )
  {
    v14 = FIELD_U32(a1, 116);
    v15 = *v7;
    v16 = *v4;
    FIELD_U32(a1, 584) = *v4;
    FIELD_U32(a1, 588) = v15;
    FIELD_U32(a1, 592) = v14;
    FIELD_U32(a1, 608) = v16;
    FIELD_U32(a1, 612) = v15;
    FIELD_U32(a1, 616) = v14;
    return sub_60160948((_DWORD *)(a1 + 6904));
  }
  return result;
}
