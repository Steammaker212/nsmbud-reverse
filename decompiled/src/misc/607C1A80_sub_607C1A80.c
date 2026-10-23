/* sub_607C1A80
 * address: 0x607C1A80   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C1A80(int *a1)
{
  _BYTE *v2; // r0
  int v3; // r5

  sub_607C1784((int)a1);
  a1[307] |= 0x20400u;
  v2 = a1 + 3043;
  if ( a1[2484] == 1 )
  {
    v3 = 0x20000000;
    *v2 = 1;
  }
  else
  {
    v3 = 0;
    *v2 = 0;
    a1[40] = sub_60773F3C((int)a1, a1[20]);
  }
  a1[3025] = v3;
  return 12100;
}
