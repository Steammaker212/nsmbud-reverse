/* sub_60529BCC
 * address: 0x60529BCC   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60529BCC(StateMethodExecuter *result)
{
  unsigned int currentState; // r1
  void *vtable; // r12
  int v3; // r3
  float *v4; // r2
  float v5; // s0
  float v6; // s2
  int v7; // r2

  currentState = FIELD_U32(result + (252) * 12, 0x8);
  vtable = FIELD_U32(result + (253) * 12, 0x0);
  if ( vtable != (void *)currentState )
  {
    if ( FIELD_U8(dword_60C99DEC, 522) )
    {
      v3 = FIELD_U32(result + (252) * 12, 0x8);
      if ( !currentState )
        v3 = 1;
      v4 = (float *)((char *)&unk_60AF2954 + 4 * v3);
      v5 = *(float *)&result[253].currentState;
    }
    else
    {
      v5 = *(float *)&result[253].currentState;
      if ( LOBYTE(FIELD_U32(result + (255) * 12, 0x4)) )
      {
        v6 = 80.5;
LABEL_14:
        *(float *)&FIELD_U32(result + (217) * 12, 0x4) = v5 + v6;
        if ( (unsigned int)vtable <= currentState )
        {
          FIELD_U32(result + (229) * 12, 0x8) = 2;
          if ( BYTE2(result[227].currentState) || HIBYTE(result[227].currentState) )
            return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&unk_60CAA17C);
          v7 = 6;
        }
        else
        {
          FIELD_U32(result + (229) * 12, 0x8) = 1;
          if ( BYTE2(result[227].currentState) || HIBYTE(result[227].currentState) )
            return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&unk_60CAA17C);
          v7 = 5;
        }
        HIBYTE(result[228].owner) = 1;
        HIBYTE(result[227].currentState) = 1;
        FIELD_U32(result + (45) * 12, 0x4) = (void *)v7;
        FIELD_U32(result + (214) * 12, 0x8) = 0;
        FIELD_U32(result + (217) * 12, 0x0) = (void *)1065353216;
        BYTE1(result[228].vtable) = 1;
        return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&unk_60CAA17C);
      }
      v4 = (float *)((char *)&unk_60AF2954 + 4 * currentState);
    }
    v6 = *v4;
    goto LABEL_14;
  }
  if ( LOBYTE(FIELD_U32(result + (254) * 12, 0x4)) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&unk_60CAA19C);
  if ( BYTE1(FIELD_U32(result + (254) * 12, 0x4)) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&unk_60CAA1DC);
  if ( BYTE2(FIELD_U32(result + (254) * 12, 0x4)) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&unk_60CAA21C);
  if ( HIBYTE(FIELD_U32(result + (254) * 12, 0x4)) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&unk_60CAA23C);
  return result;
}
