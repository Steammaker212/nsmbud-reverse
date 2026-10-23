/* sub_6054DC2C
 * address: 0x6054DC2C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6054DC2C(StateMethodExecuter *result)
{
  unsigned int currentState; // r3
  float v2; // s6
  float v3; // s4
  int v4; // r3
  int owner; // r1
  char v6; // r3
  int *v7; // r1
  float v8; // s2

  if ( HIBYTE(result[318].vtable) )
  {
    if ( result[316].vtable == (void *)15 )
    {
      currentState = result[317].currentState;
      v2 = *(float *)&result[314].vtable;
      v3 = *(float *)&result[315].owner;
      if ( currentState >= 8 )
        currentState = 0;
      v4 = *((_DWORD *)&result[304].vtable + currentState);
      FIELD_F32(v4, 48) = *(float *)&result[313].currentState + *(float *)&result[315].vtable;
      FIELD_F32(v4, 52) = v2 + v3;
      FIELD_U8(v4, 64) |= 0x10u;
      owner = (int)result[317].owner;
      result[317].owner = (void *)(owner + 1);
      if ( owner <= 8 )
      {
        v6 = (char)result[318].owner;
      }
      else
      {
        result[317].owner = 0;
        v6 = LOBYTE(result[318].owner) ^ 1;
        LOBYTE(result[318].owner) = v6;
      }
      v7 = dword_6054DD30;
      if ( !v6 )
        v7 = &dword_6054DD30[1];
      v8 = *(float *)v7;
      *(float *)&result[315].vtable = *(float *)&result[315].vtable + *(float *)v7;
      *(float *)&result[315].owner = v8 + *(float *)&result[315].owner;
    }
    result[316].currentState = 120;
  }
  if ( *(float *)&result[312].vtable == 0.0 )
    return StateMgr__changeState((StateMgr *)&result[2], &stru_60CACD8C);
  return result;
}
