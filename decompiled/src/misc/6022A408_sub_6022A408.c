/* sub_6022A408
 * address: 0x6022A408   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6022A408(int a1)
{
  float v1; // s0
  int v2; // r1

  v1 = FIELD_F32(a1, 36);
  if ( (float)(v1 + 0.8) <= 0.00000011921 && (float)(v1 + 0.8) >= -0.00000011921 || (v2 = 1, FIELD_F32(a1, 40) <= 0.0) )
  {
    if ( v1 > 0.00000011921 )
      return FIELD_F32(a1, 40) < 0.0;
    v2 = 0;
    if ( v1 < -0.00000011921 )
      return FIELD_F32(a1, 40) < 0.0;
  }
  return v2;
}
