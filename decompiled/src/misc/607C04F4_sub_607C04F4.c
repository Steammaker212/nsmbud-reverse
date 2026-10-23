/* sub_607C04F4
 * address: 0x607C04F4   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C04F4(int a1)
{
  int result; // r0
  int v3; // r0
  StateBase *v4; // r1
  int v5; // r0
  bool v6; // zf

  if ( (FIELD_U8(a1, 1214) & 1) == 0 )
    return sub_607C06A8(a1);
  if ( (FIELD_U8(a1, 6900) & 1) != 0 )
  {
    v4 = (StateBase *)&dword_60CC4BBC;
    return Player_changeState(a1, v4, 0);
  }
  v3 = FIELD_U32(a1, 12848);
  if ( v3 >= 1 )
  {
    if ( sub_6079983C(a1, 1) )
    {
LABEL_10:
      v4 = (StateBase *)&unk_60CC4C04;
      return Player_changeState(a1, v4, 0);
    }
    v3 = FIELD_U32(a1, 12848);
  }
  if ( v3 < 0 && sub_6079983C(a1, 0) || (FIELD_U8(a1, 6903) & 3) != 0 )
    goto LABEL_10;
  if ( sub_607998FC(a1) )
  {
    if ( !FIELD_U8(dword_60CC6D8C, 17) )
    {
      v4 = (StateBase *)&unk_60CC4C04;
      return Player_changeState(a1, v4, 0);
    }
    if ( sub_60799960(a1) )
    {
      v4 = (StateBase *)&unk_60CC4C04;
      return Player_changeState(a1, v4, 0);
    }
  }
  v5 = FIELD_U32(a1, 6752);
  if ( FIELD_U32(a1, 12824) > 1u )
  {
    FIELD_U32(a1, 164) = -v5;
  }
  else
  {
    if ( !FIELD_U32(a1, 80) )
      v5 = -v5;
    FIELD_U32(a1, 156) = v5;
  }
  result = sub_607BFF54(a1);
  if ( !result )
  {
    sub_607C06A8(a1);
    result = FIELD_U8(a1, 1214);
    if ( (result & 1) != 0 )
    {
      result = ((int (__fastcall *)(int, float))loc_60154A5C)(a1 + 1328, FIELD_F32(a1, 12828) + FIELD_F32(a1, 9608));
      v6 = result == 3;
      if ( result != 3 )
        v6 = result == 0;
      FIELD_U32(a1, 12860) = result;
      if ( v6 )
      {
        v4 = (StateBase *)&unk_60CC4C04;
        return Player_changeState(a1, v4, 0);
      }
    }
  }
  return result;
}
