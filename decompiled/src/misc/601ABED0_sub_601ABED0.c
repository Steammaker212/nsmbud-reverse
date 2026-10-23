/* sub_601ABED0
 * address: 0x601ABED0   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601ABED0(int a1)
{
  int v2; // r5
  _DWORD *v3; // r0
  int v4; // r3
  unsigned int v5; // r5
  unsigned int v6; // r0
  _DWORD *v7; // r0
  int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r0
  StateBase *CurrentState; // r0
  int v12; // r5
  int result; // r0
  int v14; // [sp+4h] [bp-14h]

  v2 = dword_60C8996C;
  v14 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) && v14 == 219 )
  {
    if ( FIELD_U32(a1, 284) != 1 )
    {
      FIELD_U32(a1, 284) = 1;
      sub_60421938(*(_DWORD **)(a1 + 268), FIELD_U32(a1, 276), (int)&dword_60C8A618);
      v3 = *(_DWORD **)(a1 + 268);
      v4 = v3[3];
      v5 = v3[2];
      v6 = v3[17];
      if ( v5 > v6 )
        v4 += 4 * v6;
      *(_DWORD *)(*(_DWORD *)v4 + 24) = dword_60C8A608[4 * FIELD_U32(a1, 284) + 2];
      v7 = *(_DWORD **)(a1 + 268);
      v8 = v7[3];
      v9 = v7[2];
      v10 = v7[17];
      if ( v9 > v10 )
        v8 += 4 * v10;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), dword_60C8A608[4 * FIELD_U32(a1, 284) + 3]);
    }
    StateMgr__changeState((StateMgr *)(a1 + 308), (StateBase *)&unk_60C8A598);
  }
  if ( v14 != 219 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 308));
  v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C8A5BC + 8))();
  if ( v12 == result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  return result;
}
