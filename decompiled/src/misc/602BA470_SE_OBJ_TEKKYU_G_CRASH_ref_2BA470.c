/* SE_OBJ_TEKKYU_G_CRASH_ref_2BA470
 * address: 0x602BA470   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_TEKKYU_G_CRASH_ref_2BA470(int a1)
{
  unsigned int v2; // r1
  int v3; // r0
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r6
  float v7; // r1
  int v8; // r6
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  if ( !FIELD_U32(a1, 6652) )
  {
    sub_602A3EFC(a1 + 6628, 24, 0.0625);
    v2 = FIELD_U32(a1, 6356);
    if ( v2 )
    {
      v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
      v4 = v3;
      if ( v3 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v6 == (*(int (**)(void))(dword_60C87C00 + 8))() )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 104))(v4);
          FIELD_U8(v4, 19) = 1;
          v7 = FIELD_F32(v4, 112);
          v8 = Global_BasicSoundActor1;
          position.x = FIELD_F32(v4, 108);
          position.y = v7;
          mapPositionToScreen(&out, &position);
          sub_60813810(v8, (int)"SE_OBJ_TEKKYU_G_CRASH", (int)&out, 1, 0);
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91094);
        }
      }
    }
    FIELD_U32(a1, 124) = 1077936128;
    EffectData_init((EffectData *)(a1 + 6436));
    EffectData_init((EffectData *)(a1 + 6500));
    EffectData_init((EffectData *)(a1 + 6564));
  }
  return 1;
}
