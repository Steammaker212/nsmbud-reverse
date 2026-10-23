/* sub_607F4384
 * address: 0x607F4384   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F4384(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_603FBBE4(dword_60C99DD4);
  if ( result == (StateMethodExecuter *)1 )
  {
    FIELD_U32(a1, 52) = 1;
    sub_6054273C(dword_60CABDE4);
    sub_603F086C((_BYTE *)dword_60C99D6C);
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC61A0);
  }
  return result;
}
