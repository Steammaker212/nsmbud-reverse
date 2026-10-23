/* sub_60250368
 * address: 0x60250368   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60250368(int a1)
{
  int v2; // r4
  unsigned int v3; // r1
  int v4; // r6
  char v5; // r12
  StateBase *CurrentState; // r0
  int v7; // r7

  v2 = 0;
  v3 = FIELD_U32(a1, 6348);
  if ( v3 )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( ((unsigned int)&dword_60C8DEC4 & ~(1613038512 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DEC4) )
    {
      dword_60C8DEC0 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8DEC4);
    }
    if ( v4 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C8DEC0) == 1 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v7 == (*(int (**)(void))(dword_60C8DDF8 + 8))() )
        {
          v2 = 1;
          FIELD_U8(a1, 6332) = FIELD_U8(v4, 6332);
        }
      }
    }
  }
  return v2;
}
