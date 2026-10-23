/* sub_606B0DAC
 * address: 0x606B0DAC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606B0DAC(MovementHandler *a1, float *a2, int a3, char a4, float a5, int a6)
{
  float v7; // r12
  int v8; // r0
  int v9; // r1
  State *v10; // r1

  *(float *)&FIELD_U32(a1, 0xD0) = a5;
  FIELD_U32(a1, 0x74) = a6;
  v7 = *a2;
  FIELD_F32(a1, 0xC) = *a2;
  v8 = *((_DWORD *)a2 + 1);
  LODWORD(FIELD_F32(a1, 0x10)) = v8;
  v9 = *((_DWORD *)a2 + 2);
  LODWORD(FIELD_F32(a1, 0x14)) = v9;
  FIELD_F32(a1, 0x0) = v7;
  LODWORD(FIELD_F32(a1, 0x4)) = v8;
  LODWORD(FIELD_F32(a1, 0x8)) = v9;
  FIELD_U32(a1, 0x48) = a3;
  FIELD_U8(a1, 0x4C) = a4;
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
    v10 = &MovementHandler_StateID_Linked;
  else
    v10 = &MovementHandler_StateID_FindController;
  return StateMgr__changeState(&FIELD_U32(a1, 0xE8), &FIELD_U32(v10, 0x0));
}
