/* sub_6099360C
 * address: 0x6099360C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099360C(int result, float *a2)
{
  float v2; // s0
  float v3; // s2

  if ( a2 )
  {
    v2 = FIELD_F32(result, 72);
    if ( FIELD_U8(result, 80) )
      v2 = v2 + (float)(*a2 - FIELD_F32(result, 64));
    v3 = FIELD_F32(result, 76);
    if ( FIELD_U8(result, 81) )
      v3 = v3 + (float)(a2[1] - FIELD_F32(result, 68));
    result = FIELD_U32(result, 60);
    FIELD_F32(result, 24) = v2;
    FIELD_F32(result, 28) = v3;
    FIELD_U8(result, 64) |= 0x10u;
  }
  return result;
}
