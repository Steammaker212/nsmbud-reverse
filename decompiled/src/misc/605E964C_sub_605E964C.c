/* sub_605E964C
 * address: 0x605E964C   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_605E964C(_DWORD *a1)
{
  int *result; // r0
  int v3; // r3
  int v4; // r2
  int v5; // r5
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r5
  int v11; // r6
  bool v12; // vf
  int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r7
  int v18; // r3
  int v19; // r2
  int v20; // [sp+4h] [bp-54h] BYREF
  int v21; // [sp+8h] [bp-50h]
  int *v22; // [sp+Ch] [bp-4Ch]
  int v23; // [sp+10h] [bp-48h] BYREF

  result = (int *)a1[41];
  if ( result )
  {
    v3 = a1[40];
    while ( 1 )
    {
      v4 = a1[39];
      if ( v3 < v4 )
        v4 = 0;
      v5 = *(_DWORD *)(a1[38] - 4 * v4 + 4 * v3);
      if ( v5 )
      {
        if ( (FIELD_U8(v5, 6266) & 4) == 0 )
          break;
      }
      result = (int *)((char *)result - 1);
      ++v3;
      if ( !result )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    a1[75] = 0;
    a1[72] = 0;
    a1[73] = 2;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    sub_608DEB0C(&v20, 12, (int)&v23);
    v20 = 0;
    v6 = a1[41];
    if ( v6 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        if ( v6 >= 1 )
        {
          --v6;
          v9 = a1[39];
          v10 = a1[40];
          v11 = v10 + 1;
          if ( v10 + 1 >= v9 )
            v11 = 0;
          v12 = __OFSUB__(v10, v9);
          v13 = v10 - v9;
          if ( v13 < 0 != v12 )
            v13 = a1[40];
          v8 = *(_DWORD *)(a1[38] + 4 * v13);
          a1[40] = v11;
          a1[41] = v6;
        }
        if ( v7 < v21 )
        {
          v22[v7] = v8;
          v7 = ++v20;
          v6 = a1[41];
        }
      }
      while ( v6 );
    }
    result = (int *)sub_608DECA0(&v20, sub_605E97C0);
    if ( v20 )
    {
      result = v22;
      v14 = 4 * v20;
      do
      {
        v15 = a1[39];
        v16 = a1[41];
        if ( v16 < v15 )
        {
          v17 = *result;
          a1[41] = v16 + 1;
          v18 = a1[40] + v16;
          v12 = __OFSUB__(v18, v15);
          v19 = v18 - v15;
          if ( v19 < 0 != v12 )
            v19 = v18;
          *(_DWORD *)(a1[38] + 4 * v19) = v17;
        }
        v14 -= 4;
        ++result;
      }
      while ( v14 );
    }
  }
  return result;
}
