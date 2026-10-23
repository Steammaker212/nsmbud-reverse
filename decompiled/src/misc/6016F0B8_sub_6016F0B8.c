/* sub_6016F0B8
 * address: 0x6016F0B8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6016F0B8(int a1, float *a2, int a3)
{
  float v3; // r3
  float v4; // r12
  float v5; // r1
  float v6; // r4
  float v7; // r5
  float v8; // s6
  float result; // s0

  FIELD_U32(a1, 768) = 11;
  FIELD_U32(a1, 752) = a2;
  v3 = *a2;
  FIELD_F32(a1, 1012) = *a2;
  v4 = a2[1];
  FIELD_F32(a1, 1016) = v4;
  v5 = a2[2];
  FIELD_F32(a1, 1020) = v5;
  FIELD_U32(a1, 776) = 0;
  FIELD_U8(a1, 1371) = 1;
  FIELD_U32(a1, 1040) = 0;
  FIELD_U32(a1, 1044) = 0;
  FIELD_U32(a1, 1048) = 0;
  v6 = FIELD_F32(a1, 664);
  FIELD_F32(a1, 988) = v6;
  v7 = FIELD_F32(a1, 668);
  FIELD_F32(a1, 992) = v7;
  v8 = FIELD_F32(a1, 672);
  FIELD_F32(a1, 996) = v8;
  FIELD_F32(a1, 1000) = (float)(v3 + v6) * 0.5;
  result = (float)(v5 + v8) * 0.5;
  FIELD_F32(a1, 1004) = (float)(v4 + v7) * 0.5;
  FIELD_F32(a1, 1008) = result;
  FIELD_U32(a1, 1024) = 0;
  FIELD_U32(a1, 1028) = a3;
  return result;
}
