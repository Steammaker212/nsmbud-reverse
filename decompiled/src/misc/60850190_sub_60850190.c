/* sub_60850190
 * address: 0x60850190   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (*__fastcall sub_60850190(_DWORD *a1, int a2))()
{
  bool v3; // zf
  int (*result)(); // r0

  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 84))(a2) == 1;
  result = 0;
  *a1 = 0;
  if ( v3 )
    result = sub_60850278;
  a1[1] = result;
  a1[2] = 0;
  return result;
}
