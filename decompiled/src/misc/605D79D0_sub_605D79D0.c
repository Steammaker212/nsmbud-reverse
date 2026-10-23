/* sub_605D79D0
 * address: 0x605D79D0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605D79D0(int a1, StateBase *a2, int a3)
{
  FIELD_U32(a1, 8000) = a3;
  FIELD_U32(a1, 8004) = 0;
  FIELD_U32(a1, 8008) = 0;
  return StateMgr__changeState((StateMgr *)(a1 + 6292), a2);
}
