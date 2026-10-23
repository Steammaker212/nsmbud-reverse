/* sub_606413F4
 * address: 0x606413F4   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606413F4(int a1)
{
  __int64 v2; // r0
  StateMethodExecuter *result; // r0

  if ( FIELD_U32(a1, 7016) )
  {
    v2 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
    result = (StateMethodExecuter *)(*(_DWORD *)(EventMgr__instance + 16) & v2
                                   | ((*(_QWORD *)(EventMgr__instance + 16) & (unsigned __int64)v2) >> 32));
    if ( !result )
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB59B0);
  }
  else
  {
    result = (StateMethodExecuter *)sub_60641F0C(a1);
    if ( result == (StateMethodExecuter *)1 )
    {
      if ( FIELD_U8(a1, 7028) )
      {
        sub_60642220(a1);
        if ( FIELD_U8(dword_60CC6D8C, 17) )
          sub_606423C8(a1);
      }
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB59F0);
    }
  }
  return result;
}
