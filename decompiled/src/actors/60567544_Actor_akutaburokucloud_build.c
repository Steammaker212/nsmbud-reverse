/* Actor_akutaburokucloud_build
 * address: 0x60567544   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_akutaburokucloud_build(int a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1CF0u);
  result = (_DWORD *)BlockBase__ctor(v2, a1);
  *result = &off_60C01A00;
  result[1851] = 0;
  result[1850] = 0;
  result[1848] = 0;
  result[1849] = 0;
  return result;
}
