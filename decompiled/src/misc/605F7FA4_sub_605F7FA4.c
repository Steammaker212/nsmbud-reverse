/* sub_605F7FA4
 * address: 0x605F7FA4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall sub_605F7FA4(Enemy *a1, ActorBuildInfo *a2)
{
  Enemy *result; // r0

  result = Enemy__ctor(a1, a2);
  FIELD_U32(result, 0x0)._._._.vtable = (int)off_60C0CA60;
  result[1]._._._._.id = 0;
  *(_DWORD *)&result[1]._._._._.field_10 = 0;
  LOBYTE(result[1]._._._._.settigns2) = 1;
  result[1]._._._._.field_20.next = (sead_ListNode *)-1;
  return result;
}
