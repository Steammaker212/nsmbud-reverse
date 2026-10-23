/* sub_601E26E8
 * address: 0x601E26E8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601E26E8(int a1)
{
  StateMethodExecuter *result; // r0

  result = *(StateMethodExecuter **)(sub_601FEE28(dword_60C8C188) + 768);
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C89570);
  return result;
}
