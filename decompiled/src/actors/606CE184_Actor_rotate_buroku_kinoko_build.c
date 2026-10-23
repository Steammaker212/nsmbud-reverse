/* Actor_rotate_buroku_kinoko_build
 * address: 0x606CE184   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_rotate_buroku_kinoko_build(int a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1B08u);
  result = (_DWORD *)sub_606CA9C4(v2, a1);
  *result = &off_60C1D3AC;
  result[1729] = 0;
  return result;
}
