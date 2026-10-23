/* sub_608B84B4
 * address: 0x608B84B4   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B84B4(int result, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // r6
  int v7; // r11
  float v8; // s16
  int v9; // r7
  unsigned int v10; // r5
  bool v11; // zf
  float v12; // s16
  int v13; // r7
  unsigned int v14; // r4
  bool v15; // zf
  float v16; // s16
  int v17; // r7
  unsigned int v18; // r4
  bool v19; // zf
  float v20; // s16
  int v21; // r7
  unsigned int v22; // r4
  bool v23; // zf
  float v24; // s16
  int v25; // r7
  unsigned int v26; // r4
  bool v27; // zf
  float v28; // s16
  int v29; // r7
  bool v30; // zf

  v4 = a2;
  v7 = result;
  if ( a2 )
  {
    v8 = *a4;
    v9 = 61;
    v10 = a2;
    do
    {
      v11 = (v10 & 1) == 0;
      if ( (v10 & 1) != 0 )
      {
        result = *(_DWORD *)(v7 + 4 * v9);
        v11 = result == 0;
      }
      if ( !v11 )
        result = sub_608BBB0C(result, a3, 0, v8);
      if ( !(v10 >> 1) )
        break;
      result = v9 - 60;
      ++v9;
      v10 >>= 1;
    }
    while ( result < 16 );
    v12 = a4[1];
    v13 = 61;
    v14 = v4;
    do
    {
      v15 = (v14 & 1) == 0;
      if ( (v14 & 1) != 0 )
      {
        result = *(_DWORD *)(v7 + 4 * v13);
        v15 = result == 0;
      }
      if ( !v15 )
        result = sub_608BBB0C(result, a3, 1, v12);
      if ( !(v14 >> 1) )
        break;
      result = v13 - 60;
      ++v13;
      v14 >>= 1;
    }
    while ( result < 16 );
    v16 = a4[2];
    v17 = 61;
    v18 = v4;
    do
    {
      v19 = (v18 & 1) == 0;
      if ( (v18 & 1) != 0 )
      {
        result = *(_DWORD *)(v7 + 4 * v17);
        v19 = result == 0;
      }
      if ( !v19 )
        result = sub_608BBB0C(result, a3, 2, v16);
      if ( !(v18 >> 1) )
        break;
      result = v17 - 60;
      ++v17;
      v18 >>= 1;
    }
    while ( result < 16 );
    v20 = a4[3];
    v21 = 61;
    v22 = v4;
    do
    {
      v23 = (v22 & 1) == 0;
      if ( (v22 & 1) != 0 )
      {
        result = *(_DWORD *)(v7 + 4 * v21);
        v23 = result == 0;
      }
      if ( !v23 )
        result = sub_608BBB0C(result, a3, 3, v20);
      if ( !(v22 >> 1) )
        break;
      result = v21 - 60;
      ++v21;
      v22 >>= 1;
    }
    while ( result < 16 );
    v24 = a4[4];
    v25 = 61;
    v26 = v4;
    do
    {
      v27 = (v26 & 1) == 0;
      if ( (v26 & 1) != 0 )
      {
        result = *(_DWORD *)(v7 + 4 * v25);
        v27 = result == 0;
      }
      if ( !v27 )
        result = sub_608BBB0C(result, a3, 4, v24);
      if ( !(v26 >> 1) )
        break;
      result = v25 - 60;
      ++v25;
      v26 >>= 1;
    }
    while ( result < 16 );
    v28 = a4[5];
    v29 = 61;
    do
    {
      v30 = (v4 & 1) == 0;
      if ( (v4 & 1) != 0 )
      {
        result = *(_DWORD *)(v7 + 4 * v29);
        v30 = result == 0;
      }
      if ( !v30 )
        result = sub_608BBB0C(result, a3, 5, v28);
      if ( !(v4 >> 1) )
        break;
      result = v29 - 60;
      ++v29;
      v4 >>= 1;
    }
    while ( result < 16 );
  }
  return result;
}
