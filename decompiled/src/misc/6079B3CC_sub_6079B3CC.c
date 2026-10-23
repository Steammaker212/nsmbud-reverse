/* sub_6079B3CC
 * address: 0x6079B3CC   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079B3CC(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r6
  bool v5; // zf

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11408));
  if ( ((unsigned int)dword_60CAFA60 & ~(1618588680 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CAFA60) )
  {
    dword_60CAFA5C = (int)&off_60BDBC48;
    _cxa_guard_release(dword_60CAFA60);
  }
  v4 = 0;
  if ( !v2 || (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60CAFA5C) != 1 )
    return v4;
  v5 = (FIELD_U8(a1, 6900) & 1) == 0;
  if ( (FIELD_U8(a1, 6900) & 1) == 0 )
    v5 = (FIELD_U8(a1, 1219) & 1) == 0;
  if ( !v5 )
  {
    if ( sub_6079B128(a1) || !(*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 412))(v2, a1) )
    {
      Player_changeState(a1, (StateBase *)&dword_60CC4FAC, 1);
      return 1;
    }
    goto LABEL_13;
  }
  if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 412))(v2, a1) == 1 )
  {
LABEL_13:
    Player_changeState(a1, (StateBase *)&dword_60CC4FAC, 0);
    return 1;
  }
  return v4;
}
