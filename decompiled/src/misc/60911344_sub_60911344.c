/* sub_60911344
 * address: 0x60911344   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60911344(int *a1, int *a2, int *a3)
{
  int v3; // r1
  int v4; // r0
  int v5; // r2
  int v6; // r2
  int v7; // r1

  v3 = *a2;
  v4 = *a1;
  v5 = *a3;
  if ( v3 < 3 )
    --v4;
  v6 = v4 + v5;
  if ( v3 < 3 )
    v3 += 12;
  v7 = (unsigned __int64)(1717986919LL * (26 * v3 + 16)) >> 32;
  return (int)(v6 + v4 / 4 + v4 / -100 + v4 / 400 + (v7 >> 2) + ((unsigned int)v7 >> 31)) % 7;
}
