/* SE_BOSS_KOOPA_FIRE_DISAPP_ref_CC680
 * address: 0x600CC680   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPA_FIRE_DISAPP_ref_CC680(int result, _DWORD *a2)
{
  int v2; // r7
  int v3; // r9
  int v5; // r6
  bool v6; // zf
  StateBase *CurrentState; // r0
  int v8; // r4
  char v9; // r12
  StateBase *v10; // r0
  int v11; // r4
  int v12; // r4
  float v13; // r5
  float v14; // r7
  float v15; // s0
  int v16; // r0
  float v17; // r1
  int v18; // r4
  Vec3 v19; // [sp+4h] [bp-3Ch] BYREF
  Vec2 out; // [sp+10h] [bp-30h] BYREF
  Vec3 position; // [sp+18h] [bp-28h] BYREF

  v3 = result;
  v5 = FIELD_U32(result, 64);
  v6 = v5 == 0;
  if ( v5 )
  {
    v2 = a2[16];
    v6 = v2 == 0;
  }
  if ( !v6 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v8 == (*(int (**)(void))(dword_60C8403C + 8))() )
    {
LABEL_10:
      result = FIELD_U8(v3, 110) | 2;
      FIELD_U8(v3, 110) = result;
      return result;
    }
    if ( (a2[35] | 1) == 3 )
    {
      v10 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
      v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
      if ( v11 != (*(int (**)(void))(dword_60C8403C + 8))() )
      {
        v12 = a2[35];
        v13 = FIELD_F32(v5, 108);
        v14 = FIELD_F32(v5, 112);
        v15 = sub_600024C4(v5);
        v16 = 957;
        v19.x = v13;
        v19.y = v14;
        v19.z = v15;
        if ( v12 == 2 )
          v16 = 1094;
        EffectData_create(v16, &v19, 0, (int)&dword_60C84078);
        v17 = FIELD_F32(v5, 112);
        v18 = Global_BasicSoundActor2;
        position.x = FIELD_F32(v5, 108);
        position.y = v17;
        mapPositionToScreen(&out, &position);
        BasicSoundActor2_play(v18, "SE_BOSS_KOOPA_FIRE_DISAPP", &out.x, 0);
        StateMgr__changeState((StateMgr *)(v5 + 6084), (StateBase *)&dword_60C8403C);
      }
      goto LABEL_10;
    }
    result = a2[34] | 2;
    if ( result == 2 )
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1611450344 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      result = (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B378);
      if ( result == 1 )
      {
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1156))(v2);
        if ( !result )
          return (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v2 + 1164))(v2, v3, a2);
      }
    }
  }
  return result;
}
