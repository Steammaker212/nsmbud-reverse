/* SE_OBJ_CMN_TOUCH_QUAKE_LV_ref_692B38
 * address: 0x60692B38   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_TOUCH_QUAKE_LV_ref_692B38(int a1)
{
  int v2; // r0
  char *v3; // r5
  char v4; // r1
  int v5; // r0
  int v6; // r6
  int *v7; // r5
  int v8; // r10
  float v9; // r1
  int *v10; // r9
  float v11; // s0
  float v12; // s2
  float v13; // s6
  int v14; // r2
  float v15; // s4
  int v16; // r0
  int v17; // r0
  int v18; // r1
  int v19; // r2
  ColliderBase *v20; // r5
  Vec2 out; // [sp+4h] [bp-5Ch] BYREF
  Vec3 position; // [sp+Ch] [bp-54h] BYREF
  float v24; // [sp+18h] [bp-48h]
  int v25; // [sp+1Ch] [bp-44h]
  int v26; // [sp+20h] [bp-40h]
  int v27; // [sp+24h] [bp-3Ch]
  float v28; // [sp+28h] [bp-38h]
  int v29; // [sp+2Ch] [bp-34h]
  int v30; // [sp+30h] [bp-30h]
  int v31; // [sp+34h] [bp-2Ch]
  int v32; // [sp+38h] [bp-28h]

  v3 = (char *)(a1 + 7621);
  v2 = FIELD_U8(a1, 7621);
  if ( v2 )
  {
    v4 = --v2;
  }
  else
  {
    v4 = 60;
    if ( !FIELD_U8(a1, 7620) )
    {
      v4 = 0;
      goto LABEL_6;
    }
  }
  *v3 = v4;
  if ( v2 )
  {
    sub_606C12E0(a1);
    v4 = *v3;
  }
LABEL_6:
  if ( v4 )
  {
    v5 = FIELD_U32(dword_60C99DD4, 1052);
    FIELD_F32(a1, 7612) = (float)(*(float *)((char *)sinLutTable + ((v5 << 8) & 0xF00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v5 << 8) & 0xF00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    FIELD_F32(a1, 7616) = (float)(*(float *)((char *)sinLutTable + ((v5 << 9) & 0xE00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v5 << 9) & 0xE00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    v6 = Global_BasicSoundActor2;
    v7 = (int *)(a1 + 108);
    v8 = FIELD_U32(a1, 8);
    v10 = (int *)(a1 + 112);
    v9 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v9;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v6, "SE_OBJ_CMN_TOUCH_QUAKE_LV", v8, &out, 0);
    v11 = FIELD_F32(a1, 7616);
    v12 = FIELD_F32(a1, 7612);
  }
  else
  {
    v11 = 0.0;
    v7 = (int *)(a1 + 108);
    v10 = (int *)(a1 + 112);
    FIELD_U32(a1, 7612) = 0;
    FIELD_U32(a1, 7616) = 0;
    v12 = 0.0;
  }
  v13 = FIELD_F32(a1, 108);
  v14 = (int)(float)((float)(v13 - FIELD_F32(a1, 584)) * 10000000.0) + FIELD_U32(a1, 6120);
  FIELD_U32(a1, 6120) = v14;
  v15 = FIELD_F32(a1, 112);
  v16 = FIELD_U32(a1, 116);
  position.x = 1.0;
  position.y = 0.0;
  position.z = 0.0;
  v25 = 0;
  v26 = 1065353216;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 1065353216;
  v24 = v13 + v12;
  v28 = v15 + v11;
  v32 = v16;
  sub_60693478(a1 + 6124, &position, v14);
  if ( ((int (__fastcall *)(int, int *))loc_6069B070)(a1 + 7560, v7) )
  {
    v17 = FIELD_U32(a1, 116);
    v18 = *v10;
    v19 = *v7;
    FIELD_U32(a1, 584) = *v7;
    FIELD_U32(a1, 588) = v18;
    FIELD_U32(a1, 592) = v17;
    FIELD_U32(a1, 608) = v19;
    FIELD_U32(a1, 612) = v18;
    FIELD_U32(a1, 616) = v17;
    v20 = (ColliderBase *)(a1 + 6904);
    sub_60160948((_DWORD *)(a1 + 6904));
  }
  else
  {
    v20 = (ColliderBase *)(a1 + 6904);
  }
  ShapedCollider_execute(v20);
  FIELD_U8(a1, 7620) = 0;
  return 7620;
}
