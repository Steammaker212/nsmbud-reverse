/* SE_EMY_BASABASA_SING_ref
 * address: 0x60250B48   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BASABASA_SING_ref(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  int result; // r0
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r5
  float v9; // r1
  int v10; // r5
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  sub_602A3EFC(a1 + 12140, 32);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C8DDF8 + 8))();
  if ( v3 != result )
  {
    FIELD_U8(a1, 12124) = 1;
    FIELD_U32(a1, 12128) = FIELD_U32(a1, 108);
    FIELD_U32(a1, 12132) = FIELD_U32(a1, 112);
    FIELD_U32(a1, 12136) = FIELD_U32(a1, 116);
    v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    if ( v6 == (*(int (**)(void))(dword_60C8DE18 + 8))()
      || (v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
          v8 == (*(int (**)(void))(dword_60C8DE38 + 8))()) )
    {
      FIELD_U32(a1, 156) = -1073741824;
    }
    v9 = FIELD_F32(a1, 112);
    v10 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v9;
    mapPositionToScreen(&out, &position);
    sub_60813810(v10, (int)"SE_EMY_BASABASA_SING", (int)&out, 0, 0);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DDF8);
    return sub_6024EE5C(a1);
  }
  return result;
}
