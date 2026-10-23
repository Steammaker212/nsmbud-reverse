/* sub_603E9D34
 * address: 0x603E9D34   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E9D34(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 32);
  if ( v2 )
    FIELD_U32(a1, 32) = v2 - 1;
  result = (StateMethodExecuter *)sub_60407AB4(dword_60C9A1E0);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 108), (StateBase *)&dword_60C99A20);
  return result;
}
