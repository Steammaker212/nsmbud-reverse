/* sub_608248C4
 * address: 0x608248C4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_608248C4(int **a1)
{
  sead_IDisposer *v2; // r0

  v2 = (sead_IDisposer *)operator_new_8DE25C(0x42ECu, (void *)(*a1)[(*a1)[5]], 4);
  return LayerMgr_ref(v2, a1);
}
