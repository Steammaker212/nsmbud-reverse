/* sub_60003B2C
 * address: 0x60003B2C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60003B2C(int result, int a2)
{
  float v2; // s0
  float v3; // s2
  int v4; // r2

  v2 = FIELD_F32(result, 112);
  v3 = FIELD_F32(result, 108);
  if ( (float)((float)((float)(v2 - FIELD_F32(result, 588)) * (float)(v2 - FIELD_F32(result, 588)))
             + (float)((float)(v3 - FIELD_F32(result, 584)) * (float)(v3 - FIELD_F32(result, 584)))) > 65536.0 )
  {
    FIELD_F32(result, 108) = v3;
    v4 = FIELD_U32(result, 116);
    FIELD_F32(result, 584) = v3;
    FIELD_F32(result, 588) = v2;
    FIELD_U32(result, 592) = v4;
    FIELD_U32(result, 616) = v4;
    FIELD_F32(result, 608) = v3;
    FIELD_F32(result, 612) = v2;
    return sub_60160948(a2);
  }
  return result;
}
