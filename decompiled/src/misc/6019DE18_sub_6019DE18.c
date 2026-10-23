/* sub_6019DE18
 * address: 0x6019DE18   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6019DE18(int a1)
{
  float v2; // s4
  float v3; // s6
  unsigned int result; // r0
  unsigned int v5; // r7
  int v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r1
  int v9; // r4
  float *v10; // r0
  float *v11; // r1
  float v12; // s4
  float v13; // s6

  v2 = FIELD_F32(a1, 88) - FIELD_F32(a1, 100);
  v3 = FIELD_F32(a1, 80) - FIELD_F32(a1, 92);
  FIELD_U32(a1, 12664) = sub_6000F7B8(
                              FIELD_F32(a1, 84) - FIELD_F32(a1, 96),
                              sqrtf((float)(v2 * v2) + (float)(v3 * v3)));
  result = FIELD_U8(a1, 12891);
  if ( result >= 2 )
  {
    v5 = 1;
    v6 = a1 + 12628;
    do
    {
      v7 = v5 - 1;
      v8 = 0;
      if ( v5 - 1 >= 6 )
        v7 = 0;
      if ( v5 < 6 )
        v8 = v5;
      v9 = 5 * v8;
      v10 = (float *)(v6 + 40 * v7);
      v11 = (float *)(v6 + 40 * v8);
      v12 = v10[6] - v11[6];
      v13 = v10[4] - v11[4];
      ++v5;
      *(_DWORD *)(a1 + 8 * v9 + 12664) = sub_6000F7B8(v10[5] - v11[5], sqrtf((float)(v12 * v12) + (float)(v13 * v13)));
      result = FIELD_U8(a1, 12891);
    }
    while ( (int)v5 < (int)result );
  }
  return result;
}
