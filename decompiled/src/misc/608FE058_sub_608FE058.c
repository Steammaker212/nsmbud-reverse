/* sub_608FE058
 * address: 0x608FE058   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608FE058(int *a1, _BYTE *a2, signed int a3)
{
  signed int v4; // r5
  int v5; // r6
  int v6; // r0
  int v7; // r2
  int v9; // r7

  v4 = a3;
  v5 = *a1;
  v6 = a1[2];
  if ( a3 == -1 )
  {
    v7 = 0;
    while ( a2[v7++] )
      ;
    v4 = v7 - 1;
  }
  v9 = a1[1];
  if ( v9 + v4 >= v6 )
    v4 = v6 - 1 - v9;
  if ( v4 < 1 )
    return 0;
  qmemcpy((void *)(v5 + v9), a2, v4);
  *(_BYTE *)(v5 + v4 + v9) = 0;
  a1[1] = v4 + v9;
  return v4;
}
