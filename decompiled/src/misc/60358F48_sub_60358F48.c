/* sub_60358F48
 * address: 0x60358F48   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60358F48(_DWORD *a1)
{
  int v2; // r1
  _DWORD *v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int result; // r0

  v3 = a1 + 1869;
  v2 = a1[1869];
  a1[1707] = 0;
  v4 = a1[1705];
  if ( v2 )
  {
    sub_60421AD4(v4);
    v5 = 6;
  }
  else
  {
    sub_60421AD4(v4);
    v5 = 4;
  }
  a1[1714] = v5;
  a1[30] = 0;
  v6 = dword_60AF20E0[*v3];
  if ( a1[20] )
    v6 = -v6;
  if ( v6 < 0 && v6 != 0x80000000 )
    v6 = -v6;
  result = (int)(float)((float)v6 / (float)v5);
  a1[1715] = result;
  return result;
}
