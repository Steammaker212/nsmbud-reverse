/* MovementHandler_initFromStruct
 * address: 0x606B09F0   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall MovementHandler_initFromStruct(MovementHandler *a1, int *info)
{
  float v3; // r3
  char v4; // r12
  int v5; // lr
  float v6; // r2
  float v7; // r1
  State *v8; // r1

  FIELD_U8(a1, 0x85) = *((_BYTE *)info + 32);
  FIELD_U8(a1, 0x86) = *((_BYTE *)info + 33);
  FIELD_U8(a1, 0x84) = *((_BYTE *)info + 34);
  FIELD_U32(a1, 0x24) = info[5];
  FIELD_U32(a1, 0x28) = info[6];
  FIELD_U32(a1, 0x2C) = info[7];
  FIELD_U32(a1, 0x68) = 0;
  FIELD_U32(a1, 0x6C) = 0;
  FIELD_U32(a1, 0xC0) = info[9];
  FIELD_U8(a1, 0x87) = *((_BYTE *)info + 40);
  v3 = *(float *)info;
  v4 = *((_BYTE *)info + 16);
  v5 = info[3];
  LODWORD(FIELD_U32(a1, 0xC).x) = *info;
  v6 = *((float *)info + 1);
  FIELD_U32(a1, 0xC).y = v6;
  v7 = *((float *)info + 2);
  FIELD_U32(a1, 0xC).z = v7;
  FIELD_U32(a1, 0x0).x = v3;
  FIELD_U32(a1, 0x0).y = v6;
  FIELD_U32(a1, 0x0).z = v7;
  FIELD_U32(a1, 0x48) = v5;
  FIELD_U8(a1, 0x4C) = v4;
  FIELD_U32(a1, 0x38) = 0;
  FIELD_U32(a1, 0x3C) = 0;
  FIELD_U32(a1, 0x50) = 0;
  FIELD_U32(a1, 0x80) = 0;
  FIELD_U8(a1, 0x54) = 0;
  FIELD_U32(a1, 0xBC) = 0;
  FIELD_U32(a1, 0xB8) = 0;
  FIELD_U32(a1, 0xB4) = 0;
  FIELD_U32(a1, 0xB0) = 0;
  FIELD_U32(a1, 0xAC) = 0;
  FIELD_F32(a1, 0x58) = 1.0;
  FIELD_U32(a1, 0x30) = 0;
  FIELD_U32(a1, 0x44) = 0;
  FIELD_U8(a1, 0x89) = 0;
  FIELD_U32(a1, 0x8C) = 0;
  if ( MovementHandler_findMovementController(a1) )
    v8 = &MovementHandler_StateID_Linked;
  else
    v8 = &MovementHandler_StateID_FindController;
  return StateMgr__changeState(&FIELD_U32(a1, 0xD4).manager, &FIELD_U32(v8, 0x0));
}
