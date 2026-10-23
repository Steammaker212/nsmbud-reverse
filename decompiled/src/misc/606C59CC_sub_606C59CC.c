/* sub_606C59CC
 * address: 0x606C59CC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C59CC(int a1)
{
  int result; // r0
  char v3; // r6
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r5

  result = FIELD_U8(a1, 4);
  if ( result )
  {
    v3 = result - 1;
    if ( (unsigned int)(result - 1) >= 2 )
    {
      result = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)a1);
      v4 = result;
      if ( result )
      {
        result = Actor__getProfileId((Actor *)result);
        if ( result == 471 )
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
          v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          result = (*(int (**)(void))(dword_60C8DF34 + 8))();
          if ( v6 == result )
            v3 = 1;
        }
      }
    }
    FIELD_U8(a1, 4) = v3;
  }
  return result;
}
