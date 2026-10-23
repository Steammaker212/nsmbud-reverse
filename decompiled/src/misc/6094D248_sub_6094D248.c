/* sub_6094D248
 * address: 0x6094D248   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094D248(int a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  int v7; // r0
  int v8; // r11
  float v9; // s20
  float v10; // s18
  float *v11; // r9
  unsigned int v12; // r8
  float v13; // s30
  float v14; // s19
  float *v15; // r5
  unsigned int v16; // r10
  float v17; // s21
  float v18; // s0
  unsigned int v19; // r4
  _DWORD *v20; // r11
  int v22; // [sp+8h] [bp-80h]
  _DWORD *v23; // [sp+Ch] [bp-7Ch]
  _DWORD v25[29]; // [sp+14h] [bp-74h] BYREF

  if ( *a2 )
    v7 = dword_60CC73E8(*a2);
  else
    v7 = 0;
  v23 = a2;
  v22 = a4 * a3;
  v8 = v7 + a2[1];
  if ( a4 )
  {
    v9 = (float)a3;
    v10 = (float)a4 + 1.0;
    if ( a3 )
    {
      v11 = (float *)(v8 + 16);
      v12 = 0;
      do
      {
        v13 = sinf((float)((float)((float)++v12 / v10) + -0.5) * 3.1416) * 0.5;
        v14 = cosf((float)((float)((float)v12 / v10) + -0.5) * 3.1416) * 0.5;
        v15 = v11;
        v16 = 0;
        do
        {
          v17 = v14 * cosf((float)((float)v16 * 6.2832) / v9);
          v18 = v14 * sinf((float)((float)v16++ * 6.2832) / v9);
          *(v15 - 4) = v17;
          *(v15 - 3) = v13;
          *(v15 - 2) = v18;
          *(v15 - 1) = v17 + v17;
          *v15 = v13 + v13;
          v15[1] = v18 + v18;
          v15[2] = v17 + 0.5;
          v15[3] = v18 + 0.5;
          v15 += 8;
        }
        while ( a3 != v16 );
        v11 += 8 * a3;
      }
      while ( v12 != a4 );
    }
    else
    {
      v19 = 0;
      do
      {
        sinf((float)((float)((float)++v19 / v10) + -0.5) * 3.1416);
        cosf((float)((float)((float)v19 / v10) + -0.5) * 3.1416);
      }
      while ( a4 != v19 );
    }
  }
  *(_DWORD *)(v8 + 32 * v22) = 0;
  v20 = (_DWORD *)(v8 + 32 * v22);
  v20[1] = -1090519040;
  v20[2] = 0;
  v20[6] = 1056964608;
  v20[7] = 1056964608;
  v20[3] = 0;
  v20[4] = -1082130432;
  v20[5] = 0;
  v20[8] = 0;
  v20[9] = 1056964608;
  v20[10] = 0;
  v20[11] = 0;
  v20[12] = 1065353216;
  v20[13] = 0;
  v20[14] = 1056964608;
  v20[15] = 1056964608;
  v25[0] = *v23;
  v25[1] = v23[1];
  v25[2] = v23[2];
  sub_609225B8(a1, v25, 0x20u, 32 * v22 + 64);
  sub_60922768(a1, 0, 34, 0, 0);
  sub_60922768(a1, 1u, 34, 12, 0);
  return sub_60922768(a1, 2u, 22, 24, 0);
}
