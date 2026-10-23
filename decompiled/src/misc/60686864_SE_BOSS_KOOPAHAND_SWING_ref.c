/* SE_BOSS_KOOPAHAND_SWING_ref
 * address: 0x60686864   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall SE_BOSS_KOOPAHAND_SWING_ref(int a1)
{
  _BYTE *result; // r0
  int v3; // r2
  int v4; // t1
  _DWORD *v5; // r3
  int *v6; // r1
  unsigned int v7; // r6
  unsigned int v8; // r3
  int v9; // r1
  float v10; // s0
  int v11; // r5
  int v12; // r6
  float v13; // r0
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v4 = FIELD_U8(a1, 7658);
  result = (_BYTE *)(a1 + 7658);
  v3 = v4;
  v5 = *(_DWORD **)(result - 1546);
  v6 = (int *)v5[3];
  v7 = v5[2];
  v8 = v5[17];
  if ( v7 > v8 )
    v6 += v8;
  if ( v3 == 2 )
    JUMPOUT(0x60688140);
  if ( v3 == 1 )
  {
    v9 = *v6;
    v10 = FIELD_F32(v9, 20);
    if ( (FIELD_U8(v9, 28) & 0x10) != 0 )
    {
      FIELD_U32(v9, 24) = 0;
      FIELD_U8(a1, 7657) = 1;
      *result = 2;
    }
    if ( v10 >= 195.0 )
    {
      ((void (__fastcall *)(int))loc_60688140)(a1);
      v11 = FIELD_U32(a1, 8);
      v12 = Global_BasicSoundActor2;
      v13 = FIELD_F32(a1, 7628);
      position.x = FIELD_F32(a1, 7624);
      position.y = v13;
      mapPositionToScreen(&out, &position);
      return (_BYTE *)SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v12, "SE_BOSS_KOOPAHAND_SWING", v11, &out, 0);
    }
  }
  return result;
}
