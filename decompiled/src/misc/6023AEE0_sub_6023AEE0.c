/* sub_6023AEE0
 * address: 0x6023AEE0   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023AEE0(int32x4_t *a1, int32x4_t *a2)
{
  float v2; // s0
  int result; // r0

  v2 = COERCE_FLOAT(vzipq_s32(vzipq_s32(a1[38], a1[40]).val[1], vzipq_s32(a1[39], a1[41]).val[1]).val[0].n128_u32[3])
     - COERCE_FLOAT(vzipq_s32(vzipq_s32(a2[38], a2[40]).val[1], vzipq_s32(a2[39], a2[41]).val[1]).val[0].n128_u32[3]);
  result = v2 > 0.0;
  if ( v2 < 0.0 )
    return -1;
  return result;
}
