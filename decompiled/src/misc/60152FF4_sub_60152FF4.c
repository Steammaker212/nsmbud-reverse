/* sub_60152FF4
 * address: 0x60152FF4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60152FF4(int a1, int a2)
{
  float v2; // s0
  float v3; // s2
  int result; // r0

  v2 = (float)(*(float *)(FIELD_U32(a2, 152) + 4) + FIELD_F32(a2, 176)) + FIELD_F32(a2, 208);
  v3 = (float)(*(float *)(FIELD_U32(a1, 152) + 4) + FIELD_F32(a1, 176)) + FIELD_F32(a1, 208);
  result = v3 > v2;
  if ( v3 < v2 )
    return -1;
  return result;
}
