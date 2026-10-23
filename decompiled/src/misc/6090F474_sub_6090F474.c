/* sub_6090F474
 * address: 0x6090F474   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6090F474(float *a1, float *a2, __int64 a3)
{
  float v3; // s20
  float v4; // s18
  float v5; // s16
  float v6; // s2
  float v7; // s0
  float v8; // s18
  float v9; // s0
  int v10; // r5
  float v11; // s4
  float v12; // s2
  float v13; // s2
  float v14; // s0

  v3 = a1[3] - a1[1];
  v4 = a1[2] - *a1;
  v5 = sqrtf((float)(v3 * v3) + (float)(v4 * v4));
  if ( v5 > 0.0 )
  {
    v3 = v3 * (float)(1.0 / v5);
    v4 = v4 * (float)(1.0 / v5);
  }
  v6 = a1[1] - a2[1];
  v7 = *a1 - *a2;
  if ( v5 > 0.0 )
  {
    v8 = (float)((float)(v3 * v6) + (float)(v4 * v7)) + (float)((float)(v3 * v6) + (float)(v4 * v7));
    v9 = (float)(v8 * v8)
       + (float)((float)((float)((float)(v6 * v6) + (float)(v7 * v7)) - (float)(a2[2] * a2[2])) * -4.0);
    if ( v9 <= 0.0 )
    {
      v10 = 0;
      if ( v9 > 0.00000011921 )
        return v10;
      if ( v9 < -0.00000011921 )
        return v10;
      if ( v8 > 0.0 )
        return v10;
      if ( (float)((float)(v5 + v5) + v8) < 0.0 )
        return v10;
      v10 = 1;
      if ( !(_DWORD)a3 )
        return v10;
      v14 = v8 * -0.5;
    }
    else
    {
      v10 = 0;
      if ( v8 > 0.0 )
        return v10;
      v11 = (float)(v5 + v5) + v8;
      if ( (float)(v8 * v8) >= v9 )
      {
        if ( v11 >= 0.0 )
        {
          v10 = 2;
          if ( a3 )
          {
            v12 = sqrtf(v9);
            if ( (_DWORD)a3 )
              *(float *)a3 = (float)((float)((float)-v8 - v12) * 0.5) / v5;
            if ( HIDWORD(a3) )
              *(float *)HIDWORD(a3) = (float)((float)(v12 - v8) * 0.5) / v5;
          }
        }
        return v10;
      }
      if ( v11 < 0.0 )
        return v10;
      v10 = 1;
      if ( !(_DWORD)a3 )
        return v10;
      v14 = (float)(sqrtf(v9) - v8) * 0.5;
    }
    *(float *)a3 = v14 / v5;
    return v10;
  }
  v10 = 0;
  v13 = (float)((float)(v6 * v6) + (float)(v7 * v7)) - (float)(a2[2] * a2[2]);
  if ( v13 <= 0.00000011921 && v13 >= -0.00000011921 )
  {
    v10 = 2;
    if ( (_DWORD)a3 )
      *(_DWORD *)a3 = 0;
    if ( HIDWORD(a3) )
      *(_DWORD *)HIDWORD(a3) = 1065353216;
  }
  return v10;
}
