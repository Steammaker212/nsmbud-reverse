/* sub_608B8294
 * address: 0x608B8294   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B8294(int a1, unsigned int a2, int a3)
{
  unsigned int v4; // r6
  int v5; // r4
  bool v6; // zf
  int v7; // r0

  v4 = a2;
  if ( !*(_BYTE *)(a1 + 12 * a3 + 416) )
    return 0;
  if ( a2 )
  {
    v5 = 61;
    do
    {
      v6 = (v4 & 1) == 0;
      if ( (v4 & 1) != 0 )
        v6 = *(_DWORD *)(a1 + 4 * v5) == 0;
      if ( !v6 )
        sub_608BBAEC();
      if ( !(v4 >> 1) )
        break;
      v7 = v5 - 60;
      ++v5;
      v4 >>= 1;
    }
    while ( v7 < 16 );
  }
  return 1;
}
