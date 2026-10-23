/* Actor_1UPkinoko_build
 * address: 0x604698EC   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_1UPkinoko_build(ActorBuildInfo *a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1AB0u);
  result = (_DWORD *)sub_60466BC4(v2, a1);
  *result = off_60BFBE54;
  return result;
}
