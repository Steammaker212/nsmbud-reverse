/* sub_60358C5C
 * address: 0x60358C5C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60358C5C(_DWORD *a1)
{
  int *v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r1
  int result; // r0

  v2 = a1 + 1869;
  a1[1707] = dword_60AF2714[a1[1713]];
  sub_60421AD4(a1[1705]);
  a1[30] = 0;
  v3 = 6;
  v4 = *v2;
  if ( !*v2 )
    v3 = 3;
  a1[1714] = v3;
  v5 = dword_60AF20E0[v4];
  if ( a1[20] )
    v5 = -v5;
  if ( v5 < 0 && v5 != 0x80000000 )
    v5 = -v5;
  result = (int)(float)((float)v5 / (float)v3);
  a1[1715] = result;
  return result;
}
