/* sub_605E7C08
 * address: 0x605E7C08   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E7C08(_DWORD *a1)
{
  int result; // r0
  int v3; // r0
  unsigned int v4; // r2
  unsigned int v5; // r1
  int *v6; // r0
  int v7; // r2
  unsigned int v8; // r3
  bool v9; // vf
  int v10; // r2
  int v11; // r0
  int v12; // r4
  int v13; // r3
  int v14; // r5
  int v15; // r2
  int v16; // r6
  unsigned int v17; // r6

  result = a1[73];
  if ( result != 4 )
  {
    if ( result != 2 )
      return result;
    v3 = a1[72];
    if ( v3 )
    {
      result = v3 - 1;
      a1[72] = result;
      if ( result )
        return result;
    }
    v4 = a1[41];
    v5 = a1[75];
    if ( (int)v5 < (int)v4 )
    {
      v6 = (int *)a1[38];
      if ( v4 > v5 )
      {
        v7 = a1[39];
        v8 = a1[40] + v5;
        v9 = __OFSUB__(v8, v7);
        v10 = v8 - v7;
        if ( v10 < 0 != v9 )
          v10 = a1[40] + v5;
        v6 += v10;
      }
      v11 = *v6;
      if ( v11 )
      {
        sub_605E1458(v11);
        v5 = a1[75];
      }
      a1[72] = 17;
      a1[75] = v5 + 1;
      return v5 + 1;
    }
    result = 3;
LABEL_24:
    a1[73] = result;
    return result;
  }
  result = a1[41];
  if ( !result )
    goto LABEL_22;
  v12 = a1[40];
  v13 = 0;
  v14 = 0;
  do
  {
    v15 = a1[39];
    if ( v12 < v15 )
      v15 = 0;
    v16 = *(_DWORD *)(a1[38] - 4 * v15 + 4 * v12);
    if ( v16 )
    {
      v17 = FIELD_U32(v16, 6264);
      if ( (v17 & 0x100000) != 0 )
      {
        ++v13;
        v14 += (v17 >> 21) & 1;
      }
    }
    ++v12;
    --result;
  }
  while ( result );
  if ( v13 == v14 )
  {
LABEL_22:
    result = 5;
    goto LABEL_24;
  }
  return result;
}
