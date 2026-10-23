/* sub_604F9CBC
 * address: 0x604F9CBC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F9CBC(int a1)
{
  int v2; // r0
  int v3; // r1
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 3680);
  v3 = v2;
  if ( v2 != 1 )
    v3 = 2;
  if ( !v2 )
    v3 = 0;
  result = (StateMethodExecuter *)sub_6050A8AC(*(_DWORD *)(a1 + 4 * v3 + 3668));
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA6F94);
  return result;
}
