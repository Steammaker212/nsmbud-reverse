/* sub_606B2360
 * address: 0x606B2360   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __cdecl sub_606B2360()
{
  MovementHandler_StateID_FindController._.id = CurrentStateID + 1;
  MovementHandler_StateID_FindController._.vtable = &State_MovementHandler_vtable;
  LODWORD(MovementHandler_StateID_FindController.beginFunc) = MovementHandler_beginState_FindController;
  HIDWORD(MovementHandler_StateID_FindController.beginFunc) = 0;
  LODWORD(MovementHandler_StateID_FindController.executeFunc) = MovementHandler_executeState_FindController;
  HIDWORD(MovementHandler_StateID_FindController.executeFunc) = 0;
  LODWORD(MovementHandler_StateID_FindController.endFunc) = MovementHandler_endState_FindController;
  HIDWORD(MovementHandler_StateID_FindController.endFunc) = 0;
  CurrentStateID += 2;
  MovementHandler_StateID_Linked._.id = CurrentStateID;
  MovementHandler_StateID_Linked._.vtable = &State_MovementHandler_vtable;
  LODWORD(MovementHandler_StateID_Linked.beginFunc) = MovementHandler_beginState_Linked;
  HIDWORD(MovementHandler_StateID_Linked.beginFunc) = 0;
  LODWORD(MovementHandler_StateID_Linked.executeFunc) = MovementHandler_executeState_Linked;
  HIDWORD(MovementHandler_StateID_Linked.executeFunc) = 0;
  LODWORD(MovementHandler_StateID_Linked.endFunc) = MovementHandler_endState_Linked;
  HIDWORD(MovementHandler_StateID_Linked.endFunc) = 0;
}
