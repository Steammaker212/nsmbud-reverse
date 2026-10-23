/* sub_60242FCC
 * address: 0x60242FCC   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60242FCC(ActiveCollider *a1, ActiveCollider *a2)
{
  char v2; // r12
  StageActor *owner; // r6
  StageActor *v6; // r7
  StateBase *CurrentState; // r0
  int v8; // r7

  owner = FIELD_U32(a1, 0x40);
  if ( ((unsigned int)&dword_60C8DC20 & ~(1612984300 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC20) )
  {
    dword_60C8DC1C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8DC20);
  }
  if ( owner )
  {
    if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C8DC1C) == 1 )
    {
      v6 = FIELD_U32(a2, 0x40);
      if ( Actor__getProfileId(&FIELD_U32(v6, 0x0)) != 392
        || (CurrentState = StateMgr__getCurrentState((StateMgr *)&v6[9].aCollider.field_64),
            v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
            v8 != (*(int (**)(void))(stru_60C92664 + 8))()) )
      {
        if ( (LODWORD(owner[9].field_20C) == 1
           || (FIELD_U8(dword_60C9CF0C, 1404) & (1 << BYTE2(owner[9].field_204))) != 0)
          && FIELD_U8(dword_60C99D88, 31)
          || FIELD_U32(a2, 0x88) == 4 )
        {
          Enemy__collisionCallback(a1, a2);
        }
      }
    }
  }
}
