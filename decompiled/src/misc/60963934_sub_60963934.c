/* sub_60963934
 * address: 0x60963934   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60963934(int a1, float *a2)
{
  int result; // r0
  int v4; // r12
  _DWORD *v5; // r3
  float v6; // s0
  float v7; // s2
  float v8; // s4
  unsigned int v9; // r8
  int v10; // r6
  int i; // r4
  int v12; // r5
  _DWORD *v13; // r1
  float *v14; // r7
  float v15; // s8
  float v16; // s6
  float v17; // s10
  float v18; // s10
  float v19; // s10
  float v20; // s10
  float v21; // s10
  float v22; // s10
  unsigned int v23; // r2
  _DWORD *v24; // r7

  result = -1;
  v4 = FIELD_U32(a1, 8);
  if ( v4 >= 1 )
  {
    v5 = *(_DWORD **)(a1 + 4);
    v6 = *a2;
    v7 = a2[1];
    v8 = a2[2];
    v9 = *(_DWORD *)a1;
    v10 = v4 + 1;
    for ( i = (int)&v5[v4 - 1]; ; i -= 4 )
    {
      v12 = FIELD_U32(a1, 4);
      if ( v9 > v10 - 2 )
        v12 = i;
      v13 = *(_DWORD **)v12;
      if ( *(_DWORD *)(*(_DWORD *)v12 + 8) == 2 )
      {
        v14 = (float *)v13[1];
        v15 = FIELD_F32(a1, 140);
        v16 = -v15;
        v17 = *v14 - v6;
        if ( v17 <= v15 && v17 >= v16 )
        {
          v18 = v14[1] - v7;
          if ( v18 <= v15 && v18 >= v16 )
          {
            v19 = v14[2] - v8;
            if ( v19 <= v15 && v19 >= v16 )
            {
              result = 0;
              goto LABEL_24;
            }
          }
        }
        if ( *v13 > 1u )
          v14 += 3;
        v20 = *v14 - v6;
        if ( v20 <= v15 && v20 >= v16 )
        {
          v21 = v14[1] - v7;
          if ( v21 <= v15 && v21 >= v16 )
          {
            v22 = v14[2] - v8;
            if ( v22 <= v15 && v22 >= v16 )
              break;
          }
        }
      }
      if ( --v10 <= 1 )
        return result;
    }
    result = 1;
LABEL_24:
    v23 = v4 - 1;
    if ( v9 > v4 - 1 )
      v5 += v23;
    *(_DWORD *)v12 = *v5;
    v24 = *(_DWORD **)(a1 + 4);
    if ( *(_DWORD *)a1 > v23 )
      v24 += v23;
    *v24 = v13;
  }
  return result;
}
