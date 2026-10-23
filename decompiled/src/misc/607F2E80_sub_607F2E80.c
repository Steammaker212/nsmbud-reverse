/* sub_607F2E80
 * address: 0x607F2E80   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F2E80(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_604E60E8(FIELD_U32(dword_60C99DD4, 196));
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC6034);
  return result;
}
