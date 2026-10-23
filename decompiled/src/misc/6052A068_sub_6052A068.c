/* sub_6052A068
 * address: 0x6052A068   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6052A068(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_60793CA8(*(_DWORD *)(FIELD_U32(a1, 60) + 4));
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CAA25C);
  return result;
}
