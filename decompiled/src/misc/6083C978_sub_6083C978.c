/* sub_6083C978
 * address: 0x6083C978   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083C978(unsigned __int16 *a1)
{
  int v1; // r12
  __int16 *v2; // r3
  int v3; // r2
  int v4; // r1
  int v5; // t1
  int v6; // r1

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (__int16 *)(*((_DWORD *)a1 + 2) + 2);
    v3 = -1;
    do
    {
      v5 = *v2;
      v2 += 20;
      v4 = v5;
      if ( v3 < v5 )
        v3 = v4;
      if ( v4 < 0 )
        v3 = 15;
      --v1;
    }
    while ( v1 );
    v6 = 4 * v3 + 4;
  }
  else
  {
    v6 = 0;
  }
  return v6 + 8 * a1[1];
}
