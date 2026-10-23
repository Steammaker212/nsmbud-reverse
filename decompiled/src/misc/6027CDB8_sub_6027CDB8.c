/* sub_6027CDB8
 * address: 0x6027CDB8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6027CDB8(Enemy *a1, int a2)
{
  unsigned int heap; // r1
  int v5; // r0

  heap = a1[1]._._._._.heap;
  if ( heap )
  {
    v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, heap);
    if ( v5 )
      FIELD_U8(v5, 10566) = 1;
    a1[1]._._._._.heap = 0;
  }
  return Enemy__vf1AC(a1, a2);
}
