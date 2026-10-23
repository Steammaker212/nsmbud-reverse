/* Actor_kibig_3_build
 * address: 0x605AF9E0   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *Actor_kibig_3_build()
{
  _DWORD *v0; // r0
  _DWORD *result; // r0

  v0 = (_DWORD *)operator_new(0x1AC0u);
  result = sub_605AD110(v0);
  *result = off_60C08E84;
  *((_BYTE *)result + 6840) = 0;
  return result;
}
