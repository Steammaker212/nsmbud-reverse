/* sub_603E95C8
 * address: 0x603E95C8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E95C8(StateMethodExecuter *result)
{
  int currentState; // r1
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // r1
  int v5; // r1

  currentState = result[2].currentState;
  if ( !currentState )
    return StateMgr__changeState((StateMgr *)&result[9], (StateBase *)&dword_60C99920);
  result[2].currentState = currentState - 1;
  if ( currentState != 136 )
  {
    if ( currentState != 1 )
      return result;
    return StateMgr__changeState((StateMgr *)&result[9], (StateBase *)&dword_60C99920);
  }
  v2 = (_DWORD *)PlayerMgr_instance;
  v3 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v3 )
    FIELD_U32(v3, 1208) |= 0x2000000u;
  v4 = v2[9];
  if ( v4 )
    FIELD_U32(v4, 1208) |= 0x2000000u;
  v5 = v2[10];
  if ( v5 )
    FIELD_U32(v5, 1208) |= 0x2000000u;
  result = (StateMethodExecuter *)v2[11];
  if ( result )
    result[100].currentState |= 0x2000000u;
  return result;
}
