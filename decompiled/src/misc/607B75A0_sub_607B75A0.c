/* sub_607B75A0
 * address: 0x607B75A0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B75A0(int result)
{
  if ( (FIELD_U8(result, 1219) & 4) == 0 )
    FIELD_U32(result, 1212) |= 0x40u;
  return result;
}
