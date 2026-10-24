/* sub_60529FCC
 * address: 0x60529FCC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60529FCC(int a1)
{
  StateMethodExecuter *result; // r0

  result = *(StateMethodExecuter **)(FIELD_U32(a1, 60) + 4);
  if ( FIELD_U32(result + (2) * 12, 0x4) != (void *)192 )
  {
    (*((void (__fastcall **)(StateMethodExecuter *, int, float, float, float))FIELD_U32(result, 0x0) + 21))(
      result,
      192,
      1.0,
      10.0,
      0.0);
    FIELD_U8(a1, 3054) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CAA15C);
  }
  return result;
}
