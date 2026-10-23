/* sub_604C951C
 * address: 0x604C951C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C951C(int a1)
{
  unsigned int v2; // r0

  v2 = FIELD_U32(a1, 615700);
  if ( v2 >= 0xA )
    v2 = 0;
  ((void (__fastcall *)(unsigned int, int))loc_604D23A8)(a1 + 52644 * v2 + 89248, 6);
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA31D8);
}
