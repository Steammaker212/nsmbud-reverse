/* sub_603E94E8
 * address: 0x603E94E8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E94E8(int a1)
{
  _DWORD *v2; // r1
  StateMethodExecuter *result; // r0

  ++FIELD_U32(a1, 32);
  v2 = (_DWORD *)PlayerMgr_instance;
  if ( FIELD_U32(PlayerMgr_instance, 32) )
  {
    result = (StateMethodExecuter *)sub_60768EFC();
    if ( result )
      return result;
    v2 = (_DWORD *)PlayerMgr_instance;
  }
  if ( v2[9] )
  {
    result = (StateMethodExecuter *)sub_60768EFC();
    if ( result )
      return result;
    v2 = (_DWORD *)PlayerMgr_instance;
  }
  if ( v2[10] )
  {
    result = (StateMethodExecuter *)sub_60768EFC();
    if ( result )
      return result;
    v2 = (_DWORD *)PlayerMgr_instance;
  }
  if ( !v2[11] )
    return StateMgr__changeState((StateMgr *)(a1 + 108), (StateBase *)&dword_60C99900);
  result = (StateMethodExecuter *)sub_60768EFC();
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 108), (StateBase *)&dword_60C99900);
  return result;
}
