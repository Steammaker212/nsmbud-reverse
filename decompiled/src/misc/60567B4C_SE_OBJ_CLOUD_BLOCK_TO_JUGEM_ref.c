/* SE_OBJ_CLOUD_BLOCK_TO_JUGEM_ref
 * address: 0x60567B4C   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall SE_OBJ_CLOUD_BLOCK_TO_JUGEM_ref(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  _BYTE *result; // r0
  int v5; // r0
  char v6; // r1
  int v7; // r1
  int v8; // r5
  float v9; // s18
  float v10; // r5
  float v11; // s0
  float v12; // s16
  int v14; // r1
  ActorBuildInfo v20; // [sp+0h] [bp-60h] BYREF
  Vec2 out; // [sp+30h] [bp-30h] BYREF

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (_BYTE *)(*(int (**)(void))(dword_60CAE484 + 8))();
  if ( (_BYTE *)v3 == result )
  {
    result = (_BYTE *)sub_605B4CC4(a1);
    if ( result == (_BYTE *)2 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0558);
      v5 = 3;
      v6 = 2;
    }
    else
    {
      if ( result != (_BYTE *)1 )
        return result;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0534);
      v5 = 2;
      v6 = 1;
    }
    FIELD_U8(a1, 6846) = v6;
    FIELD_U32(a1, 6864) = v5;
    v7 = FIELD_U32(a1, 112);
    v8 = Global_BasicSoundActor2;
    v20.settings1 = FIELD_U32(a1, 108);
    v20.settings2 = v7;
    mapPositionToScreen(&out, (Vec3 *)&v20);
    BasicSoundActor2_play(v8, "SE_OBJ_CLOUD_BLOCK_TO_JUGEM", &out.x, 0);
    MovementBlockCoinBase__vf150(a1);
    FIELD_U32(a1, 7404) = 4;
    v9 = FIELD_F32(a1, 112);
    v10 = FIELD_F32(a1, 108);
    v11 = sub_60007178(dword_60C7B3F8);
    memset(&v20.parentId, 0, 32);
    v12 = v11;
    _R0 = FIELD_U32(a1, 20);
    v14 = (_R0 << 12) & 0xF0000;
    _R0 <<= 20;
    __asm { UXTB16          R0, R0 }
    v20.settings1 = v14 | _R0;
    v20.settings2 = FIELD_U32(a1, 24);
    v20.profile = Profile__get(0x26Eu);
    v20.position.x = v10;
    v20.position.y = v9 + 8.0;
    v20.position.z = v12;
    *(_WORD *)&v20.field_20 = FIELD_U8(a1, 86);
    v20.eventId2 = 0;
    v20.field_28 = 0;
    return ActorMgr__create((void *)ActorMgr__instance, &v20, 0);
  }
  return result;
}
