/* sub_605DFE64
 * address: 0x605DFE64   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605DFE64(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1

  if ( (FIELD_U8(a1, 6804) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  if ( sub_605DA7CC(a1, FIELD_U32(a1, 80)) )
    FIELD_U32(a1, 120) = 0;
  result = (StateMethodExecuter *)(a1 + 8012);
  v3 = FIELD_U32(a1, 8012);
  if ( v3 == 1 )
  {
    if ( FIELD_F32(a1, 120) == 0.0 )
    {
      FIELD_U32(a1, 8020) = 0;
      StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB18A0);
      return sub_605D79D0(a1, (StateBase *)&dword_60CB1690, 50331648);
    }
  }
  else if ( !v3 && (FIELD_U8(a1, 6266) & 0x80) != 0 )
  {
    FIELD_U32(result, 0x0) = (void *)1;
    result = (StateMethodExecuter *)(FIELD_U32(a1, 6268) & 0xFFFFFFFE);
    FIELD_U32(a1, 6268) = result;
  }
  return result;
}
