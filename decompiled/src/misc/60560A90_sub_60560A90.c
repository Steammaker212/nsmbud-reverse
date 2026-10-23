/* sub_60560A90
 * address: 0x60560A90   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60560A90(StateMethodExecuter *result)
{
  void *owner; // r1
  bool v2; // zf

  owner = result[3].owner;
  if ( owner == (void *)8 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAE180);
  if ( owner != (void *)4 )
  {
    if ( !BYTE1(result[2667].currentState) )
      return result;
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAE180);
  }
  v2 = BYTE1(result[2667].currentState) == 0;
  if ( BYTE1(result[2667].currentState) )
    v2 = BYTE1(result[5330].currentState) == 0;
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAE180);
  return result;
}
