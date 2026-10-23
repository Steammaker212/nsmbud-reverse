/* sub_603B2690
 * address: 0x603B2690   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603B2690(int a1, unsigned int a2, float *a3)
{
  unsigned int v3; // r1
  float *v4; // r3
  float v5; // s0
  float result; // s0

  if ( a2 >= 0x10 )
    a2 = 0;
  v3 = FIELD_U32(a1, 6476) + *(_DWORD *)(a1 + 4 * a2 + 6504);
  v4 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v5 = (float)(v3 & 0xFFFFFF);
  *a3 = FIELD_F32(a1, 108)
      + (float)(FIELD_F32(a1, 6488) * (float)(v4[2] + (float)((float)(v4[3] * v5) * 0.000000059605)));
  result = v5 * v4[1];
  a3[1] = FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 6488) * (float)(*v4 + (float)(result * 0.000000059605)));
  return result;
}
