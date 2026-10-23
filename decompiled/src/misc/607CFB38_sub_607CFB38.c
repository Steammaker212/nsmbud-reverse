/* sub_607CFB38
 * address: 0x607CFB38   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607CFB38(int a1, StateBase *a2)
{
  FIELD_U32(a1, 11428) = 0;
  return StateMgr__changeState((StateMgr *)(a1 + 11404), a2);
}
