/* CircularCollider_vf28
 * address: 0x60157F64   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall CircularCollider_vf28(int a1, bool *a2, float *a3)
{
  float *v5; // r0
  float v6; // s10
  float v7; // s8
  _BOOL4 result; // r0
  float v9; // s0
  float v10; // s2
  float v11; // s6
  float v12; // s4
  float v13; // s16
  _BOOL4 v14; // r0
  int v15; // r6
  int v16; // r7
  bool v17; // r1

  v5 = *(float **)(a1 + 152);
  v6 = v5[1];
  v7 = *v5;
  result = 0;
  v9 = a3[1];
  v10 = *a3;
  v11 = (float)((float)(v6 + FIELD_F32(a1, 176)) + FIELD_F32(a1, 352)) + FIELD_F32(a1, 132);
  v12 = (float)((float)(v7 + FIELD_F32(a1, 172)) + FIELD_F32(a1, 348)) + FIELD_F32(a1, 128);
  v13 = (float)((float)(v11 - v9) * (float)(v11 - v9)) + (float)((float)(v12 - *a3) * (float)(v12 - *a3));
  if ( v13 <= (float)(FIELD_F32(a1, 364) * FIELD_F32(a1, 364)) )
  {
    v14 = 1;
    if ( (FIELD_U32(a1, 308) & 0xF) == 2 )
    {
      v15 = FIELD_U32(a1, 380);
      v16 = FIELD_U32(a1, 384);
      if ( v16 != v15 )
      {
        if ( v10 != v12 )
        {
          v14 = sub_6000F7B8(v9 - v11, v10 - v12) - FIELD_U32(a1, 380) <= v16 - v15;
          if ( a2 )
          {
LABEL_9:
            v17 = 0;
            if ( v14 )
              v17 = v13 == (float)(FIELD_F32(a1, 364) * FIELD_F32(a1, 364));
            *a2 = v17;
          }
          return v14;
        }
        v14 = 1;
      }
    }
    if ( a2 )
      goto LABEL_9;
    return v14;
  }
  return result;
}
