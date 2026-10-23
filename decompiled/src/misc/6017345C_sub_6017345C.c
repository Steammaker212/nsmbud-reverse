/* sub_6017345C
 * address: 0x6017345C   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6017345C(int a1, int a2, float a3, float a4, float a5)
{
  int v6; // r0
  int result; // r0
  float v8; // s0
  float v9; // s4
  float v10; // s16
  float v11; // s18
  float v12; // s20

  v6 = FIELD_U32(a1, 60);
  if ( v6 == 2 )
  {
    result = FIELD_U8(a1, 204);
    if ( (result & 1) == 0 )
      return result;
    v8 = FIELD_F32(a1, 104);
    v9 = FIELD_F32(a1, 108);
    result = 1;
    FIELD_U32(a1, 272) = 0;
    FIELD_F32(a1, 276) = a4 - v8;
    FIELD_F32(a1, 280) = a5 - v9;
    FIELD_U8(a1, 308) = 1;
    FIELD_F32(a1, 268) = sqrtf(
                             (float)((float)((float)((float)(a4 - v8) - FIELD_F32(a1, 288))
                                           * (float)((float)(a4 - v8) - FIELD_F32(a1, 288)))
                                   + (float)((float)(0.0 - FIELD_F32(a1, 284)) * (float)(0.0 - FIELD_F32(a1, 284))))
                           + (float)((float)((float)(a5 - v9) - FIELD_F32(a1, 292))
                                   * (float)((float)(a5 - v9) - FIELD_F32(a1, 292))));
    FIELD_U32(a1, 220) = 0;
    FIELD_F32(a1, 224) = a4 - v8;
    FIELD_F32(a1, 228) = a5 - v9;
    FIELD_U32(a1, 284) = 0;
    FIELD_U32(a1, 288) = 0;
    FIELD_U32(a1, 292) = 0;
    goto LABEL_8;
  }
  if ( v6 == 3 )
  {
    FIELD_U32(a1, 272) = 0;
    FIELD_U32(a1, 276) = 0;
    FIELD_U32(a1, 280) = 0;
    FIELD_U8(a1, 308) = 1;
    FIELD_F32(a1, 268) = sqrtf(
                             (float)((float)((float)(0.0 - FIELD_F32(a1, 288)) * (float)(0.0 - FIELD_F32(a1, 288)))
                                   + (float)((float)(0.0 - FIELD_F32(a1, 284)) * (float)(0.0 - FIELD_F32(a1, 284))))
                           + (float)((float)(0.0 - FIELD_F32(a1, 292)) * (float)(0.0 - FIELD_F32(a1, 292))));
    FIELD_U32(a1, 220) = 0;
    FIELD_U32(a1, 224) = 0;
    FIELD_U32(a1, 228) = 0;
    FIELD_U32(a1, 284) = 0;
    FIELD_U32(a1, 288) = 0;
    FIELD_U32(a1, 292) = 0;
    return 1;
  }
  result = FIELD_U8(a1, 204);
  if ( (result & 1) != 0 )
  {
    v10 = a3 - FIELD_F32(a1, 100);
    v11 = a4 - FIELD_F32(a1, 104);
    v12 = a5 - FIELD_F32(a1, 108);
    FIELD_F32(a1, 272) = v10;
    FIELD_F32(a1, 276) = v11;
    FIELD_F32(a1, 280) = v12;
    FIELD_U8(a1, 308) = 1;
    result = 0;
    FIELD_F32(a1, 268) = sqrtf(
                             (float)((float)((float)(v11 - FIELD_F32(a1, 288)) * (float)(v11 - FIELD_F32(a1, 288)))
                                   + (float)((float)(v10 - FIELD_F32(a1, 284)) * (float)(v10 - FIELD_F32(a1, 284))))
                           + (float)((float)(v12 - FIELD_F32(a1, 292)) * (float)(v12 - FIELD_F32(a1, 292))));
    FIELD_F32(a1, 220) = v10;
    FIELD_F32(a1, 224) = v11;
    FIELD_F32(a1, 228) = v12;
    FIELD_U32(a1, 284) = 0;
    FIELD_U32(a1, 288) = 0;
    FIELD_U32(a1, 292) = 0;
LABEL_8:
    FIELD_U32(a1, 244) = a2;
  }
  return result;
}
