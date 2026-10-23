/* sub_6027CA1C
 * address: 0x6027CA1C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027CA1C(Enemy *a1)
{
  unsigned int heap; // r1
  int v3; // r0

  heap = a1[1]._._._._.heap;
  if ( heap )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, heap);
    if ( v3 )
      FIELD_U8(v3, 10566) = 1;
    a1[1]._._._._.heap = 0;
  }
  return Enemy__vf1D4(a1);
}
