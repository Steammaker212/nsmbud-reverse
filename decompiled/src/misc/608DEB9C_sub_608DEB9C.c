/* sub_608DEB9C
 * address: 0x608DEB9C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DEB9C(int *a1, int a2, int a3, int a4)
{
  int v4; // r4
  int result; // r0
  bool v7; // cc

  v4 = a3;
  result = a3 | a2;
  v7 = (a3 | a2) < 0;
  if ( (a3 | a2) >= 0 )
  {
    a3 = *a1;
    a4 = v4 + a2;
    v7 = *a1 < v4 + a2;
  }
  if ( !v7 )
  {
    memmove((void *)(a1[2] + 4 * a2), (const void *)(a1[2] + 4 * a4), 4 * (a3 - a4));
    result = *a1 - v4;
    *a1 = result;
  }
  return result;
}
