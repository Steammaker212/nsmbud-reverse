/* sub_606415A0
 * address: 0x606415A0   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606415A0(int a1)
{
  __int64 v2; // r0
  StateMethodExecuter *result; // r0
  int v4; // r0

  if ( FIELD_U32(a1, 7016) )
  {
    v2 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
    result = (StateMethodExecuter *)(FIELD_U32(EventMgr__instance, 16) & v2
                                   | ((FIELD_U64(EventMgr__instance, 16) & (unsigned __int64)v2) >> 32));
    if ( !result )
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB59B0);
  }
  else
  {
    StateMgr__execute((StateMgr *)(a1 + 6828));
    v4 = FIELD_U32(a1, 6912);
    FIELD_U32(a1, 108) = FIELD_U32(a1, 6908);
    FIELD_U32(a1, 112) = v4;
    return (StateMethodExecuter *)sub_60642004(a1);
  }
  return result;
}
