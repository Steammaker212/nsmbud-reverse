/* Actor_akutaburokuPSwitch_build
 * address: 0x60575584   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_akutaburokuPSwitch_build(int a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1CE0u);
  result = (_DWORD *)BlockBase__ctor(v2, a1);
  *result = &off_60C03D58;
  result[1847] = 0;
  return result;
}
