/* CircularCollider_vf3C
 * address: 0x601581F8   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall CircularCollider_vf3C(int a1, float *a2, float a3)
{
  int v4; // r5
  float *v5; // r0
  float v6; // s4
  float v7; // s2
  float v8; // s8
  float v9; // s6
  int v10; // r6
  int v11; // r7

  v4 = 0;
  v5 = *(float **)(a1 + 152);
  v6 = a2[1];
  v7 = *a2;
  v8 = (float)((float)(v5[1] + FIELD_F32(a1, 176)) + FIELD_F32(a1, 352)) + FIELD_F32(a1, 132);
  v9 = (float)((float)(*v5 + FIELD_F32(a1, 172)) + FIELD_F32(a1, 348)) + FIELD_F32(a1, 128);
  if ( (float)((float)((float)(v8 - v6) * (float)(v8 - v6)) + (float)((float)(v9 - *a2) * (float)(v9 - *a2))) <= (float)((float)(FIELD_F32(a1, 364) + a3) * (float)(FIELD_F32(a1, 364) + a3)) )
  {
    if ( (FIELD_U32(a1, 308) & 0xF) == 2 )
    {
      v10 = FIELD_U32(a1, 380);
      v11 = FIELD_U32(a1, 384);
      if ( v11 != v10 && v7 != v9 )
        return sub_6000F7B8(v6 - v8, v7 - v9) - FIELD_U32(a1, 380) <= v11 - v10;
    }
    return 1;
  }
  return v4;
}
