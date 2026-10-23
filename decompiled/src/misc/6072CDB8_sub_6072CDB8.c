/* sub_6072CDB8
 * address: 0x6072CDB8   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6072CDB8(int a1)
{
  float result; // s0

  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U8(a1, 6104) = 0;
  FIELD_U32(a1, 6108) = 1056964608;
  FIELD_U32(a1, 144) = 1056964608;
  FIELD_U32(a1, 148) = 1056964608;
  FIELD_U32(a1, 152) = 1056964608;
  LODWORD(result) = (int)(float)((float)(2147500000.0
                                       * (float)(*(float *)&dword_60AF1F60[FIELD_U32(a1, 80)]
                                               * (float)((float)(COERCE_FLOAT(
                                                                   (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9)
                                                                 | 0x3F800000)
                                                               + -1.0)
                                                       * 45.0)))
                               / 180.0);
  FIELD_F32(a1, 164) = result;
  return result;
}
