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

  currentState = result[252].currentState;
  vtable = result[253].vtable;
  if ( vtable != (void *)currentState )
  {
    if ( FIELD_U8(dword_60C99DEC, 522) )
    {
      v3 = result[252].currentState;
      if ( !currentState )
        v3 = 1;
      v4 = (float *)((char *)&unk_60AF2954 + 4 * v3);
      v5 = *(float *)&result[253].currentState;
    }
    else
    {
      v5 = *(float *)&result[253].currentState;
      if ( LOBYTE(result[255].owner) )
      {
        v6 = 80.5;
LABEL_14:
        *(float *)&result[217].owner = v5 + v6;
        if ( (unsigned int)vtable <= currentState )
        {
          result[229].currentState = 2;
          if ( BYTE2(result[227].currentState) || HIBYTE(result[227].currentState) )
            return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&unk_60CAA17C);
          v7 = 6;
        }
        else
        {
          result[229].currentState = 1;
          if ( BYTE2(result[227].currentState) || HIBYTE(result[227].currentState) )
            return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&unk_60CAA17C);
          v7 = 5;
        }
        HIBYTE(result[228].owner) = 1;
        HIBYTE(result[227].currentState) = 1;
        result[45].owner = (void *)v7;
        result[214].currentState = 0;
        result[217].vtable = (void *)1065353216;
        BYTE1(result[228].vtable) = 1;
        return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&unk_60CAA17C);
      }
      v4 = (float *)((char *)&unk_60AF2954 + 4 * currentState);
    }
    v6 = *v4;
    goto LABEL_14;
  }
  if ( LOBYTE(result[254].owner) )
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&unk_60CAA19C);
  if ( BYTE1(result[254].owner) )
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&unk_60CAA1DC);
  if ( BYTE2(result[254].owner) )
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&unk_60CAA21C);
  if ( HIBYTE(result[254].owner) )
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&unk_60CAA23C);
  return result;
}
