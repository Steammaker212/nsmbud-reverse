/* sub_605F0D28
 * address: 0x605F0D28   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605F0D28(StateMethodExecuter *result)
{
  int v1; // r12
  int v2; // r1
  int currentState; // r2
  int v4; // r1

  if ( FIELD_U8(dword_60C99DD4, 292) )
    v1 = FIELD_U32(dword_60C99DD4, 344);
  else
    v1 = 0;
  if ( FIELD_U8(dword_60C99DD4, 364) )
    v1 += FIELD_U32(dword_60C99DD4, 416);
  if ( FIELD_U8(dword_60C99DD4, 436) )
    v1 += FIELD_U32(dword_60C99DD4, 488);
  if ( FIELD_U8(dword_60C99DD4, 508) )
    v1 += FIELD_U32(dword_60C99DD4, 560);
  v2 = FIELD_U8(dword_60C99DD4, 733) != 255;
  if ( FIELD_U8(dword_60C99DD4, 734) != 255 )
    ++v2;
  currentState = result[572].currentState;
  if ( FIELD_U8(dword_60C99DD4, 735) != 255 )
    ++v2;
  if ( v2 > currentState )
    result[572].currentState = ++currentState;
  v4 = v1 - result[571].currentState + 10 * (currentState - (unsigned int)result[572].vtable);
  if ( v4 < 0 )
    v4 = -v4;
  if ( v4 >= (int)result[572].owner )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CB20C8);
  return result;
}
