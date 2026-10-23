/* MovementHandler_executeState_FindController
 * address: 0x606AF948   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall MovementHandler_executeState_FindController(MovementHandler *this)
{
  if ( MovementHandler_findMovementController(this) )
    StateMgr__changeState(&FIELD_U32(this, 0xE8), &MovementHandler_StateID_Linked._);
}
