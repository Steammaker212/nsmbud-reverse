/* MovementHandler_init2
 * address: 0x606B0BF8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall MovementHandler_init2(
        MovementHandler *this,
        Vec3 *position,
        int typeMask,
        char movementId,
        int _90,
        int _94_idx)
{
  float x; // r12
  float y; // r0
  float z; // r1
  State *v10; // r1

  FIELD_U32(this, 0x90) = _90;
  FIELD_U32(this, 0x94) = dword_60AF25D4[_94_idx];
  x = FIELD_F32(position, 0x0);
  FIELD_F32(this, 0xC) = FIELD_F32(position, 0x0);
  y = FIELD_F32(position, 0x4);
  FIELD_F32(this, 0x10) = y;
  z = FIELD_F32(position, 0x8);
  FIELD_F32(this, 0x14) = z;
  FIELD_F32(this, 0x0) = x;
  FIELD_F32(this, 0x4) = y;
  FIELD_F32(this, 0x8) = z;
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
    v10 = &MovementHandler_StateID_Linked;
  else
    v10 = &MovementHandler_StateID_FindController;
  return StateMgr__changeState(&FIELD_U32(this, 0xE8), &FIELD_U32(v10, 0x0));
}
