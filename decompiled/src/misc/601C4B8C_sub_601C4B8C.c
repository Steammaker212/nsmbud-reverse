/* sub_601C4B8C
 * address: 0x601C4B8C   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C4B8C(int a1, float *a2, float *a3, int a4, float a5, float a6, float a7, float a8)
{
  float v9; // s22
  float v10; // s6
  float v11; // s12
  float v12; // s4
  int v13; // r5
  int v14; // r0
  float v15; // s0
  int v16; // r0
  int v17; // r1
  bool v18; // cc
  int result; // r0
  float v20[17]; // [sp+Ch] [bp-44h] BYREF

  v9 = sqrtf((float)((float)(a3[2] - a2[2]) * (float)(a3[2] - a2[2])) + (float)((float)(*a3 - *a2) * (float)(*a3 - *a2)))
     / a5;
  v10 = a2[2];
  v11 = a3[2];
  v12 = a3[1] - a2[1];
  v20[0] = *a3 - *a2;
  v20[1] = v12;
  v20[2] = v11 - v10;
  v13 = (int)v9;
  ((void (__fastcall *)(int, float *, int, int, float, float, float, int, float *))loc_60185F9C)(
    a1,
    a3,
    a4,
    (int)v9,
    a6,
    a7,
    a8,
    1,
    v20);
  v14 = 0;
  FIELD_U32(a1, 336) = (int)v9;
  FIELD_U32(a1, 340) = 0;
  FIELD_U32(a1, 332) = -1082130432;
  if ( (int)v9 >= 1 )
  {
    v15 = FIELD_F32(a1, 120);
    v16 = 0;
    while ( 1 )
    {
      v15 = FIELD_F32(a1, 204) + v15;
      if ( v15 < 0.0 )
        break;
      if ( ++v16 >= v13 )
      {
        v14 = 0;
        goto LABEL_12;
      }
    }
    v17 = v13 - v16;
    v14 = 0;
    if ( v17 >= 10 )
    {
      v14 = 10;
      v18 = v17 < 20;
      if ( v17 >= 20 )
      {
        v14 = 20;
        v18 = v17 < 30;
      }
      if ( !v18 )
      {
        v14 = 40;
        if ( v17 < 40 )
          v14 = 30;
      }
    }
  }
LABEL_12:
  result = v13 - v14;
  FIELD_U32(a1, 344) = result;
  FIELD_U32(a1, 348) = v13 - 30;
  return result;
}
