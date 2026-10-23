/* sub_6095EAFC
 * address: 0x6095EAFC   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095EAFC(_DWORD *a1, int a2, int a3, int a4)
{
  int result; // r0
  int *v9; // r5
  int v10; // r1
  int v11; // r9
  unsigned int v12; // r4
  int v13; // r2
  bool v14; // r0
  int v15; // r1
  int v16; // r0
  unsigned int v17; // r0
  int v18; // r1
  int v19; // [sp+10h] [bp-28h]

  v9 = a1 + 1115;
  result = a1[1115];
  if ( result )
  {
    v10 = a1[114];
    if ( v10 >= 1 )
    {
      v11 = 0;
      v12 = 0;
      v19 = v10 - 1;
      while ( 1 )
      {
        v13 = a1[156];
        v14 = (result & (1 << v12)) != 0;
        if ( a1[155] > v12 )
          v13 += v11;
        FIELD_U8(v13, 64) = v14;
        v15 = *v9;
        if ( (*v9 & (1 << v12)) != 0 )
        {
          v16 = a1[156];
          if ( a1[155] > v12 )
            v16 += v11;
          sub_60962310(v16, a2, a1 + 1077, a3, a4);
          v15 = *v9;
        }
        v17 = a1[155];
        if ( (v15 & (1 << (v12 + v17))) != 0 )
        {
          v18 = a1[156];
          if ( v17 > v12 )
            v18 += v11;
          sub_60966E18(a1 + 158, a2, v12, v18 + 644, a3, a4);
        }
        result = v19;
        if ( v19 == v12 )
          break;
        ++v12;
        v11 += 1396;
        result = *v9;
      }
    }
  }
  return result;
}
