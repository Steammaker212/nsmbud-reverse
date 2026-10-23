/* sub_607DD6A0
 * address: 0x607DD6A0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DD6A0(_DWORD *a1, unsigned int a2)
{
  int v2; // r5

  v2 = 3587;
  if ( a2 == 200 * (a2 / 0xC8) )
  {
    v2 = 0;
    *a1 = 0;
    a1[1] = 167772160;
    a1[2] = 0;
    a1[3] = 0;
    a1[4] = 335544320;
    a1[5] = 0;
    a1[6] = 0x100000000uLL / a2;
    a1[7] = a2 / 0xC8;
  }
  return v2;
}
