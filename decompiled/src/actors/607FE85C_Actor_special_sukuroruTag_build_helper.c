/* Actor_special_sukuroruTag_build_helper
 * address: 0x607FE85C   size: 108   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_special_sukuroruTag_build_helper(int result, int a2, _DWORD *a3, int a4, float a5)
{
  int v5; // r1
  float *v6; // r2
  float v7; // s0

  FIELD_F32(result, 52) = a5;
  FIELD_U8(result, 56) = 1;
  FIELD_U32(result, 72) = a2;
  v5 = *a3 & 0xFFFFFF;
  v6 = (float *)((char *)sinLutTable + ((*a3 >> 20) & 0xFF0));
  v7 = (float)(unsigned int)v5 * 0.000000059605;
  FIELD_F32(result, 76) = *v6 + (float)(v6[1] * v7);
  FIELD_F32(result, 80) = v6[2] + (float)(v7 * v6[3]);
  if ( !a4 )
    FIELD_U8(result, 57) = 1;
  return result;
}
