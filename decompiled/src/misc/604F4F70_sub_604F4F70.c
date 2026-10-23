/* sub_604F4F70
 * address: 0x604F4F70   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F4F70(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6
  StateMethodExecuter *result; // r0

  v3 = (_DWORD *)(a1 + 9636);
  v2 = *(_DWORD **)(a1 + 9636);
  sub_6050229C(v2 + 930);
  sub_60473B58(v2, 0xEu, 0);
  SE_SYS_BACK_ref_4F7D9C(*v3, v3 - 623);
  result = *(StateMethodExecuter **)(*v3 + 5804);
  if ( result )
    return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA69DC);
  return result;
}
