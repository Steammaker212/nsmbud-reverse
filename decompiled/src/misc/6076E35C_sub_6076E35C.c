/* sub_6076E35C
 * address: 0x6076E35C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6076E35C(int a1)
{
  StateMgr *v1; // r4
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r1
  signed int result; // r0

  v1 = (StateMgr *)(a1 + 0x2C44);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 0x2C44));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = (*(int (**)(void))(dword_60CBF714 + 8))();
  result = 0;
  if ( v3 == v4 )
  {
    if ( FIELD_U8(dword_60C9A1F0, 6526) )
      sub_60777C78(dword_60CBFA90);
    else
      StateMgr__changeState(v1, &stru_60CBF780);
    return 1;
  }
  return result;
}
