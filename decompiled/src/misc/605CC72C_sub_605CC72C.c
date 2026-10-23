/* sub_605CC72C
 * address: 0x605CC72C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605CC72C(int a1, int a2)
{
  int v3; // r2
  _BYTE *v4; // r5
  char v5; // r6

  v3 = FIELD_S8(a2, 84);
  FIELD_U32(a1, 256) = a2;
  v4 = (_BYTE *)(a1 + 6112);
  v5 = v3;
  if ( FIELD_U8(a1, 6112) )
  {
    sub_60001688(a1, FIELD_U32(a1, 6100), v3);
    *v4 = 0;
  }
  FIELD_U8(a1, 84) = v5;
  return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB0EF0._._);
}
