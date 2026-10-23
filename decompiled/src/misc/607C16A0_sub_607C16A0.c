/* sub_607C16A0
 * address: 0x607C16A0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C16A0(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  bool v6; // zf

  v4 = 0;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) == 1 )
  {
    if ( !ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11408)) )
    {
      Player_ReleaseCarryableEnemy((_DWORD *)a1, 0);
      return 0;
    }
    if ( FIELD_U32(a1, 12160) <= 1u )
    {
      v5 = sub_60786968(a1 + 688);
      v6 = v5 == 0;
      if ( !v5 )
        v6 = (FIELD_U8(a1, 1235) & 1) == 0;
      if ( v6 )
      {
        if ( a2 == 1 )
        {
          Player_changeState(a1, (StateBase *)&dword_60CC4D8C, 1);
          return 1;
        }
        Player_changeState(a1, (StateBase *)&dword_60CC4D8C, 0);
        return 1;
      }
    }
  }
  return v4;
}
