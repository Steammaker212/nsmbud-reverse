/* sub_608C3F08
 * address: 0x608C3F08   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_608C3F08(_QWORD *a1)
{
  __int64 result; // r0
  __int64 v3; // [sp+0h] [bp-10h] BYREF

  nn__os__GetSystemTick((nn__os *)&v3);
  result = v3;
  *a1 = v3;
  return result;
}
