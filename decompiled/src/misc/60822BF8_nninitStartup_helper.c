/* nninitStartup_helper
 * address: 0x60822BF8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *nninitStartup_helper()
{
  __int64 v1; // [sp+0h] [bp-10h] BYREF

  nn__os__GetSystemTick((nn__os *)&v1);
  *(_QWORD *)&dword_60CC6DD8 = v1;
  return &unk_60CC6DD0;
}
