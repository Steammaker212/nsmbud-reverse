/* sub_6026FE30
 * address: 0x6026FE30   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026FE30(int a1)
{
  _DWORD *v2; // r5
  float *v3; // r9
  float *v4; // r10
  int v5; // r6
  int v6; // r7
  int v7; // r0
  float v8; // s2
  float v9; // s6
  int v10; // r6
  int i; // r8
  int v12; // r1
  int v13; // r0
  float *v15; // [sp+4h] [bp-5Ch]

  v2 = (_DWORD *)(a1 + 9468);
  v15 = (float *)(a1 + 9576);
  v3 = (float *)(a1 + 9436);
  v4 = (float *)(a1 + 9432);
  if ( 4 * FIELD_U32(a1, 9476) >= -2147483644 )
  {
    v10 = 0;
    for ( i = 0; ; ++i )
    {
      v12 = FIELD_U8(a1, 9527);
      v13 = 3;
      if ( *v2 )
        v13 = 1;
      if ( v12 == 3 )
      {
        if ( (i | 2) != 2 )
          goto LABEL_20;
      }
      else if ( v12 == 2 )
      {
        if ( v10 * 4 )
          goto LABEL_20;
      }
      else if ( v12 != 1 || v10 != 512 )
      {
LABEL_20:
        if ( i != v13 )
          (*(void (__fastcall **)(int, int, float, float, float, float, float, float))(*(_DWORD *)a1 + 208))(
            a1,
            16 * dword_60AF5A5C[i],
            *v4
          + (float)((float)(sinLutTable[v10 + 2] + (float)((float)(sinLutTable[v10 + 3] * 0.0) * 0.000000059605)) * 24.0),
            *v3
          + (float)((float)(sinLutTable[v10] + (float)((float)(sinLutTable[v10 + 1] * 0.0) * 0.000000059605)) * 24.0),
            2200.0 - *v15,
            *v4
          + (float)((float)(sinLutTable[v10 + 2] + (float)((float)(sinLutTable[v10 + 3] * 0.0) * 0.000000059605)) * 40.0),
            *v3
          + (float)((float)(sinLutTable[v10] + (float)((float)(sinLutTable[v10 + 1] * 0.0) * 0.000000059605)) * 40.0),
            4500.0);
      }
      v10 += 256;
      if ( v10 == 1024 )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 220))(a1);
    }
  }
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = 3;
    if ( *v2 )
      v7 = 1;
    if ( (v6 | 1) != v7 )
    {
      v8 = sinLutTable[v5 + 128] + (float)((float)(sinLutTable[v5 + 129] * 0.0) * 0.000000059605);
      v9 = sinLutTable[v5 + 130] + (float)((float)(sinLutTable[v5 + 131] * 0.0) * 0.000000059605);
      (*(void (__fastcall **)(int, int, float, float, float, float, float, float))(*(_DWORD *)a1 + 208))(
        a1,
        16 * dword_60AF2514[v6],
        *v4 + (float)(v9 * 24.0),
        *v3 + (float)(v8 * 24.0),
        2200.0 - *v15,
        *v4 + (float)(v9 * 40.0),
        *v3 + (float)(v8 * 40.0),
        4500.0);
    }
    v5 += 256;
    ++v6;
  }
  while ( v5 != 1024 );
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 220))(a1);
}
