/* sub_6040EB10
 * address: 0x6040EB10   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040EB10(int result, float a2)
{
  float v2; // s2
  float v3; // s0

  if ( a2 == 0.0 )
  {
    v2 = 0.0;
    v3 = 1.0;
    FIELD_U32(result, 40) = 0;
  }
  else
  {
    v2 = 1.0;
    FIELD_U32(result, 40) = 1065353216;
    FIELD_F32(result, 48) = 1.0 / a2;
    v3 = 0.0;
    FIELD_U8(result, 61) = 1;
  }
  FIELD_F32(result, 44) = v3;
  FIELD_F32(result, 52) = v2;
  FIELD_F32(result, 56) = v3;
  return result;
}
