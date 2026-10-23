/* sub_604942F0
 * address: 0x604942F0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604942F0(int a1)
{
  StateMethodExecuter *result; // r0
  StateBase *v3; // r1

  result = (StateMethodExecuter *)dword_60CC6E04;
  if ( FIELD_U32(dword_60CC6E04, 24) != 1 )
  {
    if ( FIELD_U32(dword_60CC6E04, 28) || sub_60828E1C(dword_60CC6E04, FIELD_U32(a1, 5944)) != 1 )
      v3 = (StateBase *)&unk_60CA0110;
    else
      v3 = (StateBase *)&unk_60CA00F0;
    return StateMgr__changeState((StateMgr *)(a1 + 20), v3);
  }
  return result;
}
