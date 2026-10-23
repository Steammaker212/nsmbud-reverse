/* sub_603E0D64
 * address: 0x603E0D64   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603E0D64(int r0_0)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r5
  float v11; // r1
  signed int result; // r0
  unsigned int v13; // r0
  float v14; // r1
  Vec2 v15; // [sp+0h] [bp-20h] BYREF
  Vec2 a1[3]; // [sp+8h] [bp-18h] BYREF

  v2 = (StateMgr *)(r0_0 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(r0_0 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C99464 + 8))()
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 == (*(int (**)(void))(dword_60C99488 + 8))())
    || (v7 = StateMgr__getCurrentState(v2),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        v8 == (*(int (**)(void))(dword_60C994AC + 8))())
    || (v9 = StateMgr__getCurrentState(v2),
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9),
        v10 == (*(int (**)(void))(dword_60C994D0 + 8))()) )
  {
    v11 = FIELD_F32(r0_0, 112);
    v15.x = FIELD_F32(r0_0, 108);
    v15.y = v11;
    result = distanceToPLayer(a1, &v15);
    if ( (result & 0x80) != 0 )
      return result;
    result = (unsigned __int8)result;
    if ( (unsigned __int8)result >= 4u )
      result = 0;
    v13 = sub_6000F7B8(
            *(float *)(*(_DWORD *)(PlayerMgr_instance + 4 * result + 32) + 108) - FIELD_F32(r0_0, 108),
            50.0);
    v14 = 1.0842e-19;
    if ( v13 - 0x20000000 >= 0x60000001 )
    {
      if ( v13 + 0x7FFFFFFF < 0x60000000 )
        v13 = -536870912;
      v14 = *(float *)&v13;
    }
  }
  else
  {
    v14 = *(float *)&dword_60AF1F20[FIELD_U32(r0_0, 80)];
  }
  a1[0].x = v14;
  v15.x = 2.351e-38;
  return moveValueTo((int *)(r0_0 + 160), (int *)a1, (int *)&v15);
}
