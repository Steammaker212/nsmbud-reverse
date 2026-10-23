/* sub_6059A9DC
 * address: 0x6059A9DC   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059A9DC(int a1)
{
  if ( (FIELD_U8(a1, 6262) & 2) != 0 )
    return 0;
  else
    return sub_605D8AA0();
}
