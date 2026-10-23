/* sub_600C86F0
 * address: 0x600C86F0   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600C86F0()
{
  int *v0; // r5
  char v1; // r12
  int *result; // r0
  int v3; // r8
  int v4; // r6
  StateMgr *v5; // r0

  v0 = (int *)sub_60008598(ActorMgr__instance, 265, *(_DWORD *)(ActorMgr__instance + 27172));
  result = *(int **)(ActorMgr__instance + 27180);
  if ( v0 != result )
  {
    v3 = 0;
    do
    {
      v4 = *v0;
      if ( ((unsigned int)&dword_60C83FAC & ~(1611433896 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C83FAC) )
      {
        dword_60C83FA8 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C83FAC);
      }
      if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C83FA8) == 1 )
      {
        if ( v3 )
        {
          if ( FIELD_F32(v3, 108) <= FIELD_F32(v4, 108) )
            v5 = (StateMgr *)(v4 + 6692);
          else
            v5 = (StateMgr *)(v3 + 6692);
          StateMgr__changeState(v5, (StateBase *)&dword_60C843F8);
        }
        else
        {
          v3 = v4;
        }
      }
      v0 = (int *)sub_60008598(ActorMgr__instance, 265, (int)(v0 + 1));
      result = *(int **)(ActorMgr__instance + 27180);
    }
    while ( v0 != result );
  }
  return result;
}
