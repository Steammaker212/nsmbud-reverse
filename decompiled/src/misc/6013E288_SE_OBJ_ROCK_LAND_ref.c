/* SE_OBJ_ROCK_LAND_ref
 * address: 0x6013E288   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ROCK_LAND_ref(int a1, int a2)
{
  StateMgr *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  int result; // r0
  float v8; // r1
  int v9; // r7
  __int64 v10; // r10
  StateBase *v11; // r0
  int v12; // r5
  float v13; // s0
  float v14; // s2
  Vec2 v15; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  v4 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C87C60 + 8))();
  if ( v6 != result )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C87C60);
    v8 = FIELD_F32(a1, 112);
    v9 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v8;
    mapPositionToScreen(&v15, &position);
    LODWORD(v10) = 0;
    BasicSoundActor2_play(v9, "SE_OBJ_ROCK_LAND", &v15.x, 0);
    v11 = StateMgr__getCurrentState(v4);
    v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
    result = (*(int (**)(void))(dword_60C87C20 + 8))();
    if ( v12 == result )
    {
      HIDWORD(v10) = 1072064102;
      FIELD_U32(a1, 132) = 0;
      FIELD_U64(a1, 120) = v10;
    }
    else
    {
      if ( FIELD_U8(a1, 6054) )
      {
        v13 = 0.85;
        v14 = 1.0;
        FIELD_U32(a1, 120) = 1062836634;
        FIELD_U32(a1, 100) = -1110651699;
      }
      else
      {
        v14 = 1.8;
        v13 = 1.5;
        FIELD_U32(a1, 120) = 1069547520;
      }
      result = 1051931443;
      FIELD_F32(a1, 124) = v14;
      FIELD_U32(a1, 132) = 1051931443;
      if ( a2 == 1 )
      {
        FIELD_F32(a1, 120) = -v13;
        FIELD_U32(a1, 132) = -1095552205;
        return -1095552205;
      }
    }
  }
  return result;
}
