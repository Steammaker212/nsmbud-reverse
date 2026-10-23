/* sub_60832338
 * address: 0x60832338   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60832338(int *result, int *a2, int *a3, int *a4, float a5)
{
  int v5; // r12
  int v6; // lr
  signed int v7; // r3
  signed int v8; // r2
  int v9; // r1
  int v10; // r4
  unsigned int v11; // r4
  int v12; // s0
  signed int v13; // r5
  int v14; // r2
  int v15; // r3

  v5 = *result;
  v6 = *a2;
  v7 = *a4;
  v8 = *a3;
  v9 = *a2 - *result;
  if ( (float)((float)v9 * a5) >= 0.0 )
  {
    v11 = v9;
    if ( v9 < 0 )
    {
      v11 = v9;
      if ( v9 != 0x80000000 )
        v11 = -v9;
    }
  }
  else
  {
    v10 = v9;
    if ( v9 < 0 )
    {
      v10 = v9;
      if ( v9 != 0x80000000 )
        v10 = -v9;
    }
    v11 = (0x80000000 - v10) ^ 0x80000000;
  }
  v12 = (int)(float)((float)v11 * a5);
  v13 = abs32(v12);
  if ( v13 <= v8 )
    v8 = v13;
  if ( v13 < v7 )
    v8 = v7;
  if ( v9 )
  {
    v14 = v8 * ((v12 >> 31) | 1);
    v15 = v9 - v14;
    if ( v14 < 1 )
    {
      if ( v9 < 0 && v15 > 0 )
        goto LABEL_22;
    }
    else if ( v9 >= 1 )
    {
      if ( v15 >= 0 )
        v6 = v14 + v5;
      *result = v6;
      return result;
    }
    v6 = v14 + v5;
LABEL_22:
    *result = v6;
  }
  return result;
}
