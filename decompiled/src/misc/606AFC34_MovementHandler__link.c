/* MovementHandler__link
 * address: 0x606AFC34   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall MovementHandler__link(
        MovementHandler *this,
        Vec3 *positionPtr,
        int typeMask,
        char movementId)
{
  float posX; // r12
  float posY; // r0
  float posZ; // r1
  State *v8; // r1

  posX = FIELD_F32(positionPtr, 0x0);
  FIELD_U32(this, 0xC).x = FIELD_F32(positionPtr, 0x0);
  posY = FIELD_F32(positionPtr, 0x4);
  FIELD_U32(this, 0xC).y = posY;
  posZ = FIELD_F32(positionPtr, 0x8);
  FIELD_U32(this, 0xC).z = posZ;
  FIELD_U32(this, 0x0).x = posX;
  FIELD_U32(this, 0x0).y = posY;
  FIELD_U32(this, 0x0).z = posZ;
  FIELD_U32(this, 0x48) = typeMask;
  FIELD_U8(this, 0x4C) = movementId;
  FIELD_U32(this, 0x38) = 0;
  FIELD_U32(this, 0x3C) = 0;
  FIELD_U32(this, 0x50) = 0;
  FIELD_U32(this, 0x80) = 0;
  FIELD_U8(this, 0x54) = 0;
  FIELD_U32(this, 0xAC) = 0;
  FIELD_U32(this, 0xB0) = 0;
  FIELD_U32(this, 0xB4) = 0;
  FIELD_U32(this, 0xB8) = 0;
  FIELD_U32(this, 0xBC) = 0;
  FIELD_F32(this, 0x58) = 1.0;
  FIELD_U32(this, 0x30) = 0;
  FIELD_U32(this, 0x44) = 0;
  FIELD_U8(this, 0x89) = 0;
  FIELD_U32(this, 0x8C) = 0;
  if ( MovementHandler_findMovementController(this) )
    v8 = &MovementHandler_StateID_Linked;
  else
    v8 = &MovementHandler_StateID_FindController;
  return StateMgr__changeState(&FIELD_U32(this, 0xD4).manager, &FIELD_U32(v8, 0x0));
}
