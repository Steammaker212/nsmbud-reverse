/* sub_6079D134
 * address: 0x6079D134   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079D134(int a1, float a2)
{
  int v2; // r1

  v2 = 0;
  if ( (FIELD_U8(a1, 1208) & 2) != 0 )
  {
    v2 = 1;
    FIELD_F32(a1, 144) = a2;
    FIELD_F32(a1, 148) = a2;
    FIELD_F32(a1, 152) = a2;
  }
  return v2;
}
