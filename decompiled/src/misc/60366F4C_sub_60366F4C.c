/* sub_60366F4C
 * address: 0x60366F4C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60366F4C(int a1)
{
  int v2; // r1
  int result; // r0

  v2 = damage_ref_366FA4();
  result = 2;
  if ( v2 == 1 )
  {
    FIELD_U32(a1, 116) = 1158455296;
    FIELD_U32(a1, 160) = -536870912;
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C95C10);
    sub_60367188(a1);
    return 1;
  }
  return result;
}
