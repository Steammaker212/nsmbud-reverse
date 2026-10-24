/* sub_604C2720
 * address: 0x604C2720   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C2720(StateMethodExecuter *result)
{
  char *owner; // r1
  int *v2; // r1
  StateMgr *v3; // r0
  int *v4; // r1
  int v5; // r1

  owner = (char *)result[1178].owner;
  if ( (unsigned int)(owner - 1) < 2 )
  {
    v2 = &dword_60CA2D8C;
    goto LABEL_9;
  }
  if ( owner != (char *)10 )
  {
    v2 = &dword_60CA2D0C;
LABEL_9:
    FIELD_U32(result + (3) * 12, 0x4) = v2;
    v5 = BYTE2(result[1181].vtable);
    v3 = (StateMgr *)&result[2];
    if ( v5 )
      v4 = &dword_60CA2CCC;
    else
      v4 = &dword_60CA2CEC;
    return StateMgr__changeState(v3, (StateBase *)v4);
  }
  if ( FIELD_U8(dword_60C89E18, 156940) )
  {
    v3 = (StateMgr *)&result[2];
    v4 = &dword_60CA2D8C;
    return StateMgr__changeState(v3, (StateBase *)v4);
  }
  if ( FIELD_U8(dword_60C89E18, 254212) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA2D8C);
  if ( HIBYTE(result[1180].vtable) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA2C6C);
  return result;
}
