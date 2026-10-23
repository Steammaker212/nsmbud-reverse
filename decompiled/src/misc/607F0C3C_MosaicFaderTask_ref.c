/* MosaicFaderTask_ref
 * address: 0x607F0C3C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall MosaicFaderTask_ref(_DWORD *a1, int a2)
{
  sub_607EFFF8((int)a1, a2, "MosaicFaderTask");
  *a1 = &off_60C272CC;
  a1[142] = 0;
  sub_608EC968(a1, 40, 1, 40);
  return a1;
}
