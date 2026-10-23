/* sub_602025A8
 * address: 0x602025A8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602025A8(int a1)
{
  StateMethodExecuter *result; // r0

  ((void (*)(void))loc_60168DF8)();
  FIELD_F32(a1, 200) = FIELD_F32(a1, 200) * 0.8;
  result = (StateMethodExecuter *)moveValueTo((int *)(a1 + 180), (int *)(a1 + 552), (int *)&unk_60C8C5C0);
  if ( result == (StateMethodExecuter *)1 )
  {
    FIELD_U32(a1, 192) = FIELD_U32(a1, 180);
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8C438);
  }
  return result;
}
