/* sub_601392B0
 * address: 0x601392B0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601392B0(int a1)
{
  StateMgr *v2; // r0
  StateBase *v3; // r1

  FIELD_U32(a1, 76) &= ~4u;
  FIELD_U8(a1, 537) = 0;
  v2 = (StateMgr *)(a1 + 6084);
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
    v3 = (StateBase *)&unk_60C87A10;
  else
    v3 = (StateBase *)&dword_60C878F4;
  return StateMgr__changeState(v2, v3);
}
