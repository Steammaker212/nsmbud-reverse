/* sub_605E8C84
 * address: 0x605E8C84   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E8C84(_DWORD *a1, int a2)
{
  int v2; // r12
  int v3; // r2
  int v4; // r2
  int v5; // r3

  v2 = a1[7];
  v3 = a1[9];
  if ( v3 < v2 )
  {
    a1[9] = v3 + 1;
    v4 = a1[8] + v3;
    v5 = v4 - v2;
    if ( v4 < v2 )
      v5 = v4;
    *(_DWORD *)(a1[6] + 4 * v5) = a2;
    return a1[9];
  }
  return v3;
}
