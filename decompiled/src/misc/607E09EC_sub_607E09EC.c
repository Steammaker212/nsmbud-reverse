/* sub_607E09EC
 * address: 0x607E09EC   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607E09EC(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  StateMethodExecuter *result; // r0
  int *v5; // r1

  if ( FIELD_U8(a1, 7272) && (FIELD_U8(a1, 957) & 0x20) != 0 )
    FIELD_U8(a1, 7273) = 1;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 2992));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (StateMethodExecuter *)(*(int (**)(void))(dword_60CA92CC + 8))();
  if ( (StateMethodExecuter *)v3 == result )
  {
    result = (StateMethodExecuter *)dword_60C99DD0;
    if ( dword_60C99DD0 )
    {
      if ( FIELD_U8(a1, 7284) )
      {
        if ( FIELD_U8(a1, 7285) )
          v5 = &dword_60CC5904;
        else
          v5 = &dword_60CC5944;
      }
      else if ( FIELD_U8(a1, 7285) )
      {
        v5 = &dword_60CC5904;
      }
      else
      {
        v5 = &dword_60CC5984;
      }
      return StateMgr__changeState((StateMgr *)(a1 + 472), (StateBase *)v5);
    }
  }
  return result;
}
