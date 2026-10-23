/* sub_60424088
 * address: 0x60424088   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60424088(StateMethodExecuter *result)
{
  int owner; // r1
  int v2; // r2
  float v3; // s0

  if ( BYTE1(result[1].currentState) )
    return StateMgr__changeState((StateMgr *)&result[4].currentState, (StateBase *)&dword_60C9BB74);
  owner = (int)FIELD_U32(result, 0x4);
  v2 = *(_DWORD *)(**(_DWORD **)(FIELD_U32(dword_60C9A698, 229616) + 4 * (int)FIELD_U32(result, 0x0)) + 60);
  if ( v2 < 1 )
    v3 = 0.0;
  else
    v3 = (float)owner / (float)v2;
  *(float *)&result[1].vtable = v3;
  if ( owner < 1 )
    LOBYTE(result[1].currentState) = 1;
  else
    FIELD_U32(result, 0x4) = (void *)(owner - 1);
  return result;
}
