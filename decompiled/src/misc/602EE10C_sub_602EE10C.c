/* sub_602EE10C
 * address: 0x602EE10C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602EE10C(int a1, int a2)
{
  int v2; // r5

  v2 = FIELD_S8(a2, 84);
  FIELD_U8(a1, 84) = v2;
  if ( FIELD_U8(a1, 6780) )
  {
    FIELD_U32(a1, 6252) = a2;
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 6356) + 16))(a1 + 6356);
  }
  sub_60001688(a1, 17, v2);
  return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C92664);
}
