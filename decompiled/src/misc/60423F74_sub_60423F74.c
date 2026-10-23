/* sub_60423F74
 * address: 0x60423F74   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60423F74(StateMethodExecuter *result)
{
  int owner; // r1
  int v2; // r2
  float v3; // s0

  if ( !BYTE1(result[1].currentState) )
    return StateMgr__changeState((StateMgr *)&result[4].currentState, (StateBase *)&dword_60C9BBB4);
  owner = (int)FIELD_U32(result, 0x4);
  v2 = *(_DWORD *)(**(_DWORD **)(FIELD_U32(dword_60C9A698, 229616) + 4 * (int)FIELD_U32(result, 0x0)) + 56);
  if ( v2 < 1 )
    v3 = 1.0;
  else
    v3 = (float)owner / (float)v2;
  *(float *)&result[1].vtable = v3;
  if ( owner >= v2 )
    return StateMgr__changeState((StateMgr *)&result[4].currentState, (StateBase *)&dword_60C9BB94);
  FIELD_U32(result, 0x4) = (void *)(owner + 1);
  return result;
}
