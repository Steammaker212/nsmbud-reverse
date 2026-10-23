/* sub_607B0D70
 * address: 0x607B0D70   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B0D70(unsigned __int8 *a1)
{
  int result; // r0

  sub_60774D2C((int)a1);
  (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 1400))(a1);
  result = a1[1233];
  if ( (result & 0x80) == 0 )
    return sub_60773630((int)a1, 49, 0);
  return result;
}
