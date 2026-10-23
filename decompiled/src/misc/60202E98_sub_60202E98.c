/* sub_60202E98
 * address: 0x60202E98   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60202E98(int a1)
{
  StateMgr *v1; // r4

  v1 = (StateMgr *)(a1 + 284);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  return StateMgr__changeState(v1, &stru_60C8C4B8);
}
