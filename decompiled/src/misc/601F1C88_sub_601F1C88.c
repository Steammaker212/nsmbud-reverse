/* sub_601F1C88
 * address: 0x601F1C88   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F1C88(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)((int (*)(void))loc_60168DF8)();
  if ( FIELD_F32(a1, 84) < FIELD_F32(a1, 608) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    FIELD_U32(a1, 204) = 0;
    FIELD_U32(a1, 120) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 288), (StateBase *)&unk_60C8B708);
  }
  return result;
}
