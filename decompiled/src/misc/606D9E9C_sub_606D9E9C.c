/* sub_606D9E9C
 * address: 0x606D9E9C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606D9E9C(int a1)
{
  StateMethodExecuter *result; // r0
  __int64 v3; // r0

  result = (StateMethodExecuter *)FIELD_U8(a1, 6555);
  if ( result )
  {
    v3 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
    result = (StateMethodExecuter *)(*(_DWORD *)(EventMgr__instance + 16) & v3
                                   | ((*(_QWORD *)(EventMgr__instance + 16) & (unsigned __int64)v3) >> 32));
    if ( result )
    {
      FIELD_U32(a1, 124) = 1069547520;
      return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBB8DC);
    }
  }
  return result;
}
