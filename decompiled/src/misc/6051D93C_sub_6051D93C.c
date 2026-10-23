/* sub_6051D93C
 * address: 0x6051D93C   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6051D93C(_DWORD *result)
{
  int v1; // lr
  unsigned int i; // r1
  int v3; // r3
  signed int v4; // r2
  int v5; // r10
  int v6; // r6
  _DWORD *v7; // r9
  unsigned int v8; // r2
  _DWORD *v9; // r4
  unsigned int v10; // r3
  _DWORD *v11; // r7
  int v12; // r5
  int v13; // r3
  int v14; // r4
  int v15; // r5
  _DWORD *v16; // r6
  int v17; // r5
  int v18; // r7
  int v19; // r4
  int v20; // r3
  _DWORD *v21; // r3
  _DWORD v22[10]; // [sp+0h] [bp-28h]

  v22[0] = 0;
  v22[1] = 0;
  v1 = result[970];
  if ( v1 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v3 = result[969];
      v4 = result[968];
      v5 = result[967];
      if ( (int)(i + v3) >= v4 )
        v3 -= v4;
      v6 = i + v3;
      v7 = *(_DWORD **)(v5 + 16 * (i + v3));
      v8 = v7[5];
      if ( v8 >= 2 )
        v8 = 0;
      v9 = &result[8 * v8];
      v10 = v22[v8];
      v11 = (_DWORD *)v9[927];
      if ( v9[930] > v10 )
      {
        v12 = v9[928];
        v13 = v9[929] + v10;
        v14 = v13 - v12;
        if ( v13 < v12 )
          v14 = v13;
        v11 += v14;
      }
      v15 = v5 + 16 * v6;
      v16 = (_DWORD *)*v11;
      FIELD_U32(v15, 8) = *v11;
      v17 = v15 + 8;
      v18 = v7[3];
      if ( v18 == 6 || v16[2] != v18 )
      {
        v16[2] = v18;
        v16[1] |= 1u;
        v16 = *(_DWORD **)v17;
      }
      v19 = v16[5];
      v20 = v7[1];
      if ( v19 != v20 )
      {
        v16[4] = v19;
        v16[5] = v20;
        v16[1] |= 2u;
      }
      if ( i <= 3 )
      {
        v21 = *(_DWORD **)v17;
        if ( i != *(_DWORD *)(*(_DWORD *)v17 + 12) )
        {
          v21[3] = i;
          v21[1] |= 1u;
        }
      }
      ++v22[v8];
    }
  }
  return result;
}
