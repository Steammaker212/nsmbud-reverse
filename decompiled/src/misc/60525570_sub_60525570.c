/* sub_60525570
 * address: 0x60525570   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60525570(StateMethodExecuter *result)
{
  char *owner; // r2
  char *v2; // r2
  int v3; // r1
  int v4; // r1
  StateMgr *v5; // r0
  StateBase *v6; // r1

  owner = (char *)result[388].owner;
  if ( !owner || (v2 = owner - 1, (result[388].owner = v2) == 0) )
  {
    v3 = dword_60C99DEC;
    FIELD_U32(dword_60C99DEC, 100) = 0;
    FIELD_U32(v3, 172) = 0;
    FIELD_U32(v3, 244) = 0;
    FIELD_U32(v3, 316) = 0;
    FIELD_U8(v3, 478) = -1;
    FIELD_U8(v3, 477) = -1;
    FIELD_U8(v3, 479) = -1;
    result[388].currentState = 5;
    v4 = BYTE1(result[389].owner);
    v5 = (StateMgr *)&result[2];
    if ( v4 )
      v6 = &stru_60CA9D24;
    else
      v6 = &stru_60CA9CA4;
    return StateMgr__changeState(v5, v6);
  }
  return result;
}
