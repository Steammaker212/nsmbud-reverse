/* SE_OBJ_COIN_POP_UP_S_ref
 * address: 0x606B2578   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_COIN_POP_UP_S_ref(int a1)
{
  int v2; // r0
  int v3; // r5
  float v4; // r1
  int *v5; // r1
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 72) + FIELD_U32(a1, 68);
  FIELD_U32(a1, 72) = v2;
  if ( FIELD_U8(a1, 60) == 1 )
  {
    if ( v2 > 0 )
      return ((int (__fastcall *)(int))loc_606B2C4C)(a1);
  }
  else if ( FIELD_U8(a1, 60) || v2 < 0 )
  {
    return ((int (__fastcall *)(int))loc_606B2C4C)(a1);
  }
  FIELD_U32(a1, 72) = 0;
  if ( !FIELD_U8(a1, 65) && (FIELD_U8(a1, 64) & 1) != 0 && FIELD_S32(a1, 44) >= 1 )
  {
    v3 = Global_BasicSoundActor2;
    v4 = FIELD_F32(a1, 4);
    position.x = *(float *)a1;
    position.y = v4;
    mapPositionToScreen(&v7, &position);
    BasicSoundActor2_play(v3, "SE_OBJ_COIN_POP_UP_S", &v7.x, 0);
  }
  SE_OBJ_BLOCK_POP_UP_ref(a1);
  if ( FIELD_U32(a1, 48) )
    v5 = &dword_60CBA34C;
  else
    v5 = &dword_60CBA2EC;
  StateMgr__changeState((StateMgr *)(a1 + 196), (StateBase *)v5);
  return ((int (__fastcall *)(_DWORD))loc_606B2C4C)(a1);
}
