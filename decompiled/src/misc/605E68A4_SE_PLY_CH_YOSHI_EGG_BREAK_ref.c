/* SE_PLY_CH_YOSHI_EGG_BREAK_ref
 * address: 0x605E68A4   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_PLY_CH_YOSHI_EGG_BREAK_ref(int a1)
{
  _DWORD *v2; // r7
  int v3; // r1
  int v4; // r5
  TileCheck *v5; // r0
  float v6; // r1
  float v7; // s0
  StateMethodExecuter *result; // r0
  Vec2 positionOffset; // [sp+8h] [bp-A0h] BYREF
  Vec2 a3; // [sp+10h] [bp-98h] BYREF
  TileCheck_Result out; // [sp+18h] [bp-90h] BYREF
  TileCheck position; // [sp+44h] [bp-64h] BYREF

  v2 = (_DWORD *)(a1 + 6260);
  if ( !FIELD_U32(a1, 6260) )
  {
    v3 = FIELD_U32(a1, 112);
    v4 = Global_BasicSoundActor2;
    *(_DWORD *)&position.field_0 = FIELD_U32(a1, 108);
    position.field_4 = v3;
    mapPositionToScreen((Vec2 *)&out, (Vec3 *)&position);
    BasicSoundActor2_play(v4, "SE_PLY_CH_YOSHI_EGG_BREAK", (float *)&out.field_0, 0);
    ++*v2;
  }
  if ( FIELD_U8(a1, 6272) )
  {
    v5 = sub_6015D0AC(&position);
    out.field_C = 0;
    out.field_10 = 0;
    v6 = FIELD_F32(a1, 112);
    positionOffset.x = FIELD_F32(a1, 108);
    positionOffset.y = v6;
    a3.x = positionOffset.x + -80.0;
    a3.y = v6;
    if ( TileCheck_check(v5, &out, &a3, &positionOffset, 1) == 1 )
    {
      a3.x = out.field_4 + -8.0;
      FIELD_F32(a1, 108) = out.field_4 + -8.0;
    }
    a3.y = a3.y + 32.0;
    if ( TileCheck_check(&position, &out, &a3, &positionOffset, 8) == 1 )
      FIELD_F32(a1, 112) = out.field_8;
    FIELD_U8(a1, 6272) = 0;
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v7);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  result = (StateMethodExecuter *)*(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 28);
  if ( ((unsigned __int8)result & 0x20) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB1BAC);
  return result;
}
