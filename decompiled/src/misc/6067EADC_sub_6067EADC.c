/* sub_6067EADC
 * address: 0x6067EADC   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067EADC(int a1, int a2, float *a3, int a4, unsigned int a5, int a6, int a7)
{
  int v7; // r5
  unsigned int v11; // r1
  int v12; // r1
  unsigned int v13; // r3
  unsigned int v14; // r6
  int v15; // r4
  unsigned int v16; // r6
  float v17; // r0
  float v18; // r1
  float v19; // r2
  int *v20; // r4
  int v21; // t1
  float v23[18]; // [sp+8h] [bp-48h] BYREF

  v7 = a5;
  v11 = 1;
  FIELD_U8(a1, 3049) = a5;
  *(_DWORD *)a1 = a1 + 36;
  if ( a5 - 1 >= 2 )
  {
    v12 = a1 + 492;
    v13 = 1;
    if ( (a5 & 1) != 0 )
    {
      FIELD_U32(a1, 4) = v12;
      v12 = a1 + 856;
      v13 = 2;
    }
    if ( a5 != 3 )
    {
      do
      {
        v14 = 0;
        v15 = v12 + 364;
        if ( v13 < 8 )
          v14 = v13;
        *(_DWORD *)(a1 + 4 * v14) = v12;
        v16 = v13 + 1;
        v13 += 2;
        v12 += 728;
        if ( v16 >= 8 )
          v16 = 0;
        *(_DWORD *)(a1 + 4 * v16) = v15;
      }
      while ( v13 != a5 - 1 );
    }
    v11 = a5 - 1;
  }
  if ( a5 >= 2 )
  {
    if ( v11 >= 8 )
      v11 = 0;
    *(_DWORD *)(a1 + 4 * v11) = a1 + 2676;
  }
  if ( a5 >= 8 )
    v7 = 8;
  FIELD_U32(a1, 32) = a1 + 4 * a5;
  v17 = *a3;
  v18 = a3[1];
  v19 = a3[2];
  v23[0] = v17;
  v23[1] = v18;
  v23[2] = v19;
  if ( v7 )
  {
    v20 = (int *)a1;
    do
    {
      v21 = *v20++;
      sub_6067D3EC(v21, a2, (int)v23, a4, 0.0, a7, 0);
      --v7;
      v23[0] = v23[0] + -32.0;
    }
    while ( v7 );
  }
  FIELD_U32(a1, 3040) = a6;
  FIELD_U32(a1, 3044) = 0;
  FIELD_U8(a1, 3048) = 0;
  return 0;
}
