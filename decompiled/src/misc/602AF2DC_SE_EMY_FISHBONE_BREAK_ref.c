/* SE_EMY_FISHBONE_BREAK_ref
 * address: 0x602AF2DC   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_FISHBONE_BREAK_ref(int a1)
{
  int v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r7
  StateBase *v5; // r0
  int v6; // r6
  float v7; // r1
  int v8; // r5
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v2 = 0;
  if ( !sub_602A588C(a1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() && !sub_600025B8(a1) )
    {
      sub_602A3EFC(a1 + 6844, 24, 0.0625);
      v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
      v2 = 1;
      if ( v6 == (*(int (**)(void))(dword_60C90C14 + 8))() )
      {
        v7 = FIELD_F32(a1, 112);
        v8 = Global_BasicSoundActor1;
        position.x = FIELD_F32(a1, 108);
        position.y = v7;
        mapPositionToScreen(&out, &position);
        sub_60813810(v8, (int)"SE_EMY_FISHBONE_BREAK", (int)&out, 1, 0);
        sub_602A6024(a1, FIELD_U32(a1, 80), -1, -1);
        return 2;
      }
    }
  }
  return v2;
}
