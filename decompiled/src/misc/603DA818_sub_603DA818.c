/* sub_603DA818
 * address: 0x603DA818   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603DA818(int a1)
{
  FIELD_U32(a1, 1044) = 15;
  ((void (__fastcall *)(int))loc_603DA84C)(a1);
  return StateMgr__changeState((StateMgr *)(a1 + 1068), (StateBase *)&dword_60C99178);
}
