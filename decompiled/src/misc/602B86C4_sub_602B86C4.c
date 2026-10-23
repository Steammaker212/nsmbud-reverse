/* sub_602B86C4
 * address: 0x602B86C4   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B86C4(int a1, float *a2, int a3)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v8; // r7
  int v9; // r0
  bool v10; // zf
  const char *v11; // r8
  int v12; // r9
  float v13; // r1
  float v14; // r2
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  result = a3 | 1;
  if ( (a3 | 1) == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v9 = (*(int (**)(void))(dword_60C90F5C + 8))();
    v10 = a3 == 1;
    if ( a3 == 1 )
      v10 = v8 == v9;
    v11 = (const char *)dword_60C90FB0[3 * a3 + 23];
    v12 = Global_BasicSoundActor2;
    v13 = a2[1];
    position.x = *a2;
    position.y = v13;
    if ( v10 )
    {
      mapPositionToScreen(&out, &position);
      sub_60813BDC(v12, v11, &out, 1, 0);
    }
    else
    {
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v12, v11, &out.x, 0);
    }
    createWaterSplash((sead_ListNode *)dword_60C99CDC);
    v14 = a2[1];
    position.x = *a2;
    position.y = v14;
    return TileMgr_splashRelated(TileMgr_instance, &position, dword_60C90FB0[3 * a3 + 22]);
  }
  return result;
}
