/* sub_6016E18C
 * address: 0x6016E18C   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016E18C(int a1)
{
  float v2; // s2
  float v3; // s0
  float v4; // s4
  float v5; // lr
  int result; // r0
  float v7; // r2
  float v8; // r1
  float v9; // s14
  float v10; // s1
  float v11; // s3
  float v12; // s8
  float v13; // s10
  float v14; // s2
  float v15; // s4
  float v16; // s12

  v2 = FIELD_F32(a1, 1324);
  v3 = FIELD_F32(a1, 1332);
  v4 = FIELD_F32(a1, 1328);
  if ( FIELD_U8(a1, 1374) )
  {
    v3 = v3 + FIELD_F32(a1, 1356);
    v4 = v4 + FIELD_F32(a1, 1352);
    v2 = v2 + FIELD_F32(a1, 1348);
  }
  v5 = FIELD_F32(a1, 724);
  result = a1 + 1040;
  FIELD_F32(a1, 736) = v5;
  v7 = FIELD_F32(a1, 728);
  FIELD_F32(a1, 740) = v7;
  v8 = FIELD_F32(a1, 732);
  FIELD_F32(a1, 744) = v8;
  v9 = FIELD_F32(a1, 900);
  v10 = FIELD_F32(a1, 904);
  v11 = FIELD_F32(a1, 908);
  v12 = (float)((float)(v4 + FIELD_F32(a1, 656)) + v10) + (float)(FIELD_F32(a1, 716) * 0.0);
  v13 = (float)((float)(v3 + FIELD_F32(a1, 660)) + v11) + (float)(FIELD_F32(a1, 720) * 0.0);
  FIELD_F32(a1, 712) = (float)((float)(v2 + FIELD_F32(a1, 652)) + v9) + (float)(FIELD_F32(a1, 712) * 0.0);
  FIELD_F32(a1, 716) = v12;
  FIELD_F32(a1, 720) = v13;
  v14 = (float)((float)(v2 + (float)(FIELD_F32(a1, 664) + FIELD_F32(a1, 1040))) + v9) + (float)(v5 * 0.0);
  v15 = (float)((float)(v4 + (float)(FIELD_F32(a1, 668) + FIELD_F32(a1, 1044))) + v10) + (float)(v7 * 0.0);
  v16 = (float)((float)(v3 + (float)(FIELD_F32(a1, 672) + FIELD_F32(a1, 1048))) + v11) + (float)(v8 * 0.0);
  FIELD_F32(a1, 724) = v14;
  FIELD_F32(a1, 728) = v15;
  FIELD_F32(a1, 732) = v16;
  if ( sqrtf(
         (float)((float)((float)(v7 - v15) * (float)(v7 - v15)) + (float)((float)(v5 - v14) * (float)(v5 - v14)))
       + (float)((float)(v8 - v16) * (float)(v8 - v16))) < 0.1 )
  {
    result = FIELD_U32(a1, 840);
    if ( result == 3 )
    {
      result = FIELD_U32(a1, 948);
      if ( result >= 0 )
      {
        FIELD_U32(a1, 948) = -1;
        return -1;
      }
    }
  }
  return result;
}
