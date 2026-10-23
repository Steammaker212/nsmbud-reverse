/* sub_603796DC
 * address: 0x603796DC   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603796DC(_DWORD *a1, int a2)
{
  int v3; // r9
  int v4; // r12
  float v5; // s0
  float v6; // s2
  float v7; // s4
  unsigned int v8; // r5
  int v9; // r7
  char v10; // r1
  unsigned int i; // r2
  unsigned int v12; // r3
  int v13; // r6
  unsigned int v14; // r4
  unsigned int v15; // r3
  int v16; // r4
  unsigned int j; // r6
  float v18; // s8
  float v19; // s10
  int result; // r0
  int v21; // r0

  v3 = dword_60C96478;
  v4 = FIELD_U32(dword_60C96478, 96);
  if ( v4 < 1 )
    return 0;
  v5 = FIELD_F32(a2, 108);
  v6 = FIELD_F32(a2, 112);
  v7 = INFINITY;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  for ( i = 0; i != v4; ++i )
  {
    v12 = 0;
    if ( i < 0xA )
      v12 = i;
    v13 = dword_60C96478 + 8 * v12;
    v14 = FIELD_U32(v13, 16);
    v15 = v14 - 1;
    if ( v14 < v14 - 1 )
      v15 = FIELD_U32(v13, 16);
    if ( v15 )
    {
      v16 = FIELD_U32(v13, 20);
      for ( j = 0; j != v15; ++j )
      {
        if ( *(_DWORD *)v16 == 6 )
        {
          v18 = FIELD_F32(v16, 20) - v6;
          v19 = FIELD_F32(v16, 16) - v5;
          if ( (float)((float)(v18 * v18) + (float)(v19 * v19)) < v7 )
          {
            v7 = (float)(v18 * v18) + (float)(v19 * v19);
            v10 = 1;
            v8 = j;
            v9 = i;
          }
        }
        v16 += 44;
      }
    }
  }
  result = 0;
  if ( (v10 & 1) != 0 )
  {
    v21 = dword_60C96478;
    a1[6] = v9;
    a1[7] = v8;
    a1[4] = sub_60377B20(v21, v9, v8);
    a1[5] = sub_60377B20(v3, v9, v8 + 1);
    return 1;
  }
  return result;
}
