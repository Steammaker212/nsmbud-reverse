/* sub_602A8C84
 * address: 0x602A8C84   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall sub_602A8C84(Enemy *a1, ActorBuildInfo *a2)
{
  Enemy *result; // r0

  result = Enemy__ctor(a1, a2);
  FIELD_U32(result, 0x0) = (int)off_60BE2BF4;
  LOWORD(result[1]._._._._.settings1) = 0;
  *(_DWORD *)&result[1]._._._._.field_10 = 0;
  result[1]._._._._.profile = 0;
  result[1]._._._._.id = 0;
  result[1]._._._._.vtable = 0;
  result[1]._._._._.heap = 0;
  return result;
}
