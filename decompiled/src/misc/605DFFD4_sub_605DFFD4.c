/* sub_605DFFD4
 * address: 0x605DFFD4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605DFFD4(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int v4; // t1

  v4 = FIELD_U32(a1, 8012);
  result = (StateMethodExecuter *)(a1 + 8012);
  v3 = v4;
  if ( v4 == 1 )
  {
    if ( FIELD_F32(a1, 124) < -1.0 )
    {
      FIELD_U32(a1, 8020) = 0;
      StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB18A0);
      return sub_605D79D0(a1, &stru_60CB16D8, 50331648);
    }
  }
  else if ( !v3 && FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
  {
    FIELD_U32(a1, 6264) &= ~1u;
    FIELD_U32(a1, 6268) &= ~1u;
    FIELD_U32(result, 0x0) = (void *)1;
  }
  return result;
}
