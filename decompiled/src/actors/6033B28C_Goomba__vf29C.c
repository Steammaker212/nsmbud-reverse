/* Goomba__vf29C
 * address: 0x6033B28C   size: 244   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033E5C4
// 
// Overridden by: None
void __fastcall Goomba__vf29C(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v4; // r5
  Actor *v5; // r4
  char v6; // r12

  if ( FIELD_U32(a2, 136) != 3 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 == (*(int (**)(void))(dword_60C943BC + 8))() )
    {
      v5 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6880));
      if ( ((unsigned int)&dword_60C8DCF4 & ~(1614000908 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DCF4) )
      {
        dword_60C8DCF0 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C8DCF4);
      }
      if ( v5 )
      {
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v5, 0x0))(v5, &dword_60C8DCF0) == 1 )
          sub_6024A0E8(v5);
      }
    }
  }
}
