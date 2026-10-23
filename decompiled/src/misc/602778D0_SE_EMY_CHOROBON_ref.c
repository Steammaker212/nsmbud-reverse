/* SE_EMY_CHOROBON_ref
 * address: 0x602778D0   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_CHOROBON_ref(int a1)
{
  StateMgr *v2; // r5
  int v3; // r7
  int v4; // r0
  float *v5; // r10
  int result; // r0
  StateBase *CurrentState; // r0
  int v8; // r5
  bool v9; // zf
  int v10; // r0
  int v11; // r0
  int *v12; // r5
  _BYTE *v13; // r7
  int v14; // r9
  float v15; // r1
  const char *v16; // r1
  unsigned int v17; // r0
  int v18; // r1
  Vec2 v19; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  v2 = (StateMgr *)(a1 + 6336);
  StateMgr__execute((StateMgr *)(a1 + 6336));
  v3 = 0;
  v4 = FIELD_U32(a1, 6420);
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6416);
  FIELD_U32(a1, 112) = v4;
  v5 = (float *)(a1 + 6408);
  FIELD_U32(a1, 80) = FIELD_F32(a1, 6408) < 0.0;
  result = FIELD_S16(a1, 6216);
  if ( result <= 0 )
  {
    FIELD_U32(a1, 6480) = FIELD_U32(a1, 6476);
    CurrentState = StateMgr__getCurrentState(v2);
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v9 = v8 == (*((int (**)(void))LineFollower_StateID_Fall._.vtable + 2))();
    v10 = 0;
    if ( v9 )
      v10 = 1;
    else
      v3 = 1;
    FIELD_U32(a1, 6476) = v10;
    v12 = (int *)(a1 + 6488);
    v11 = FIELD_U32(a1, 6488);
    if ( !FIELD_U32(a1, 6480) && !v3 )
      *v12 = ++v11;
    v13 = (_BYTE *)(a1 + 6472);
    if ( v11 >= 1 && !*v13 )
    {
      *v13 = 1;
      v14 = Global_BasicSoundActor1;
      v15 = FIELD_F32(a1, 112);
      if ( (FIELD_U8(a1, 21) & 1) != 0 )
      {
        position.x = FIELD_F32(a1, 108);
        position.y = v15;
        mapPositionToScreen(&v19, &position);
        v16 = "SE_EMY_CHOROBON_L_ROLL";
      }
      else
      {
        position.x = FIELD_F32(a1, 108);
        position.y = v15;
        mapPositionToScreen(&v19, &position);
        v16 = "SE_EMY_CHOROBON_ROLL";
      }
      BasicSoundActor1_playSound(v14, v16, (int)&v19, 0);
      v17 = 0;
      if ( *v5 <= 0.0 )
      {
        v17 = 1;
        if ( *v5 >= 0.0 )
          v17 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31;
      }
      FIELD_U32(a1, 6484) = v17;
    }
    if ( *v13 )
    {
      v18 = 0x8000000;
      if ( !FIELD_U32(a1, 6484) )
        v18 = -134217728;
      result = v18 + FIELD_U32(a1, 164);
      FIELD_U32(a1, 164) = result;
      if ( !result )
      {
        *v13 = 0;
        result = *v12 - 1;
        *v12 = result;
      }
    }
    else
    {
      result = FIELD_U32(a1, 164);
      if ( result )
      {
        if ( FIELD_U32(a1, 6484) )
          result += 0x8000000;
        else
          result -= 0x8000000;
        FIELD_U32(a1, 164) = result;
      }
    }
  }
  return result;
}
