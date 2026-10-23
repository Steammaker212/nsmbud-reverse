/* sub_6073A76C
 * address: 0x6073A76C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6073A76C(int a1)
{
  unsigned __int8 *v2; // r7
  unsigned __int8 v3; // r4
  int v4; // r0
  StateBase *CurrentState; // r0
  int v6; // r6
  StateMethodExecuter *result; // r0

  v2 = (unsigned __int8 *)(a1 + 6108);
  if ( !FIELD_U8(a1, 6108) )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBDFC4);
  v3 = 0;
  while ( 1 )
  {
    v4 = sub_6073AFA4(a1, v3);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (StateMethodExecuter *)(*(int (__fastcall **)(int *))(dword_60CBDEA0 + 8))(&dword_60CBDEA0);
    if ( (StateMethodExecuter *)v6 != result )
      break;
    if ( ++v3 >= (unsigned int)*v2 )
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBDFC4);
  }
  return result;
}
