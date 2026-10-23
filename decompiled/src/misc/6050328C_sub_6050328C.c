/* sub_6050328C
 * address: 0x6050328C   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6050328C(int a1)
{
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA7728);
}
