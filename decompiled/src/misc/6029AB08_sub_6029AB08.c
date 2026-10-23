/* sub_6029AB08
 * address: 0x6029AB08   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029AB08(int a1)
{
  unsigned int v1; // r1
  int v2; // r2
  float *v3; // r2

  v1 = FIELD_U32(a1, 164);
  v2 = (v1 >> 20) & 0xFF0;
  v1 &= 0xFFFFFFu;
  v3 = (float *)((char *)sinLutTable + v2);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108)
                       + (float)((float)(*v3 + (float)((float)((float)v1 * v3[1]) * 0.000000059605)) * -10.0);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112)
                       + (float)((float)(v3[2] + (float)((float)((float)v1 * v3[3]) * 0.000000059605)) * -16.0);
  return Enemy__vf234(a1);
}
