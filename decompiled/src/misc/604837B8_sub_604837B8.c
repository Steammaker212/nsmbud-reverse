/* sub_604837B8
 * address: 0x604837B8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604837B8(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r1
  StateMethodExecuter *result; // r0

  v2 = 2;
  v3 = FIELD_U32(a1, 3648);
  if ( v3 <= 2 )
    v2 = dword_60B02B24[v3];
  if ( v2 >= 4 )
    v2 = 0;
  result = (StateMethodExecuter *)sub_6050A8AC(*(_DWORD *)(a1 + 4 * v2 + 3652));
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60C9F0D8);
  return result;
}
