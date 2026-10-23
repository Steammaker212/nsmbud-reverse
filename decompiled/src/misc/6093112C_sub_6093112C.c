/* sub_6093112C
 * address: 0x6093112C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093112C(int a1)
{
  float v2; // s16
  float v3; // s18
  float v4; // s0
  float v5; // s10
  float v6; // s12
  float v7; // s6
  float v8; // s8
  float v9; // s4
  float v10; // s5
  float v11; // s10
  float v12; // s3
  float v13; // s14
  float v14; // s0

  sub_6092DC18(a1 + 32);
  v2 = FIELD_F32(a1, 448);
  v3 = sinf(v2);
  v4 = cosf(v2);
  v5 = FIELD_F32(a1, 428);
  v6 = FIELD_F32(a1, 432);
  v7 = FIELD_F32(a1, 412);
  v8 = FIELD_F32(a1, 408);
  v9 = v4 * 0.0;
  v10 = v4 * v5;
  v11 = v3 * v5;
  v12 = (float)(v3 * 0.0) + (float)(v4 * 0.0);
  FIELD_F32(a1, 788) = v10;
  v13 = (float)((float)(v4 * 0.0) - v3) * v6;
  v14 = (float)((float)(v3 * 0.0) + v4) * v6;
  FIELD_F32(a1, 792) = v13;
  FIELD_F32(a1, 796) = (float)((float)((float)(v13 * v7) + (float)(v10 * v8)) + (float)((float)(v12 * 0.0) * 0.0))
                       + 0.0;
  FIELD_U32(a1, 800) = 0;
  FIELD_U32(a1, 816) = 0;
  FIELD_F32(a1, 804) = v11;
  FIELD_F32(a1, 808) = v14;
  FIELD_F32(a1, 812) = (float)((float)((float)(v14 * v7) + (float)(v11 * v8))
                               + (float)((float)((float)((float)(v3 * 0.0) - v9) * 0.0) * 0.0))
                       + 0.0;
  return sub_60938F1C(a1, 0);
}
