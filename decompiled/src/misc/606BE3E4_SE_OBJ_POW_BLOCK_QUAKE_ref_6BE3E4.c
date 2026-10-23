/* SE_OBJ_POW_BLOCK_QUAKE_ref_6BE3E4
 * address: 0x606BE3E4   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_POW_BLOCK_QUAKE_ref_6BE3E4(int a1, int a2)
{
  int v3; // r6
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r7
  float v7; // r1
  int v8; // r7
  _DWORD v10[2]; // [sp+4h] [bp-3Ch] BYREF
  char v11; // [sp+Ch] [bp-34h]
  Vec2 out; // [sp+10h] [bp-30h] BYREF
  Vec3 position; // [sp+18h] [bp-28h] BYREF

  v3 = 0;
  v4 = FIELD_U32(a2, 144);
  if ( v4 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 != (*(int (**)(void))(dword_60CBA6CC + 8))() )
    {
      v10[0] = 15;
      v10[1] = unk_60C26434;
      v11 = 0;
      v7 = FIELD_F32(v4, 112);
      v8 = Global_BasicSoundActor2;
      position.x = FIELD_F32(v4, 108);
      position.y = v7;
      mapPositionToScreen(&out, &position);
      v3 = 1;
      sub_60813BDC(v8, "SE_OBJ_POW_BLOCK_QUAKE", &out, 1, v10);
      StateMgr__changeState((StateMgr *)(v4 + 6084), (StateBase *)&dword_60CBA6CC);
      FIELD_U8(a2, 220) = 1;
    }
  }
  return v3;
}
