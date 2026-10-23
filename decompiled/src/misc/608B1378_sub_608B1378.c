/* sub_608B1378
 * address: 0x608B1378   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1378(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  unsigned int v7; // r2

  sub_608C6F90(a2, a3);
  result = 0;
  v7 = (a2 + 4095) & 0xFFFFF000;
  if ( v7 <= a2 + a3 )
  {
    a1[2] = v7;
    a1[3] = a2 + a3;
    a1[4] = v7;
    return 1;
  }
  return result;
}
