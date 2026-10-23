/* sub_607AC8CC
 * address: 0x607AC8CC   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AC8CC(int a1)
{
  int v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r7
  int v5; // r0
  bool v6; // zf
  _BYTE *v8; // r7
  int v9; // r0
  int v10; // r1
  bool v11; // zf
  int v12; // r2
  bool v13; // zf
  StateBase *v14; // r0
  int v15; // r6
  int v16; // r0
  int *v17; // r1

  v2 = 0;
  if ( (FIELD_U8(a1, 1212) & 2) != 0 || FIELD_U32(a1, 1320) == 9 && FIELD_S32(a1, 15084) > 0 )
    return v2;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CC50EC + 8))()
    || FIELD_F32(a1, 124) >= 0.0
    || FIELD_U32(a1, 12924)
    || (FIELD_U8(a1, 6900) & 1) != 0
    || (FIELD_U8(a1, 6905) & 0x80) != 0 )
  {
    return v2;
  }
  v5 = sub_607B9488(a1);
  v6 = v5 == 7;
  if ( v5 == 7 )
    v6 = (FIELD_U8(a1, 1213) & 1) == 0;
  if ( !v6 )
    return v2;
  v8 = (_BYTE *)(a1 + 12917);
  v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1);
  v10 = FIELD_U8(a1, 12917);
  if ( v9 )
  {
    v11 = v10 == 0;
    if ( *v8 )
      v11 = FIELD_U8(a1, 12918) == 0;
    if ( !v11 && sub_60786934(a1 + 688) == 1 )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1) == 1 )
        v12 = 3;
      else
        v12 = 2;
      goto LABEL_33;
    }
    return v2;
  }
  v13 = v10 == 0;
  if ( *v8 )
    v13 = FIELD_U8(a1, 12918) == 0;
  if ( !v13 )
  {
    if ( sub_60786934(a1 + 688) == 1 )
    {
      v12 = 0;
LABEL_33:
      Player_changeState(a1, (StateBase *)&dword_60CC50EC, v12);
      return 1;
    }
    return v2;
  }
  v14 = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
  v2 = 1;
  if ( v15 == (*(int (**)(void))(dword_60CC51AC + 8))() )
    return v2;
  if ( FIELD_U32(a1, 1320) == 9 )
  {
    v16 = 15 - FIELD_U32(a1, 15080);
    if ( v16 >= 90 )
      v16 = 90;
    if ( v16 < 0 )
      v16 = 90;
    FIELD_U32(a1, 15080) = v16;
    v17 = &dword_60CC51AC;
  }
  else
  {
    v17 = &dword_60CC50EC;
  }
  Player_changeState(a1, (StateBase *)v17, 1);
  return 1;
}
