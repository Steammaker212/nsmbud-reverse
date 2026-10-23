/* sub_60378048
 * address: 0x60378048   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60378048(_DWORD *a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(a1[1525] + 4) + 84))(
             *(_DWORD *)(a1[1525] + 4),
             0,
             1.0,
             0.0,
             0.0);
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[22] = 0;
  a1[25] = 0;
  return result;
}
