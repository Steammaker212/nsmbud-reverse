/* sub_60379A50
 * address: 0x60379A50   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60379A50(unsigned int *a1, float *a2, int (__fastcall *a3)(int))
{
  int v5; // r9
  float v6; // s16
  float v7; // s18
  char v8; // r10
  float v9; // s20
  unsigned int i; // r7
  unsigned int v11; // r0
  int v12; // r0
  unsigned int v13; // r1
  unsigned int v14; // r4
  int v15; // r6
  unsigned int j; // r8
  float v17; // s2
  float v18; // s4
  float v19; // s0
  unsigned int k; // r0
  unsigned int v21; // r1
  int v22; // r2
  unsigned int v23; // r3
  unsigned int v24; // r1
  unsigned int v25; // r3
  float *v26; // r2
  float v27; // s4
  float v28; // s2
  float v29; // s4
  float v30; // s6
  float v31; // s2
  bool v32; // nf
  int v34; // [sp+4h] [bp-44h]

  v34 = dword_60C96478;
  v5 = FIELD_U32(dword_60C96478, 96);
  if ( v5 < 1 )
  {
    v8 = 0;
  }
  else
  {
    v6 = *a2;
    v7 = a2[1];
    v8 = 0;
    if ( a3 )
    {
      v9 = INFINITY;
      for ( i = 0; i != v5; ++i )
      {
        v11 = 0;
        if ( i < 0xA )
          v11 = i;
        v12 = v34 + 8 * v11;
        v13 = FIELD_U32(v12, 16);
        v14 = v13 - 1;
        if ( v13 < v13 - 1 )
          v14 = FIELD_U32(v12, 16);
        if ( v14 )
        {
          v15 = FIELD_U32(v12, 20);
          for ( j = 0; j != v14; ++j )
          {
            if ( a3(v15) == 1 )
            {
              v17 = FIELD_F32(v15, 20) - v7;
              v18 = FIELD_F32(v15, 16) - v6;
              if ( (float)((float)(v17 * v17) + (float)(v18 * v18)) < v9 )
              {
                v9 = (float)(v17 * v17) + (float)(v18 * v18);
                v8 = 1;
                *a1 = i;
                a1[1] = j;
              }
            }
            v15 += 44;
          }
        }
      }
    }
    else
    {
      v19 = INFINITY;
      for ( k = 0; k != v5; ++k )
      {
        v21 = 0;
        if ( k < 0xA )
          v21 = k;
        v22 = v34 + 8 * v21;
        v23 = FIELD_U32(v22, 16);
        v24 = v23 - 1;
        if ( v23 < v23 - 1 )
          v24 = FIELD_U32(v22, 16);
        if ( v24 )
        {
          v25 = 0;
          v26 = (float *)(FIELD_U32(v22, 20) + 16);
          do
          {
            v27 = v26[1];
            v28 = *v26;
            v26 += 11;
            v29 = v27 - v7;
            v30 = v28 - v6;
            v31 = (float)(v29 * v29) + (float)(v30 * v30);
            v32 = v31 < v19;
            if ( v31 < v19 )
            {
              v19 = (float)(v29 * v29) + (float)(v30 * v30);
              *a1 = k;
              a1[1] = v25;
            }
            ++v25;
            if ( v32 )
              v8 = 1;
          }
          while ( v24 != v25 );
        }
      }
    }
  }
  return v8 & 1;
}
