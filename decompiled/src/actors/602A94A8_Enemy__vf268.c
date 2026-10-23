/* Enemy__vf268
 * address: 0x602A94A8   size: 348   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60278620 : Fuzzy
//   - 0x60078D14 : FinalBowser
//   - 0x60310028 : Kanibo
int __fastcall Enemy__vf268(Enemy *a1)
{
  int v2; // r7
  EnemyFreezeMgr *freezeMgr; // r0
  int v4; // r5
  float y; // r1
  int result; // r0
  float v7; // r1
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v2 = FIELD_U32(a1, 0x1808).field_4A;
  freezeMgr = &FIELD_U32(a1, 0x1808);
  if ( FIELD_U32(a1, 0x1808).field_4A )
  {
    sub_602F428C((int)freezeMgr);
    v4 = Global_BasicSoundActor2;
    if ( HIBYTE(FIELD_U32(a1, 0x1808).field_46) )
    {
      y = FIELD_U32(a1, 0x0)._._.position.y;
      position.x = FIELD_U32(a1, 0x0)._._.position.x;
      position.y = y;
      mapPositionToScreen(&out, &position);
      result = sub_60813BDC(v4, "SE_OBJ_PNGN_ICE_BREAK", &out, 1, 0);
      if ( v2 == 3 )
        return sub_602A74C0((int)a1);
    }
    else
    {
      v7 = FIELD_U32(a1, 0x0)._._.position.y;
      position.x = FIELD_U32(a1, 0x0)._._.position.x;
      position.y = v7;
      mapPositionToScreen(&out, &position);
      result = BasicSoundActor2_play(v4, "SE_OBJ_PNGN_ICE_BREAK", &out.x, 0);
      if ( v2 == 3 )
        return sub_602A74C0((int)a1);
    }
    if ( v2 == 1 )
      return (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 0x160))(a1);
  }
  else
  {
    result = sub_602F3978((unsigned __int8 *)freezeMgr);
    if ( result == 3 )
    {
      if ( LOBYTE(FIELD_U32(a1, 0x1808).field_46) )
        BYTE1(FIELD_U32(a1, 0x0)._.field_17A8) = 4;
      (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 216))(a1);
      (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 220))(a1);
      return (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 76))(a1);
    }
  }
  return result;
}
