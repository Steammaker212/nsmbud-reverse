/* Actor_rotate_control_for_through_koin_build
 * address: 0x60588AD4   size: 88   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_rotate_control_for_through_koin_build(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)operator_new(0x1DE0u);
  CoinBase__ctor((int)v2, a1);
  *v2 = &off_60C062F0;
  memset(v2 + 1871, 0, 34);
  memset(v2 + 1880, 0, 128);
  return v2;
}
