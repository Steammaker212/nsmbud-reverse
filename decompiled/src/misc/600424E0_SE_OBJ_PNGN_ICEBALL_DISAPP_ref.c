/* SE_OBJ_PNGN_ICEBALL_DISAPP_ref
 * address: 0x600424E0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICEBALL_DISAPP_ref(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  float v5; // r1
  int v6; // r5
  Vec2 v8; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60C87DEC + 8))() )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    sub_60142A48(a1);
    StateMgr__changeState(v2, (StateBase *)&dword_60C87DEC);
  }
  v5 = FIELD_F32(a1, 112);
  v6 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v5;
  mapPositionToScreen(&v8, &position);
  return BasicSoundActor2_play(v6, "SE_OBJ_PNGN_ICEBALL_DISAPP", &v8.x, 0);
}
