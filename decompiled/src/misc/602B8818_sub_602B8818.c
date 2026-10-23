/* sub_602B8818
 * address: 0x602B8818   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B8818(int a1, float *a2)
{
  StateBase *CurrentState; // r0
  int v4; // r6
  const char *v5; // r7
  float v6; // r1
  float v7; // r2
  Vec2 v9; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  (*((void (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  (*(void (**)(void))(dword_60C90F5C + 8))();
  v4 = Global_BasicSoundActor2;
  v5 = (const char *)dword_60C9100C;
  v6 = a2[1];
  position.x = *a2;
  position.y = v6;
  mapPositionToScreen(&v9, &position);
  BasicSoundActor2_play(v4, v5, &v9.x, 0);
  createWaterSplash((sead_ListNode *)dword_60C99CDC);
  v7 = a2[1];
  position.x = *a2;
  position.y = v7;
  return TileMgr_splashRelated(TileMgr_instance, &position, dword_60C91008);
}
