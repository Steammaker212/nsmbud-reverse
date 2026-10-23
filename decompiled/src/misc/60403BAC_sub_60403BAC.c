/* sub_60403BAC
 * address: 0x60403BAC   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60403BAC(int a1)
{
  FIELD_U8(a1, 2697) = 0;
  FIELD_U32(a1, 440) = 0;
  FIELD_U32(a1, 444) = 0;
  FIELD_U32(a1, 448) = 0;
  return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)&dword_60C99EBC);
}
