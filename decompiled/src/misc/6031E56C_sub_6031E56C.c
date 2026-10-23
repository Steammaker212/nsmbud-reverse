/* sub_6031E56C
 * address: 0x6031E56C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031E56C(CollisionActor *a1)
{
  int v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  int v5; // r1
  int v6; // r1

  v2 = 0;
  if ( sub_6031BA60(a1) == 1 )
  {
    v2 = 1;
    if ( a1[2]._.aCollider.field_110 >= 1 )
    {
      if ( LOBYTE(FIELD_U32(a1, 0x0)._.settings1) )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)&a1[1]._._.settings1);
        v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v4 == (*(int (**)(void))(dword_60C9365C + 8))() )
        {
          v5 = *(_DWORD *)&a1[2].collisionMgr[216];
          if ( !v5 || (v6 = v5 - 1, (*(_DWORD *)&a1[2].collisionMgr[216] = v6) == 0) )
            (*(void (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0)._.vtable + 192))(a1, &dword_60C937CC);
        }
      }
    }
  }
  return v2;
}
