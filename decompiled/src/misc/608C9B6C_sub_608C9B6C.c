/* sub_608C9B6C
 * address: 0x608C9B6C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C9B6C(int result, float32x2_t a2, float32x2_t a3)
{
  float v3; // s0
  __int16 v4; // t1

  a3.n64_u32[0] = 0;
  v3 = vmax_f32(a2, a3).n64_f32[0];
  if ( v3 != FIELD_F32(result, 428) )
  {
    FIELD_F32(result, 428) = v3;
    v4 = FIELD_U16(result, 424);
    result += 424;
    *(_WORD *)result = v4 | 0x40;
  }
  return result;
}
