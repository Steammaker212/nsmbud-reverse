/* sub_608B6E78
 * address: 0x608B6E78   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B6E78(int a1)
{
  if ( FIELD_U8(a1, 8) )
    return sub_608D5458(FIELD_U32(a1, 4));
  else
    return 0;
}
