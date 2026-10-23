/* sub_60800A5C
 * address: 0x60800A5C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60800A5C(int result, int a2)
{
  float v2; // s0
  float v3; // s2

  v2 = FIELD_F32(result, 32);
  v3 = FIELD_F32(a2, 4) + FIELD_F32(result, 24);
  if ( v2 >= v3 )
  {
    v3 = FIELD_F32(result, 32);
    if ( v2 > FIELD_F32(a2, 12) )
      v3 = FIELD_F32(a2, 12);
  }
  FIELD_F32(result, 32) = v3;
  return result;
}
