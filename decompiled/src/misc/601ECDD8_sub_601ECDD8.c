/* sub_601ECDD8
 * address: 0x601ECDD8   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601ECDD8(int a1)
{
  int v2; // r5
  int result; // r0
  StateBase *CurrentState; // r0
  int v5; // r5
  StateBase *v6; // r1
  StateBase *v7; // r0
  int v8; // r5
  int v9; // [sp+4h] [bp-14h]

  v2 = dword_60C8996C;
  v9 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) )
  {
    if ( v9 == 247 )
    {
      FIELD_U8(a1, 496) = 1;
    }
    else if ( v9 == 239 )
    {
      StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&unk_60C8B260);
    }
  }
  result = v9 - 239;
  switch ( v9 )
  {
    case 239:
    case 249:
      return result;
    case 240:
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 300));
      v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60C8B2F0 + 8))();
      if ( v5 == result )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return result;
    case 241:
      v6 = (StateBase *)&unk_60C8B338;
      goto LABEL_17;
    case 244:
      v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 300));
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
      result = (*(int (**)(void))(dword_60C8B3EC + 8))();
      if ( v8 != result )
        return result;
      FIELD_U8(a1, 19) = 1;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 247:
      if ( !FIELD_U8(dword_60C8B144, 65) )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      v6 = (StateBase *)&unk_60C8B410;
      goto LABEL_17;
    case 248:
      if ( !FIELD_U8(dword_60C8B144, 65) )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      v6 = (StateBase *)&unk_60C8B434;
LABEL_17:
      StateMgr__changeState((StateMgr *)(a1 + 300), v6);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 250:
      v6 = (StateBase *)&dword_60C8B50C;
      goto LABEL_17;
    default:
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
}
