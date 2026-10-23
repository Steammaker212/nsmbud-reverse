/* sub_6099EB88
 * address: 0x6099EB88   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099EB88(_DWORD *a1, int a2)
{
  int v2; // r2
  unsigned int v3; // r3

  a1[20] = 3;
  v2 = 0;
  v3 = a1[30];
  if ( v3 < a1[28] )
  {
    a1[30] = v3 + 1;
    v2 = 1;
    *(_DWORD *)(a1[29] + 4 * v3) = a2;
  }
  return v2;
}
