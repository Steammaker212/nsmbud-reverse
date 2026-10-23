/* sub_6062820C
 * address: 0x6062820C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6062820C(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_606282C4();
  if ( result == (StateMethodExecuter *)1 )
  {
    FIELD_U16(a1, 6124) = FIELD_U8(a1, 7508) + 61;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&unk_60CB3B74);
  }
  return result;
}
