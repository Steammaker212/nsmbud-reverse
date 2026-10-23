/* sub_6097C4F0
 * address: 0x6097C4F0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097C4F0(int a1, int a2)
{
  int v2; // r2

  v2 = FIELD_U32(a1, 2084) - FIELD_U32(a2, 2084);
  if ( !v2 )
    return FIELD_U8(a1, 841) - FIELD_U8(a2, 841);
  return v2;
}
