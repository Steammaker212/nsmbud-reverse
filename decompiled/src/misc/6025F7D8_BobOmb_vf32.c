/* BobOmb_vf32
 * address: 0x6025F7D8   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf32(int a1)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  float v7; // r1
  float v8; // r1
  int v9; // r5
  int v10; // r0
  __int16 v11; // r2
  int v12; // r6
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  result = sub_602A588C(a1);
  if ( !result )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
    if ( v4 != result )
    {
      result = sub_600025B8(a1);
      if ( !result )
      {
        v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
        result = (*((int (**)(void))stru_60C8E1CC._.vtable + 2))();
        if ( v6 != result )
        {
          v7 = FIELD_F32(a1, 112);
          position.x = FIELD_F32(a1, 108);
          position.y = v7;
          position.z = 0.0;
          sub_602A38A4(a1, (int *)&position);
          v8 = FIELD_F32(a1, 112);
          v9 = Global_BasicSoundActor1;
          position.x = FIELD_F32(a1, 108);
          position.y = v8;
          mapPositionToScreen(&out, &position);
          BasicSoundActor1_playSound(v9, "SE_EMY_DOWN", (int)&out, 0);
          v10 = FIELD_U32(a1, 548);
          FIELD_U32(a1, 80) = v10;
          FIELD_U32(a1, 120) = dword_60AFE3F8[v10];
          FIELD_U32(a1, 124) = 1077936128;
          FIELD_U32(a1, 128) = 0;
          FIELD_U8(a1, 6468) = 0;
          result = a1 + 6456;
          if ( FIELD_S32(a1, 6456) <= 0 )
          {
            v11 = FIELD_U16(a1, 6364);
            if ( (v11 & 4) == 0 )
            {
              FIELD_U16(a1, 6364) = v11 | 4;
              *(_DWORD *)result = 240;
              v12 = **(_DWORD **)(FIELD_U32(a1, 6352) + 28);
              sub_6041838C((ModelAnimation *)(v12 + 4));
              AnimationCtrl_setRepeat((ModelAnimation *)(v12 + 4), 0);
              FIELD_U32(v12, 20) = 0;
              FIELD_U32(v12, 28) |= 2u;
              FIELD_U32(v12, 24) = 1065353216;
            }
            return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E274);
          }
        }
      }
    }
  }
  return result;
}
