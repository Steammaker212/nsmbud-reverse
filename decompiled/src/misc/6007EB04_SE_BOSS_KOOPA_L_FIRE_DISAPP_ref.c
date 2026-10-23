/* SE_BOSS_KOOPA_L_FIRE_DISAPP_ref
 * address: 0x6007EB04   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPA_L_FIRE_DISAPP_ref(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r7
  float v7; // r1
  Vec2 v9; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60C81924 & ~(1611131680 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C81924) )
  {
    dword_60C81920 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C81924);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C81920) == 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v4 = 1;
      if ( v6 != (*(int (**)(void))(dword_60C818E8 + 8))() )
      {
        v7 = FIELD_F32(v3, 112);
        position.x = FIELD_F32(v3, 108);
        position.y = v7;
        mapPositionToScreen(&v9, &position);
        sub_60813570(v3 + 6668, "SE_BOSS_KOOPA_L_FIRE_DISAPP", &v9, 0);
        StateMgr__changeState((StateMgr *)(v3 + 6084), (StateBase *)&dword_60C818E8);
      }
    }
  }
  return v4;
}
