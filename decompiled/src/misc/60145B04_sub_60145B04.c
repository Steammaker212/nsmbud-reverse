/* sub_60145B04
 * address: 0x60145B04   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60145B04(int result)
{
  int v1; // r3
  int v2; // r1
  int v3; // r2

  v1 = FIELD_U32(result, 156);
  v2 = FIELD_U32(result, 6116);
  v3 = FIELD_U32(result, 6112);
  if ( FIELD_F32(result, 120) >= 0.0 )
  {
    FIELD_U32(result, 156) = v1 + v3;
    FIELD_U32(result, 160) += v2;
    FIELD_U32(result, 164) += FIELD_U32(result, 6120);
  }
  else
  {
    FIELD_U32(result, 156) = v1 - v3;
    FIELD_U32(result, 160) -= v2;
    FIELD_U32(result, 164) -= FIELD_U32(result, 6120);
  }
  return result;
}
