/* sub_6040C110
 * address: 0x6040C110   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6040C110(int a1)
{
  FIELD_U8(a1, 2084) = 1;
  FIELD_U32(a1, 2072) = 0;
  return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60C9A274);
}
