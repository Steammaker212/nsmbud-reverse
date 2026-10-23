/* sub_6072A30C
 * address: 0x6072A30C   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6072A30C(_DWORD *result)
{
  int v1; // r3
  int v2; // r2
  char v3; // lr
  _DWORD *v4; // r1
  int v5; // r4
  int v6; // r4
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r3
  char v11; // r1
  _DWORD *v12; // r2

  v1 = 0;
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = &result[v1];
    v5 = result[v1 + 7];
    if ( v5 != 2 )
    {
      if ( v5 != 1 )
        goto LABEL_6;
      v3 = 1;
      v4[7] = 2;
    }
    v2 = 1;
LABEL_6:
    v6 = v4[10];
    if ( v6 == 1 )
    {
      v3 = 1;
      v2 = 1;
      v4[10] = 2;
    }
    else if ( v6 == 2 )
    {
      v2 = 1;
    }
    v1 += 6;
  }
  while ( v1 != 192 );
  v7 = result[584];
  if ( v7 == 2 )
    goto LABEL_15;
  if ( v7 == 1 )
  {
    v3 = 1;
    result[584] = 2;
LABEL_15:
    v2 = 1;
  }
  v8 = result[585];
  if ( v8 == 1 )
  {
    v3 = 1;
    v2 = 1;
    result[585] = 2;
  }
  else if ( v8 == 2 )
  {
    v2 = 1;
  }
  v9 = result[586];
  if ( v9 == 2 )
    goto LABEL_25;
  if ( v9 == 1 )
  {
    result[586] = 2;
    return (_DWORD *)sub_60816D48(dword_60CC6B68, 8, v2);
  }
  if ( (v2 & 1) != 0 )
  {
LABEL_25:
    if ( (v3 & 1) != 0 )
      return (_DWORD *)sub_60816D48(dword_60CC6B68, 8, v2);
  }
  else
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = &result[v10];
      v10 += 6;
      if ( v12[7] == 3 )
      {
        v12[7] = 0;
        v11 = 1;
      }
      if ( v12[10] == 3 )
      {
        v12[10] = 0;
        v11 = 1;
      }
    }
    while ( v10 != 192 );
    if ( result[584] == 3 )
    {
      result[584] = 0;
      v11 = 1;
    }
    if ( result[585] == 3 )
    {
      result[585] = 0;
      v11 = 1;
    }
    if ( result[586] == 3 )
    {
      result[586] = 0;
    }
    else if ( (v11 & 1) == 0 )
    {
      return result;
    }
    return (_DWORD *)sub_60816F60(dword_60CC6B68, 8);
  }
  return result;
}
