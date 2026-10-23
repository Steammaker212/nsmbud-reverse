/* SE_OBJ_STONE_LAND_ref
 * address: 0x606CB594   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_STONE_LAND_ref(int a1)
{
  _BYTE *v2; // r0
  char v3; // r1
  int v4; // t1
  char v5; // r1
  int v6; // r0
  float v7; // r1
  int v8; // r6
  int v9; // r5
  float v10; // r1
  int v11; // r5
  Vec3 position; // [sp+4h] [bp-34h] BYREF
  Vec2 v14; // [sp+10h] [bp-28h] BYREF
  Vec3 out[2]; // [sp+18h] [bp-20h] BYREF

  v4 = FIELD_U8(a1, 6621);
  v2 = (_BYTE *)(a1 + 6621);
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    *v2 = v5;
    if ( !v5 )
      goto LABEL_7;
LABEL_6:
    v6 = FIELD_U32(dword_60C99DD4, 1052);
    FIELD_F32(a1, 6612) = (float)(*(float *)((char *)sinLutTable + ((v6 << 8) & 0xF00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v6 << 8) & 0xF00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    FIELD_F32(a1, 6616) = (float)(*(float *)((char *)sinLutTable + ((v6 << 9) & 0xE00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v6 << 9) & 0xE00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    v7 = FIELD_F32(a1, 112);
    v8 = FIELD_U32(a1, 8);
    v9 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v7;
    mapPositionToScreen((Vec2 *)out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v9, "SE_OBJ_CMN_TOUCH_QUAKE_LV", v8, out, 0);
    goto LABEL_8;
  }
  if ( FIELD_U8(a1, 6620) )
  {
    *v2 = 32;
    goto LABEL_6;
  }
LABEL_7:
  FIELD_U32(a1, 6612) = 0;
  FIELD_U32(a1, 6616) = 0;
LABEL_8:
  if ( FIELD_U8(a1, 6186) )
  {
    LODWORD(position.x) = 15;
    LODWORD(position.y) = unk_60C2639C;
    LOBYTE(position.z) = 0;
    v10 = FIELD_F32(a1, 112);
    v11 = Global_BasicSoundActor2;
    out[0].x = FIELD_F32(a1, 108);
    out[0].y = v10;
    mapPositionToScreen(&v14, out);
    BasicSoundActor2_play(v11, "SE_OBJ_STONE_LAND", &v14.x, (int)&position);
  }
  sub_606CB408(a1);
  FIELD_U8(a1, 6620) = 0;
  return 6620;
}
