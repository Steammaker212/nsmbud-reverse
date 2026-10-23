/* sub_60779F28
 * address: 0x60779F28   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60779F28(int a1, _DWORD *a2, int a3)
{
  StateMethodExecuter *result; // r0

  FIELD_U32(a1, 320) = a2[27];
  FIELD_U32(a1, 324) = a2[28];
  FIELD_U32(a1, 328) = a2[29];
  FIELD_U32(a1, 332) = 0;
  FIELD_U32(a1, 336) = a3;
  result = StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CBFB34);
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 56) = 0;
  return result;
}
