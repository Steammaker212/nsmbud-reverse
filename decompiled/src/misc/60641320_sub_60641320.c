/* sub_60641320
 * address: 0x60641320   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60641320(int a1)
{
  __int64 v2; // r0
  StateMethodExecuter *result; // r0
  int *v4; // r1

  v2 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  result = (StateMethodExecuter *)(*(_DWORD *)(EventMgr__instance + 16) & v2
                                 | ((*(_QWORD *)(EventMgr__instance + 16) & (unsigned __int64)v2) >> 32));
  if ( result )
  {
    if ( (FIELD_U8(a1, 22) & 0x30) != 0 )
      v4 = &dword_60CB59D0;
    else
      v4 = &dword_60CB59F0;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)v4);
  }
  return result;
}
