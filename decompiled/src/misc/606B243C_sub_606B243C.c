/* sub_606B243C
 * address: 0x606B243C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606B243C(StateMethodExecuter *result)
{
  int owner; // r1
  int v2; // r2
  int v3; // r1
  __int64 v4; // r2

  owner = (int)result[3].owner;
  if ( owner >= 1 )
    result[3].owner = (void *)(owner - 1);
  v2 = BYTE1(result[1].currentState);
  v3 = v2 - 33;
  HIDWORD(v4) = 1u >> (33 - v2);
  LODWORD(v4) = 1 << (v2 - 1);
  if ( v3 >= 0 )
  {
    HIDWORD(v4) = 1 << v3;
    LODWORD(v4) = 0;
  }
  if ( (v4 & *(_QWORD *)(EventMgr__instance + 16)) != 0 )
  {
    if ( !BYTE1(result[4].owner) )
      return StateMgr__changeState((StateMgr *)&result[16].owner, &stru_60CBA30C);
  }
  else if ( BYTE1(result[4].owner) )
  {
    return StateMgr__changeState((StateMgr *)&result[16].owner, &stru_60CBA32C);
  }
  return result;
}
