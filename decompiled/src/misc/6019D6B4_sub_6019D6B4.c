/* sub_6019D6B4
 * address: 0x6019D6B4   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6019D6B4(int a1)
{
  float v2; // s4
  float v3; // s6
  unsigned int result; // r0
  unsigned int v5; // r5
  int v6; // r6
  int v7; // r9
  unsigned int v8; // r0
  unsigned int v9; // r1
  unsigned int v10; // r0
  unsigned int v11; // r1
  float *v12; // r0
  int v13; // r10
  float *v14; // r1
  float v15; // s6
  int v16; // [sp+4h] [bp-3Ch] BYREF
  int speed; // [sp+8h] [bp-38h] BYREF
  int target[13]; // [sp+Ch] [bp-34h] BYREF

  v2 = FIELD_F32(a1, 88) - FIELD_F32(a1, 100);
  v3 = FIELD_F32(a1, 80) - FIELD_F32(a1, 92);
  target[0] = sub_6000F7B8(FIELD_F32(a1, 84) - FIELD_F32(a1, 96), sqrtf((float)(v2 * v2) + (float)(v3 * v3)));
  speed = 25165824;
  moveValueTo((int *)(a1 + 12664), target, &speed);
  result = FIELD_U8(a1, 12891);
  if ( result >= 2 )
  {
    v5 = 1;
    v6 = a1 + 12592;
    v7 = a1 + 12628;
    do
    {
      v8 = v5 - 1;
      v9 = 0;
      if ( v5 - 1 >= 5 )
        v8 = 0;
      v10 = *(_DWORD *)(v6 + 4 * v8);
      if ( v10 >= 6 )
        v10 = 0;
      if ( v5 < 5 )
        v9 = v5;
      v11 = *(_DWORD *)(v6 + 4 * v9);
      v12 = (float *)(v7 + 40 * v10);
      if ( v11 >= 6 )
        v11 = 0;
      v13 = 5 * v11;
      v14 = (float *)(v7 + 40 * v11);
      v15 = v12[4] - v14[4];
      target[0] = sub_6000F7B8(
                    v12[5] - v14[5],
                    sqrtf((float)((float)(v12[6] - v14[6]) * (float)(v12[6] - v14[6])) + (float)(v15 * v15)));
      v16 = 25165824;
      moveValueTo((int *)(a1 + 8 * v13 + 12664), target, &v16);
      result = FIELD_U8(a1, 12891);
      ++v5;
    }
    while ( (int)v5 < (int)result );
  }
  return result;
}
