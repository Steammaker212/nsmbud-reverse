/* nnMain_helper
 * address: 0x608183C8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall nnMain_helper(_DWORD *a1)
{
  bool v2; // r1

  nnMain_helper_helper_8EA014();
  *a1 = off_60C2A12C;
  a1[88] = &off_60C2A1C8;
  a1[89] = 0;
  a1[90] = 0;
  dword_60CC6BB0 = (int)a1;
  nn__oe__SetOperationModeChangedNotificationEnabled((nn__oe *)1, 0);
  nn__oe__SetPerformanceModeChangedNotificationEnabled((nn__oe *)1, v2);
  return a1;
}
