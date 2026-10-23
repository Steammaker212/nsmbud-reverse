/* sub_608C6CCC
 * address: 0x608C6CCC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608C6CCC(double a1, float32x2_t a2)
{
  int v2; // r0

  a2.n64_u32[0] = -1028338483;
  v2 = (int)(float)(vmax_f32(*(float32x2_t *)&a1, a2).n64_f32[0] * 10.0) + 904;
  if ( *(float *)&a1 > 6.0 )
    v2 = 964;
  return flt_60B34BDC[v2];
}
