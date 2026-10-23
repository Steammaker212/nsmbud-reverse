/* SwingingCollider_execute_helper
 * address: 0x60165D48   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall SwingingCollider_execute_helper(float *result)
{
  int v1; // r11
  int v2; // r4
  int *v3; // r5
  int v4; // r1
  bool v5; // zf
  float v6; // s18
  unsigned int v7; // r12
  int v8; // r10
  float v9; // s2
  _BYTE *v10; // r0
  float *v11; // r9
  float v12; // s0
  float v13; // s20
  int *v14; // r3
  int v15; // lr
  float *v16; // r3
  float *v17; // r7
  float *v18; // r2
  float v19; // s4
  float v20; // s6
  float v21; // s1
  float v22; // s3
  float v23; // s5
  float v24; // s7
  float v25; // s12
  float v26; // s14
  float v27; // s9
  float *v28; // r6
  float *v29; // r7
  float v30; // s22
  float v31; // s24
  float v32; // s2
  _QWORD *v33; // [sp+4h] [bp-54h]

  v2 = (int)result;
  v3 = *((int **)result + 86);
  if ( v3 )
  {
    v33 = result + 76;
    result = sinLutTable;
    do
    {
      v4 = *v3;
      v5 = *v3 == 0;
      if ( *v3 )
      {
        v1 = FIELD_U32(v4, 2196);
        v5 = v1 == 0;
      }
      if ( !v5 )
      {
        result = (float *)FIELD_U8(v1, 533);
        if ( result == (float *)1 )
        {
          v6 = FIELD_F32(v2, 420);
          v7 = FIELD_U32(v2, 392);
          v8 = 0;
          v9 = FIELD_F32(v4, 5376);
          v10 = (_BYTE *)(v4 + 5416);
          v11 = (float *)(v4 + 5464);
          v12 = FIELD_F32(v4, 5380);
          v13 = FIELD_F32(v4, 5464);
          if ( v13 >= v6 )
          {
            v8 = 0;
            while ( v8 < (int)(v7 - 2) )
            {
              v13 = v13 - v6;
              ++v8;
              if ( v13 < v6 )
                goto LABEL_13;
            }
            v8 = v7 - 2;
          }
LABEL_13:
          v14 = *(int **)(v2 + 388);
          if ( FIELD_U32(v2, 384) > (unsigned int)v8 )
            v14 += v8;
          v15 = *v14;
          v16 = *(float **)(v2 + 152);
          v17 = (float *)((char *)sinLutTable + (((unsigned int)(v15 - 0x40000000) >> 20) & 0xFF0));
          v18 = *(float **)(v2 + 396);
          v19 = *v16 + FIELD_F32(v2, 172);
          v20 = v16[1] + FIELD_F32(v2, 176);
          v21 = *v17;
          v22 = v17[1];
          v23 = v17[2];
          v24 = v17[3];
          if ( v7 > v8 )
            v18 += 2 * v8;
          v25 = *v18;
          v26 = v18[1];
          *v10 = 1;
          FIELD_U8(v4, 5417) = 0;
          FIELD_U8(v4, 5418) = 1;
          FIELD_U8(v4, 5419) = 1;
          v27 = (float)((v15 - 0x40000000) & 0xFFFFFF);
          FIELD_U64(v4, 5456) = *v33;
          FIELD_U32(v4, 5420) = v8;
          FIELD_U32(v4, 5424) = v15;
          v28 = (float *)(v4 + 5428);
          v29 = (float *)(v4 + 5432);
          v30 = (float)(v19 + v25) + (float)(v13 * (float)(v23 + (float)((float)(v27 * 0.000000059605) * v24)));
          v31 = (float)(v20 + v26) + (float)(v13 * (float)(v21 + (float)(v22 * (float)(v27 * 0.000000059605))));
          FIELD_F32(v4, 5428) = v30;
          FIELD_F32(v4, 5432) = v31;
          FIELD_F32(v4, 5436) = v30 - v9;
          FIELD_F32(v4, 5440) = v31 - v12;
          result = (float *)sub_6014A2F0((int)v10, v2);
          *v11 = v13 + (float)(v6 * (float)v8);
          v32 = v31 - *v29;
          FIELD_F32(v1, 180) = (float)(v30 - *v28) + FIELD_F32(v1, 180);
          FIELD_F32(v1, 184) = v32 + FIELD_F32(v1, 184);
        }
      }
      v3 = (int *)v3[1];
    }
    while ( v3 );
  }
  return result;
}
