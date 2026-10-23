/* sub_6067F658
 * address: 0x6067F658   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067F658(int a1)
{
  int v2; // r5
  char v3; // r12
  StateBase *CurrentState; // r0
  int v5; // r6

  v2 = sub_6067C8E0(a1);
  if ( v2 )
  {
    if ( ((unsigned int)&dword_60CB807C & ~(1617426048 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB807C) )
    {
      dword_60CB8078 = (int)&off_60C169DC;
      _cxa_guard_release(&dword_60CB807C);
    }
    if ( !(**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60CB8078) )
      v2 = 0;
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v2 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 == (*(int (**)(void))(dword_60CB7F50 + 8))() )
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7F50);
    else
      FIELD_U16(v2, 10196) |= FIELD_U16(a1, 10184);
  }
  return sub_6067C904(a1);
}
