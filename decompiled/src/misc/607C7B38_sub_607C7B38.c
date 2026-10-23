/* sub_607C7B38
 * address: 0x607C7B38   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C7B38(int a1)
{
  int v2; // r5
  char v3; // r12
  int result; // r0

  FIELD_U32(a1, 1204) &= ~0x10u;
  if ( (FIELD_U8(a1, 1218) & 8) == 0 )
    return Player_changeState(a1, (StateBase *)&dword_60CC4BE0, 0);
  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
  if ( ((unsigned int)&dword_60C7B408 & ~(1618770828 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( !v2 || !(**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B404) )
    return Player_changeState(a1, (StateBase *)&dword_60CC4BE0, 0);
  sub_60773F4C(a1);
  if ( (FIELD_U8(v2, 1239) & 2) != 0 )
  {
    result = FIELD_U32(a1, 1204) | 0x10;
    FIELD_U32(a1, 1204) = result;
  }
  else
  {
    result = FIELD_U32(a1, 9944);
    if ( !result )
      JUMPOUT(0x607C7C68);
  }
  return result;
}
