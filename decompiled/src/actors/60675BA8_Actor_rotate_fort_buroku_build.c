/* Actor_rotate_fort_buroku_build
 * address: 0x60675BA8   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_rotate_fort_buroku_build(int a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1B10u);
  result = (_DWORD *)sub_606CA9C4(v2, a1);
  *result = &off_60C15E28;
  result[1730] = 0;
  result[1731] = 0;
  return result;
}
