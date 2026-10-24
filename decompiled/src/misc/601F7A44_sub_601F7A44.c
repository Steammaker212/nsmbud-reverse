/* sub_601F7A44
 * address: 0x601F7A44   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F7A44(StateMgr *a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0

  sub_601F74B4((int)a1);
  result = (StateMethodExecuter *)FIELD_U32(a1 + (11) * 16, 0x4);
  if ( (int)result >= 596523236 )
  {
    FIELD_U32(a1 + (56) * 16, 0xC) = (StateBase *)1077936128;
    v3 = sub_608332B0(&a1[5], &FIELD_U32(a1 + (52) * 16, 0x8));
    FIELD_U32(a1 + (55) * 16, 0x0) = (StateExecuter *)v3;
    FIELD_U32(a1 + (12) * 16, 0x0) = (StateExecuter *)v3;
    ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[4].methodExecuter.owner)(a1);
    return StateMgr__changeState(a1 + 18, (StateBase *)&unk_60C8BA90);
  }
  return result;
}
