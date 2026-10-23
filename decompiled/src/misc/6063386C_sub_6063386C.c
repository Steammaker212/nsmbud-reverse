/* sub_6063386C
 * address: 0x6063386C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6063386C(int a1)
{
  int *v2; // r1
  int v3; // r0
  StateMethodExecuter *result; // r0

  v2 = (int *)(a1 + 6776);
  v3 = FIELD_U32(a1, 6776) + 1;
  *v2 = v3;
  if ( v3 == 60 || (result = (StateMethodExecuter *)sub_60634E38(), result == (StateMethodExecuter *)1) )
  {
    FIELD_U8(a1, 535) = 1;
    FIELD_U32(a1, 6784) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB43E4);
  }
  return result;
}
