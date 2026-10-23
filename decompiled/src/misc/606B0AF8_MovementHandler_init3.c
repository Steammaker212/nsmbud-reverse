/* MovementHandler_init3
 * address: 0x606B0AF8   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall MovementHandler_init3(
        MovementHandler *this,
        float *a2,
        int a3,
        char a4,
        int *a5,
        char a6,
        char a7,
        char a8,
        int a9)
{
  float v10; // lr
  float v11; // r0
  float v12; // r1
  State *v13; // r1

  FIELD_U8(this, 0x85) = a6;
  FIELD_U8(this, 0x86) = a7;
  FIELD_U8(this, 0x84) = a8;
  FIELD_U32(this, 0x24) = *a5;
  FIELD_U32(this, 0x28) = a5[1];
  FIELD_U32(this, 0x2C) = a5[2];
  FIELD_U32(this, 0x68) = 0;
  FIELD_U32(this, 0x6C) = 0;
  FIELD_U32(this, 0xC0) = a9;
  FIELD_U8(this, 0x87) = 0;
  FIELD_U8(this, 0x88) = 0;
  v10 = *a2;
  FIELD_F32(this, 0xC) = *a2;
  v11 = a2[1];
  FIELD_F32(this, 0x10) = v11;
  v12 = a2[2];
  FIELD_F32(this, 0x14) = v12;
  FIELD_F32(this, 0x0) = v10;
  FIELD_F32(this, 0x4) = v11;
  FIELD_F32(this, 0x8) = v12;
  FIELD_U32(this, 0x48) = a3;
  FIELD_U8(this, 0x4C) = a4;
  FIELD_U32(this, 0x38) = 0;
  FIELD_U32(this, 0x3C) = 0;
  FIELD_U32(this, 0x50) = 0;
  FIELD_U32(this, 0x80) = 0;
  FIELD_U8(this, 0x54) = 0;
  FIELD_U32(this, 0xBC) = 0;
  FIELD_U32(this, 0xB8) = 0;
  FIELD_U32(this, 0xB4) = 0;
  FIELD_U32(this, 0xB0) = 0;
  FIELD_U32(this, 0xAC) = 0;
  FIELD_F32(this, 0x58) = 1.0;
  FIELD_U32(this, 0x30) = 0;
  FIELD_U32(this, 0x44) = 0;
  FIELD_U8(this, 0x89) = 0;
  FIELD_U32(this, 0x8C) = 0;
  if ( MovementHandler_findMovementController(this) )
    v13 = &MovementHandler_StateID_Linked;
  else
    v13 = &MovementHandler_StateID_FindController;
  return StateMgr__changeState(&FIELD_U32(this, 0xE8), &FIELD_U32(v13, 0x0));
}
