/* sub_602415F8
 * address: 0x602415F8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602415F8(int a1)
{
  if ( !FIELD_U32(a1, 6320) )
    sub_60247340(a1);
  FIELD_U32(a1, 6488) = 0;
  FIELD_U32(a1, 6492) = 50;
  FIELD_U32(a1, 6380) = -1093874483;
  FIELD_U16(a1, 6420) = 1;
  return 6420;
}
