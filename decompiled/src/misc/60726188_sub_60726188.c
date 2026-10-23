/* sub_60726188
 * address: 0x60726188   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60726188(int a1, int a2, int a3)
{
  char *v3; // r12
  int v4; // lr
  int v5; // r3
  char *v6; // lr

  v3 = *(char **)(a2 + 3072);
  v4 = *v3;
  if ( v4 < 0 )
    return sub_60725CF8(a1, a2, a3);
  v5 = 0;
  while ( (v4 & 2) == 0 )
  {
    v5 -= 2;
    do
    {
      v6 = &v3[v5];
      v5 += 3;
    }
    while ( (unsigned __int8)v6[2] != 254 );
    v4 = (unsigned __int8)v3[v5];
    if ( v4 == 255 )
      return sub_60725B38(a1, a2, a3, v5);
  }
  return sub_607257F4(a1, a2, a3, v5);
}
