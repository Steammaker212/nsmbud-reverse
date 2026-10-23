/* sub_607AAA00
 * address: 0x607AAA00   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AAA00(int a1)
{
  int v2; // r6
  int v3; // r0
  unsigned int v4; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  StateBase *CurrentState; // r0
  int v9; // r6
  _BOOL4 v10; // r7

  v2 = 0;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1)
    && (FIELD_U8(a1, 1225) & 2) != 0
    && sub_60786670(a1 + 688) == 1 )
  {
    v3 = FIELD_U32(a1, 1320);
    if ( (unsigned int)(v3 - 5) >= 2 )
    {
      if ( v3 != 2 )
        return v2;
      v6 = FIELD_U8(a1, 84);
      v7 = 0;
      v2 = 0;
      if ( v6 < 4 )
        v7 = (char)v6;
      if ( *(int *)(EnemyCounterMaybe_instance + 8 * v7 + 104) >= 2 )
        return v2;
    }
    else
    {
      v4 = FIELD_U8(a1, 84);
      v5 = 0;
      v2 = 0;
      if ( v4 < 4 )
        v5 = (char)v4;
      if ( *(int *)(EnemyCounterMaybe_instance + 8 * v5 + 136) > 1 )
        return v2;
    }
    if ( (FIELD_U8(a1, 1207) & 0x40) == 0
      || (FIELD_U8(a1, 6905) & 0x80) == 0
      || (v2 = 0, !((int (__fastcall *)(int))loc_60763E28)(a1)) )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v9 == (*(int (**)(void))(dword_60CC4BE0 + 8))() )
      {
        v10 = sub_607865A4(a1 + 688, 5);
        Player_changeState(a1, (StateBase *)&dword_60CC4D6C, 0);
        v2 = 1;
        if ( v10 )
        {
          sub_6078667C((_DWORD *)(a1 + 688), 5);
          return 1;
        }
      }
      else
      {
        Player_changeState(a1, (StateBase *)&dword_60CC4D6C, 0);
        return 1;
      }
    }
  }
  return v2;
}
