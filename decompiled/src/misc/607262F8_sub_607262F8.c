/* sub_607262F8
 * address: 0x607262F8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607262F8(int a1, unsigned __int16 *a2)
{
  int v3; // r1
  unsigned int v4; // r5
  int v6; // r2
  int v7; // r1

  v3 = a2[1539];
  if ( v3 == 1 )
  {
    LOBYTE(v3) = 1;
LABEL_8:
    v4 = a2[1540];
    goto LABEL_9;
  }
  if ( v3 == 2 )
  {
    LOBYTE(v3) = 2;
    goto LABEL_8;
  }
  if ( v3 != 3 )
  {
    v4 = a2[1540];
LABEL_15:
    v6 = (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) * (unsigned __int64)v4) >> 32;
    v7 = a2[1544];
    a2[1544] = v6 + v7;
    return v6 + v7;
  }
  v4 = a2[1540];
  LOBYTE(v3) = 1;
  if ( v4 > 4 )
    return sub_607265C8(a1, a2);
LABEL_9:
  if ( v4 <= 2 )
    LOBYTE(v3) = 0;
  if ( v3 != 2 )
  {
    if ( v3 == 1 )
      return sub_607263C8(a1, a2);
    goto LABEL_15;
  }
  return sub_607264C8(a1, a2);
}
