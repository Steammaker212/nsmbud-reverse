/* sub_604C9C2C
 * address: 0x604C9C2C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C9C2C(int a1)
{
  int v2; // r6
  unsigned int v3; // r0
  int *v4; // r7
  StateBase *CurrentState; // r0
  int v6; // r5
  StateMethodExecuter *result; // r0

  v2 = 0;
  v4 = (int *)(a1 + 615700);
  v3 = FIELD_U32(a1, 615700);
  if ( v3 >= 0xA )
    v3 = 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 52644 * v3 + 89268));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (StateMethodExecuter *)(*(int (**)(void))(dword_60CA3DB8 + 8))();
  if ( (StateMethodExecuter *)v6 == result )
  {
    if ( (unsigned int)*v4 < 0xA )
      v2 = *v4;
    ((void (__fastcall *)(int, int))loc_604D23A8)(a1 + 52644 * v2 + 89248, 7);
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA31D8);
  }
  return result;
}
