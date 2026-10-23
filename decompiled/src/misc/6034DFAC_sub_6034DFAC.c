/* sub_6034DFAC
 * address: 0x6034DFAC   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034DFAC(int a1, int a2)
{
  int v4; // r5
  StateBase *v5; // r0
  int v6; // r6
  int result; // r0
  int v8; // r7
  StateBase *CurrentState; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r6

  v4 = FIELD_U32(a1, 64);
  if ( sub_602A588C(v4)
    || (v5 = StateMgr__getCurrentState((StateMgr *)(v4 + 6084)),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))()) )
  {
    result = FIELD_U8(a1, 110) | 2;
    FIELD_U8(a1, 110) = result;
  }
  else
  {
    result = FIELD_U32(a2, 136);
    if ( result == 3 )
    {
      v8 = FIELD_U32(a2, 64);
      if ( v8 )
      {
        if ( Actor__getProfileId((Actor *)v8) == 381 || (result = Actor__getProfileId((Actor *)v8), result == 382) )
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
          v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          result = (*(int (**)(void))(dword_60C94C80 + 8))();
          if ( v10 == result )
          {
            v11 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
            v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
            result = (*(int (**)(void))(dword_60C94C80 + 8))();
            if ( v12 == result )
            {
              FIELD_F32(v4, 7784) = FIELD_F32(v4, 7784) + (float)(FIELD_F32(a1, 188) * 0.5);
              return v4 + 7784;
            }
          }
        }
      }
    }
  }
  return result;
}
