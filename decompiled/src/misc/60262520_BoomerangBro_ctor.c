/* BoomerangBro_ctor
 * address: 0x60262520   size: 72   group: misc
 * sym: # BoomerangBro_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall BoomerangBro_ctor(int a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x30C0u);
  result = (_DWORD *)BrosBase_ctor(v2, a1);
  *result = BoomerangBro_vtable;
  result[3117] = 0;
  result[3118] = 1;
  return result;
}
