/* DryBones__damageFromUnder
 * address: 0x60316828   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A1E1C
// 
// Overridden by: None
int __fastcall DryBones__damageFromUnder(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int result; // r0
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  float v10; // r1
  int v11; // r6
  float v12; // r1
  const char *v13; // r1
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C9345C + 8))();
  if ( v4 != result )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    result = (*(int (**)(void))(dword_60C9347C + 8))();
    if ( v7 != result )
    {
      v8 = StateMgr__getCurrentState(v2);
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      result = (*(int (**)(void))(dword_60C9349C + 8))();
      if ( v9 != result )
      {
        v10 = FIELD_F32(a1, 112);
        position.x = FIELD_F32(a1, 108);
        position.y = v10;
        position.z = 0.0;
        sub_602A38A4(a1, &position.x);
        v11 = Global_BasicSoundActor1;
        v12 = FIELD_F32(a1, 112);
        if ( FIELD_U16(a1, 7642) == 1 )
        {
          position.x = FIELD_F32(a1, 108);
          position.y = v12;
          mapPositionToScreen(&out, &position);
          v13 = "SE_EMY_BIG_KALON";
        }
        else
        {
          position.x = FIELD_F32(a1, 108);
          position.y = v12;
          mapPositionToScreen(&out, &position);
          v13 = "SE_EMY_KALON";
        }
        BasicSoundActor1_playSound(v11, v13, (int)&out, 0);
        FIELD_U32(a1, 7620) = StateMgr__getCurrentState(v2);
        FIELD_U8(a1, 7664) = 0;
        FIELD_U8(a1, 7661) = 0;
        FIELD_U8(a1, 7674) = 1;
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9345C);
      }
    }
  }
  return result;
}
