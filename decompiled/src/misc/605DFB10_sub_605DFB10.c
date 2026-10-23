/* sub_605DFB10
 * address: 0x605DFB10   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605DFB10(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int v4; // t1

  v4 = FIELD_U32(a1, 8020);
  result = (StateMethodExecuter *)(a1 + 8020);
  v3 = v4;
  if ( v4 == 1 )
  {
    FIELD_U32(result, 0x0) = 0;
    StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB18A0);
    return sub_605D79D0(a1, &stru_60CB16B4, 1);
  }
  else if ( !v3 && FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
  {
    FIELD_U32(result, 0x0) = 0;
    StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB18A0);
    return sub_605D79D0(a1, (StateBase *)&dword_60CB1690, 50331648);
  }
  return result;
}
