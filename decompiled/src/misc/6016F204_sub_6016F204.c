/* sub_6016F204
 * address: 0x6016F204   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6016F204(int a1, int a2, int a3, int a4, float a5)
{
  float *v5; // r4
  float v6; // s2
  float result; // s0

  v5 = (float *)(a1 + 848);
  if ( a4 )
    v5 = (float *)(a1 + 672);
  FIELD_U32(a1, 772) = FIELD_U32(a1, 768);
  FIELD_U32(a1, 768) = 13;
  FIELD_U8(a1, 1379) = a4;
  FIELD_U32(a1, 1016) = 0;
  FIELD_U32(a1, 1020) = 0;
  FIELD_F32(a1, 1012) = a5;
  FIELD_U32(a1, 992) = 0;
  FIELD_U32(a1, 996) = 0;
  v6 = *v5;
  FIELD_F32(a1, 988) = *v5;
  FIELD_F32(a1, 1000) = (float)(v6 + a5) * 0.5;
  result = (float)(0.0 + 0.0) * 0.5;
  FIELD_F32(a1, 1004) = result;
  FIELD_F32(a1, 1008) = result;
  FIELD_U32(a1, 1024) = 0;
  FIELD_U32(a1, 1028) = a2;
  FIELD_U32(a1, 1036) = a3;
  return result;
}
