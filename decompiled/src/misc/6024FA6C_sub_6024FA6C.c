/* sub_6024FA6C
 * address: 0x6024FA6C   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024FA6C(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  int result; // r0
  float v8; // r0
  float v9; // r1
  int v10; // r2
  int v11; // r2
  int v12; // r3
  const char *sound; // r0
  int v14; // [sp+4h] [bp-34h] BYREF
  _DWORD v15[4]; // [sp+8h] [bp-30h] BYREF
  Vec2 a2; // [sp+18h] [bp-20h] BYREF
  int v17; // [sp+20h] [bp-18h]

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C8DE78 + 8))()
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        result = (*(int (**)(void))(dword_60C8DE9C + 8))(),
        v6 == result) )
  {
    result = FIELD_U8(a1, 6457);
    if ( !FIELD_U8(a1, 6457) )
    {
      v8 = FIELD_F32(a1, 108);
      a2.y = FIELD_F32(a1, 112);
      a2.x = v8;
      v9 = FIELD_F32(a1, 112);
      v10 = FIELD_U32(a1, 116);
      v15[0] = FIELD_U32(a1, 108);
      v15[2] = v10;
      v17 = 1170939904;
      *(float *)&v15[1] = v9 + -2.0;
      ((void (__fastcall *)(int *, float *, _DWORD *, _DWORD))checkLiquidCollisions)(
        &v14,
        &a2.y,
        v15,
        FIELD_U8(a1, 86));
      result = v14;
      if ( v14 )
      {
        FIELD_U8(a1, 6457) = 1;
        if ( result == 1 )
        {
          v11 = 626;
          v12 = 6;
          sound = "SE_OBJ_CMN_SPLASH";
        }
        else if ( (unsigned int)(result - 3) > 1 )
        {
          if ( result != 5 )
            return result;
          v11 = 627;
          v12 = 23;
          sound = "SE_OBJ_CMN_SPLASH_POISON";
        }
        else
        {
          v11 = 628;
          v12 = 16;
          sound = "SE_OBJ_CMN_SPLASH_LAVA";
        }
        return StageActor__createWaterSplash((StageActor *)a1, &a2, v11, v12, sound);
      }
    }
  }
  return result;
}
