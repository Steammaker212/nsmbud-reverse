/* sub_607D82A0
 * address: 0x607D82A0   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D82A0(int a1)
{
  __int16 v1; // r1
  float *v3; // r2
  float *v4; // r3
  int v5; // r2
  int v6; // r3
  __int16 v7; // r5
  int v8; // r12
  __int16 v9; // r4
  __int16 v10; // r2
  unsigned int v11; // lr
  int v12; // r2
  int v13; // t1
  int v14; // r3

  FIELD_U16(a1, 38) = 0;
  if ( FIELD_U8(a1, 40) )
    return 0;
  v1 = FIELD_U16(a1, 36);
  if ( (v1 & 8) != 0 )
    return 0;
  if ( FIELD_U16(a1, 34) )
  {
    --FIELD_U16(a1, 34);
    return 0;
  }
  FIELD_U16(a1, 36) = v1 & 0xFFFB;
  v3 = *(float **)(a1 + 4);
  v4 = *(float **)(a1 + 8);
  *v3 = *v3 + *v4;
  v3[1] = v3[1] + v4[1];
  v3[2] = v3[2] + v4[2];
  if ( (float)((float)((float)(FIELD_F32(a1, 20) - *(float *)(FIELD_U32(a1, 4) + 4))
                     * (float)(FIELD_F32(a1, 20) - *(float *)(FIELD_U32(a1, 4) + 4)))
             + (float)((float)(FIELD_F32(a1, 16) - **(float **)(a1 + 4))
                     * (float)(FIELD_F32(a1, 16) - **(float **)(a1 + 4)))) >= (float)(**(float **)(a1 + 12)
                                                                                      * **(float **)(a1 + 12)) )
  {
    sub_607D8178((int *)a1);
    return 0;
  }
  v5 = FIELD_U16(a1, 32);
  v6 = *(_DWORD *)a1;
  v7 = 12;
  v8 = *(_DWORD *)a1 + 20 * v5;
  v9 = FIELD_U16(v8, 14);
  FIELD_U16(a1, 38) = v9;
  if ( (v9 & 1) == 0 )
  {
    FIELD_U16(a1, 30) = v5;
    if ( FIELD_U8(a1, 41) )
    {
      if ( v5 )
      {
LABEL_11:
        LOWORD(v5) = v5 - 1;
LABEL_18:
        FIELD_U16(a1, 32) = v5;
        v7 = 4;
        v12 = 20 * (unsigned __int16)v5;
        v13 = *(__int16 *)(v6 + v12);
        v14 = *(__int16 *)(v6 + v12 + 2);
        FIELD_F32(a1, 16) = (float)v13;
        FIELD_F32(a1, 20) = (float)-v14;
        FIELD_U16(a1, 34) = FIELD_U16(v8, 12);
        goto LABEL_19;
      }
      v10 = 0;
      if ( (FIELD_U8(a1, 36) & 2) != 0 )
      {
        LOWORD(v5) = FIELD_U16(a1, 28);
        goto LABEL_11;
      }
    }
    else
    {
      v11 = FIELD_U16(a1, 28);
      if ( ++v5 < v11 )
        goto LABEL_18;
      LOWORD(v5) = 0;
      if ( (FIELD_U8(a1, 36) & 2) != 0 )
        goto LABEL_18;
      v10 = v11 - 1;
    }
    FIELD_U16(a1, 32) = v10;
  }
LABEL_19:
  FIELD_U16(a1, 36) = v7 | v1;
  sub_607D8178((int *)a1);
  return 1;
}
