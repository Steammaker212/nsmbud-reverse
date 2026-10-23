/* sub_608F2B9C
 * address: 0x608F2B9C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *sub_608F2B9C()
{
  __int64 v1; // [sp+0h] [bp-10h] BYREF

  nn__os__GetSystemTick((nn__os *)&v1);
  qword_60CCEC30 = v1;
  return &qword_60CCEC30;
}
