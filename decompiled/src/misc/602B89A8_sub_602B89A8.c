/* sub_602B89A8
 * address: 0x602B89A8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602B89A8(int a1)
{
  if ( FIELD_U32(a1, 6308) )
  {
    FIELD_U32(a1, 6308) = 0;
    sub_60421AD4(FIELD_U32(a1, 6304));
  }
}
