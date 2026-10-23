/* Actor_ringu_build
 * address: 0x605BDD44   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_ringu_build(int a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x18E8u);
  result = (_DWORD *)sub_606C6638(v2, a1);
  *result = off_60C09AD4;
  return result;
}
