/* sub_608F534C
 * address: 0x608F534C   size: 964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F534C(int result, int a2, int a3, int a4)
{
  int v4; // r9
  int v5; // r7
  float v8; // s20
  float v9; // s18
  float *v10; // r4
  int v11; // r5
  float v12; // s26
  int v13; // r6
  float v14; // s17
  float v15; // s19
  float v16; // s21
  float v17; // s23
  int v18; // r7
  float *v19; // r5
  float v20; // s25
  float v21; // s27
  float v22; // s0
  float *v23; // r5
  float v24; // s25
  float v25; // s27
  float v26; // s0
  int v27; // r5
  _DWORD *v28; // r9
  _WORD *v29; // r2
  int v30; // r3
  __int16 v31; // r7
  int v32; // r11
  int v33; // r2
  int v34; // r1
  __int16 v35; // r12
  int v36; // r6
  int v37; // r7
  __int16 v38; // r0
  int v39; // lr
  _WORD *v40; // r1
  int v41; // r4
  __int16 v42; // r5
  int v43; // r3
  __int16 v44; // r2
  int v45; // r7
  _WORD *v46; // r2
  bool v47; // zf
  __int16 v48; // r6
  __int16 v49; // r5
  int v50; // [sp+8h] [bp-78h]
  int v52; // [sp+10h] [bp-70h]
  int v53; // [sp+14h] [bp-6Ch]

  v4 = result;
  v5 = a4;
  if ( result )
  {
    if ( a4 >= 1 )
    {
      v8 = (float)a3;
      v9 = (float)a4 + 1.0;
      if ( a3 <= 0 )
      {
        v27 = 0;
        do
        {
          sinf((float)((float)((float)++v27 / v9) + -0.5) * 3.1416);
          cosf((float)((float)((float)v27 / v9) + -0.5) * 3.1416);
        }
        while ( v5 != v27 );
      }
      else
      {
        v10 = (float *)(result + 12);
        v11 = 0;
        v12 = (float)(6.2832 / v8) * 0.5;
        do
        {
          v13 = v11 + 1;
          v14 = sinf((float)((float)((float)(v11 + 1) / v9) + -0.5) * 3.1416) * 0.5;
          v15 = 0.5 - v14;
          v16 = v14 + 0.5;
          v17 = cosf((float)((float)((float)(v11 + 1) / v9) + -0.5) * 3.1416) * 0.5;
          v18 = 0;
          if ( (v11 & 1) != 0 )
          {
            v23 = v10;
            do
            {
              v24 = (float)v18;
              v25 = v17 * cosf((float)((float)v18 * 6.2832) / v8);
              v26 = sinf((float)((float)v18++ * 6.2832) / v8);
              *(v23 - 3) = v25;
              *(v23 - 2) = v14;
              *(v23 - 1) = v17 * v26;
              *v23 = v16;
              v23[1] = v24 / v8;
              v23[2] = v15;
              v23 += 9;
            }
            while ( a3 != v18 );
          }
          else
          {
            v19 = v10;
            do
            {
              v20 = (float)v18;
              v21 = v17 * cosf((float)((float)((float)v18 * 6.2832) / v8) - v12);
              v22 = sinf((float)((float)((float)v18++ * 6.2832) / v8) - v12);
              *(v19 - 3) = v21;
              *(v19 - 2) = v14;
              *(v19 - 1) = v17 * v22;
              *v19 = v16;
              v19[1] = v20 / v8;
              v19[2] = v15;
              v19 += 9;
            }
            while ( a3 != v18 );
          }
          v5 = a4;
          v10 += 9 * a3;
          v11 = v13;
        }
        while ( v13 != a4 );
      }
    }
    *(_DWORD *)(v4 + 36 * v5 * a3) = 0;
    v28 = (_DWORD *)(v4 + 36 * v5 * a3);
    v28[1] = -1090519040;
    v28[2] = 0;
    result = 1056964608;
    v28[3] = 0;
    v28[4] = 1056964608;
    v28[5] = 1065353216;
    v28[9] = 0;
    v28[10] = 1056964608;
    v28[11] = 0;
    v28[12] = 1065353216;
    v28[13] = 1056964608;
    v28[14] = 0;
  }
  if ( a2 )
  {
    if ( a3 >= 1 )
    {
      v29 = (_WORD *)(a2 + 4);
      v30 = 1;
      do
      {
        *(v29 - 2) = a4 * a3;
        *(v29 - 1) = v30 - 1;
        v31 = v30 - a3;
        if ( v30 != a3 )
          v31 = v30;
        ++v30;
        *v29 = v31;
        v29 += 3;
      }
      while ( v30 - a3 != 1 );
    }
    result = a4;
    v50 = a4 - 1;
    if ( a4 >= 2 )
    {
      if ( a3 < 1 )
        return result;
      v32 = 0;
      v33 = a2 + 6 * a3 + 10;
      v34 = 0;
      do
      {
        v35 = v34 * a3;
        v36 = 1;
        v37 = v32;
        v53 = v33;
        v52 = v34 + 1;
        v38 = (v34 + 1) * a3;
        v39 = v34 % 2;
        v40 = (_WORD *)v33;
        do
        {
          v41 = v39 + v36;
          v42 = v35;
          *(v40 - 5) = v37++;
          v43 = v39 + v36 - 1;
          if ( v36 != a3 )
            v42 = v35 + v36;
          ++v36;
          v44 = v43 % a3 + v38;
          *(v40 - 4) = v44;
          *(v40 - 3) = v42;
          *(v40 - 2) = v44;
          *(v40 - 1) = v41 % a3 + v38;
          *v40 = v42;
          v40 += 6;
        }
        while ( v36 - a3 != 1 );
        v34 = v52;
        v32 += a3;
        v33 = v53 + 12 * a3;
        result = a4 - 1;
      }
      while ( v52 != v50 );
    }
    if ( a3 >= 1 )
    {
      result = a4 * a3 + 1;
      v45 = 1;
      v46 = (_WORD *)(a2 + 2 * (3 * a3 + 6 * v50 * a3) + 2);
      do
      {
        v47 = v45 == a3;
        v48 = v50 * a3 + v45++;
        *(v46 - 1) = result;
        v49 = v48 - 1;
        if ( v47 )
          v48 = v50 * a3;
        *v46 = v48;
        v46[1] = v49;
        v46 += 3;
      }
      while ( v45 - a3 != 1 );
    }
  }
  return result;
}
