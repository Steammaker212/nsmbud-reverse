/* SE_PLY_YOSHI_EGG_APPEAR_ref_3
 * address: 0x605B5588   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall SE_PLY_YOSHI_EGG_APPEAR_ref_3(int a1, int a2, int a3)
{
  _BYTE *result; // r0
  int v7; // r10
  int v8; // r4
  float v9; // r8
  Vec3 *p_position; // r2
  _BYTE *v11; // r11
  _BYTE *v12; // r5
  ActorBuildInfo *v13; // r6
  int v14; // r7
  int v15; // r7
  int v16; // r5
  int v17; // [sp+4h] [bp-84h]
  _BYTE *v18; // [sp+8h] [bp-80h]
  int v19; // [sp+24h] [bp-64h]
  int v20; // [sp+28h] [bp-60h]
  int position; // [sp+30h] [bp-58h] BYREF
  _DWORD position_4[10]; // [sp+34h] [bp-54h] BYREF
  Vec2 out; // [sp+5Ch] [bp-2Ch] BYREF

  result = (_BYTE *)sub_60465D48();
  v7 = (int)&result[1 - a3];
  if ( v7 >= 1 )
  {
    v18 = result;
    v8 = FIELD_U32(a1, 108);
    v9 = FIELD_F32(a1, 112);
    v17 = a3;
    if ( a2 == 2 )
      v9 = v9 + 16.0;
    p_position = (Vec3 *)&position;
    v11 = 0;
    v19 = FIELD_U32(a1, 116);
    v20 = 16 * a2;
    result = 0;
    do
    {
      v12 = result;
      position = v8;
      *(float *)position_4 = v9;
      v13 = (ActorBuildInfo *)p_position;
      v14 = Global_BasicSoundActor2;
      mapPositionToScreen(&out, p_position);
      BasicSoundActor2_play(v14, "SE_PLY_YOSHI_EGG_APPEAR", &out.x, 0);
      memset(position_4, 0, sizeof(position_4));
      position = v20 | (dword_60AF2614[(_DWORD)v11] << 28) | (dword_60AF28C4[(_DWORD)v11] << 31) | 0x1000000;
      position_4[2] = Profile__get(0x32Bu);
      position_4[3] = v8;
      *(float *)&position_4[4] = v9;
      position_4[5] = v19;
      LOWORD(position_4[7]) = 0;
      BYTE2(position_4[7]) = 0;
      position_4[9] = 0;
      ActorMgr__create((void *)ActorMgr__instance, v13, 1);
      result = v12 + 1;
      p_position = (Vec3 *)v13;
      v11 = v12;
    }
    while ( (_BYTE *)v7 != v12 + 1 );
    v15 = v17;
    if ( v17 >= 1 )
    {
      do
      {
        position = v8;
        *(float *)position_4 = v9;
        v16 = Global_BasicSoundActor2;
        mapPositionToScreen(&out, p_position);
        BasicSoundActor2_play(v16, "SE_PLY_YOSHI_EGG_APPEAR", &out.x, 0);
        memset(position_4, 0, sizeof(position_4));
        position = v20
                 | (dword_60AF2614[(_DWORD)v18 - v15 + 1] << 28)
                 | (dword_60AF28C4[(_DWORD)v18 - v15 + 1] << 31)
                 | 0x1002000;
        position_4[2] = Profile__get(0x32Bu);
        position_4[3] = v8;
        *(float *)&position_4[4] = v9;
        position_4[5] = v19;
        LOWORD(position_4[7]) = 0;
        BYTE2(position_4[7]) = 0;
        position_4[9] = 0;
        result = ActorMgr__create((void *)ActorMgr__instance, v13, 1);
        p_position = (Vec3 *)v13;
        --v15;
      }
      while ( v15 );
    }
  }
  return result;
}
