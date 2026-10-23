/* sub_602EA94C
 * address: 0x602EA94C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EA94C(int result)
{
  FIELD_U8(result, 7532) = 0;
  if ( !FIELD_U8(result, 7531) )
    FIELD_U32(result, 328) = 0;
  FIELD_U32(result, 3180) &= ~8u;
  FIELD_U32(result, 3188) &= ~8u;
  FIELD_U8(result, 7527) = 0;
  return result;
}
