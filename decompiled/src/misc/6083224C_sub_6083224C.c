/* sub_6083224C
 * address: 0x6083224C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6083224C(int *result, int *a2, signed int *a3, float a4)
{
  int v4; // r12
  int v5; // lr
  int v6; // r3
  int v7; // r1
  int v8; // s0
  int v9; // r2

  v4 = *result;
  v5 = *a2;
  v7 = *a2 - *result;
  v6 = v7;
  if ( v7 < 0 && v7 != 0x80000000 )
    v7 = -v7;
  v8 = (int)(float)((float)(unsigned int)v7 * a4);
  v9 = *a3;
  if ( v8 <= v9 )
    v9 = v8;
  if ( v8 < 0 )
    v9 = 0;
  if ( v6 <= v9 )
  {
    if ( v6 < -v9 )
      v5 = v4 - v9;
    *result = v5;
  }
  else
  {
    *result = v9 + v4;
  }
  return result;
}
