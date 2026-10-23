/* sub_608EC968
 * address: 0x608EC968   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608EC968(int a1, int a2, int a3, int a4)
{
  int v4; // r2
  _DWORD *result; // r0

  v4 = a3 + a2;
  result = (_DWORD *)(a1 + 476);
  *result = a2;
  result[1] = v4;
  result[2] = v4 + a4;
  return result;
}
