/* sub_601C4A1C
 * address: 0x601C4A1C   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C4A1C(int a1, float *a2, float *a3, int a4, float a5, float a6, float a7, float a8, int a9)
{
  float v10; // s22
  float v11; // s6
  float v12; // s12
  float v13; // s4
  int v14; // r5
  int v15; // r0
  float v16; // s0
  int v17; // r0
  int v18; // r1
  bool v19; // cc
  int result; // r0
  float v21[17]; // [sp+Ch] [bp-44h] BYREF

  v10 = sqrtf((float)((float)(a3[2] - a2[2]) * (float)(a3[2] - a2[2])) + (float)((float)(*a3 - *a2) * (float)(*a3 - *a2)))
      / a5;
  v11 = a2[2];
  v12 = a3[2];
  v13 = a3[1] - a2[1];
  v21[0] = *a3 - *a2;
  v21[1] = v13;
  v21[2] = v12 - v11;
  v14 = (int)v10;
  ((void (__fastcall *)(int, float *, int, int, float, float, float, int, float *))loc_60186008)(
    a1,
    a3,
    a4,
    (int)v10,
    a6,
    a7,
    a8,
    a9,
    v21);
  v15 = 0;
  FIELD_U32(a1, 336) = (int)v10;
  FIELD_U32(a1, 340) = 0;
  FIELD_U32(a1, 332) = -1082130432;
  if ( (int)v10 >= 1 )
  {
    v16 = FIELD_F32(a1, 120);
    v17 = 0;
    while ( 1 )
    {
      v16 = FIELD_F32(a1, 204) + v16;
      if ( v16 < 0.0 )
        break;
      if ( ++v17 >= v14 )
      {
        v15 = 0;
        goto LABEL_12;
      }
    }
    v18 = v14 - v17;
    v15 = 0;
    if ( v18 >= 10 )
    {
      v15 = 10;
      v19 = v18 < 20;
      if ( v18 >= 20 )
      {
        v15 = 20;
        v19 = v18 < 30;
      }
      if ( !v19 )
      {
        v15 = 40;
        if ( v18 < 40 )
          v15 = 30;
      }
    }
  }
LABEL_12:
  result = v14 - v15;
  FIELD_U32(a1, 344) = result;
  FIELD_U32(a1, 348) = v14 - 30;
  return result;
}
