/* sub_6059A4A0
 * address: 0x6059A4A0   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6059A4A0(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0

  if ( (FIELD_U8(a1, 6262) & 2) != 0 )
  {
    v3 = sub_605DBDAC(a1);
    if ( !v3 )
    {
      FIELD_U32(a1, 13468) = 3;
      return StateMgr__changeState((StateMgr *)(a1 + 13452), (StateBase *)&dword_60CAFA3C);
    }
    if ( (FIELD_U8(v3, 1231) & 1) != 0 )
    {
      FIELD_U32(a1, 13468) = 1;
      return StateMgr__changeState((StateMgr *)(a1 + 13452), (StateBase *)&dword_60CAFA3C);
    }
    if ( (FIELD_U8(v3, 6900) & 1) != 0 )
    {
      FIELD_U32(a1, 13468) = 2;
      return StateMgr__changeState((StateMgr *)(a1 + 13452), (StateBase *)&dword_60CAFA3C);
    }
  }
  result = *(StateMethodExecuter **)(a1 + 13472);
  if ( (int)result <= 120 )
  {
    FIELD_U32(a1, 13468) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 13452), (StateBase *)&dword_60CAFA3C);
  }
  return result;
}
