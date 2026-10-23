/* sub_6067CAE4
 * address: 0x6067CAE4   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067CAE4(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r5
  int result; // r0
  int v8; // [sp+4h] [bp-2Ch] BYREF
  int v9; // [sp+8h] [bp-28h]
  _DWORD v10[2]; // [sp+Ch] [bp-24h] BYREF
  char v11; // [sp+14h] [bp-1Ch]

  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 10180));
  if ( v2 )
  {
    if ( ((unsigned int)dword_60CB7FB4 & ~(1617414956 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CB7FB4) )
    {
      dword_60CB7FB0 = (int)&off_60BC00E0;
      _cxa_guard_release(dword_60CB7FB4);
    }
    v4 = (int)(v2 + 1521);
    if ( !(**v2)(v2, &dword_60CB7FB0) )
      v4 = 6084;
    CurrentState = StateMgr__getCurrentState((StateMgr *)v4);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 == (*(int (**)(void))(dword_60CB7F50 + 8))() )
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7F50);
  }
  v10[0] = FIELD_U16(a1, 10184);
  v10[1] = unk_60C26424;
  v11 = 0;
  SE_EMY_LIFT_LINE_MOVE_ref(a1 + 6100, v10);
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6444);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6448);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 6452);
  sub_6067F108(a1 + 6100, &v8);
  FIELD_U32(a1, 120) = v8;
  result = v9;
  FIELD_U32(a1, 124) = v9;
  return result;
}
