/* sub_607A9D4C
 * address: 0x607A9D4C   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A9D4C(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int v4; // r1
  int result; // r0

  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 12940));
  if ( ((unsigned int)&dword_60C7B408 & ~(1618648456 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( v2 && (**v2)(v2, &dword_60C7B404) )
  {
    v4 = FIELD_U32(a1, 9948);
    if ( v4 )
      FIELD_U32(a1, 9948) = v4 - 1;
    result = sub_607869D0(a1 + 688);
    if ( result == 1 )
    {
      result = sub_607CFED4(v2, a1);
      if ( result == 1 )
      {
        result = 12976;
        FIELD_U8(a1, 12976) = 1;
      }
    }
  }
  else
  {
    if ( !FIELD_U8(a1, 12976) )
      FIELD_U8(a1, 15076) = 0;
    return Player_changeState(a1, (StateBase *)&dword_60CC4BE0, 0);
  }
  return result;
}
