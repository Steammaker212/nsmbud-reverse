/* sub_609085CC
 * address: 0x609085CC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_609085CC()
{
  _DWORD v1[4]; // [sp+0h] [bp-10h] BYREF

  nn__os__ConvertToTimeSpan(v1);
  return nn__os__SleepThread(v1[0], v1[1]);
}
