/* sub_6040EB64
 * address: 0x6040EB64   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040EB64(int result)
{
  float v1; // s0
  float v2; // s4
  float v3; // s8
  float v4; // s0
  float v5; // s2

  v1 = FIELD_F32(result, 40);
  if ( v1 != 0.0 )
  {
    v2 = FIELD_F32(result, 48) + FIELD_F32(result, 44);
    FIELD_F32(result, 44) = v2;
    if ( v2 >= 1.0 )
    {
      FIELD_U32(result, 40) = 0;
      FIELD_U32(result, 44) = 1065353216;
      FIELD_U32(result, 52) = 0;
      FIELD_U32(result, 56) = 1065353216;
    }
    else
    {
      v3 = v1 - (float)(v2 * (float)(v2 * v1));
      FIELD_F32(result, 40) = v3;
      v4 = v3 / v1;
      v5 = 1.0 / (float)(v4 + (float)(1.0 - v3));
      FIELD_F32(result, 52) = v4 * v5;
      FIELD_F32(result, 56) = (float)(1.0 - v3) * v5;
      FIELD_U8(result, 61) = 1;
    }
  }
  return result;
}
