/* sub_6008B3EC
 * address: 0x6008B3EC   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008B3EC(int a1)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5

  if ( (FIELD_U8(a1, 7616) & 2) != 0 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 == (*(int (**)(void))(dword_60C81D6C + 8))()
      || (v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
          result = (*(int (**)(void))(dword_60C81D8C + 8))(),
          v6 == result) )
    {
      FIELD_U32(a1, 124) = 1084227584;
      return 1084227584;
    }
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81A48);
  }
  return result;
}
