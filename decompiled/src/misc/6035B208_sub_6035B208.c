/* sub_6035B208
 * address: 0x6035B208   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035B208(ActiveCollider *a1, ActiveCollider *a2)
{
  StageActor *owner; // r5
  StateBase *CurrentState; // r0
  int v6; // r7
  int result; // r0

  owner = FIELD_U32(a1, 0x40);
  if ( LOBYTE(owner[9].aCollider.info.field_24) )
    goto LABEL_8;
  CurrentState = StateMgr__getCurrentState((StateMgr *)&owner[9].aCollider.field_64);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() || !owner[9].field_22C )
    goto LABEL_8;
  if ( owner[11].aCollider.field_CC )
    return Enemy__collisionCallback(a1, a2);
  result = (*(int (__fastcall **)(StageActor *, ActiveCollider *, ActiveCollider *))(FIELD_U32(owner, 0x0).vtable + 256))(
             owner,
             a1,
             a2);
  if ( result == 1 )
  {
    LOBYTE(owner[9].field_1F4) = 1;
LABEL_8:
    result = (unsigned __int8)FIELD_U8(a1, 0x6E) | 2;
    FIELD_U8(a1, 0x6E) = result;
  }
  return result;
}
