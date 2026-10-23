/* SE_OBJ_ROULETTE_BLOCK_ROLL_ref
 * address: 0x606D3B18   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SE_OBJ_ROULETTE_BLOCK_ROLL_ref(int a1)
{
  _DWORD *result; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r2
  StateBase *CurrentState; // r0
  int v7; // r5
  float v8; // r1
  int v9; // r5
  Vec2 v10; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  result = *(_DWORD **)(a1 + 7440);
  if ( !result )
  {
    result = (_DWORD *)(a1 + 7408);
    v3 = FIELD_U32(a1, 7408);
    if ( v3 )
    {
      *result = v3 - 1;
    }
    else
    {
      *result = 9;
      v4 = (FIELD_U8(a1, 7412) + 1) & 3;
      FIELD_U8(a1, 7412) = v4;
      v5 = FIELD_U32(a1, 7396);
      FIELD_U32(v5, 20) = dword_60B08D5C[v4 & 0xFFFFFFE3 | (4 * (FIELD_U32(a1, 24) & 7))];
      FIELD_U32(v5, 28) |= 2u;
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (_DWORD *)(*(int (**)(void))(dword_60CAE2F8 + 8))();
      if ( (_DWORD *)v7 == result )
      {
        v8 = FIELD_F32(a1, 112);
        v9 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v8;
        mapPositionToScreen(&v10, &position);
        return (_DWORD *)BasicSoundActor2_play(v9, "SE_OBJ_ROULETTE_BLOCK_ROLL", &v10.x, 0);
      }
    }
  }
  return result;
}
