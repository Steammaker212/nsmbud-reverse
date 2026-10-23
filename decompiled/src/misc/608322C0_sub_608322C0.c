/* sub_608322C0
 * address: 0x608322C0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608322C0(int *result, int *a2, signed int *a3, signed int *a4, float a5)
{
  int v5; // r12
  int v6; // lr
  int v7; // r1
  int v8; // r4
  int v9; // s0
  int v10; // r2
  int v11; // r3

  v5 = *result;
  v6 = *a2;
  v7 = *a2 - *result;
  v8 = v7;
  if ( v7 < 0 )
  {
    v8 = v7;
    if ( v7 != 0x80000000 )
      v8 = -v7;
  }
  v9 = (int)(float)((float)(unsigned int)v8 * a5);
  v10 = *a3;
  v11 = *a4;
  if ( v9 <= v10 )
    v10 = v9;
  if ( v9 < v11 )
    v10 = v11;
  if ( v7 <= v10 )
  {
    if ( v7 < -v10 )
      v6 = v5 - v10;
    *result = v6;
  }
  else
  {
    *result = v10 + v5;
  }
  return result;
}
