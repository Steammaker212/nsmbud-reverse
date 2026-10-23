/* sub_6076F4D8
 * address: 0x6076F4D8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076F4D8(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r5

  v3 = a1 + 2486;
  result = a1[2486];
  if ( !result )
  {
    a1[2485] = 2;
    a1[26] = 1036831949;
    a1[23] = 0;
    a1[25] = *(_DWORD *)(*(int (__fastcall **)(_DWORD *))(*a1 + 1100))(a1);
    a1[24] = -1061158912;
    a1[31] = -1061158912;
    a1[302] |= 0x10000u;
    *v3 = 5;
    return 5;
  }
  return result;
}
