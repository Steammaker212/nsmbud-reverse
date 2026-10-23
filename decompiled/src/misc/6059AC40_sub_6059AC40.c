/* sub_6059AC40
 * address: 0x6059AC40   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059AC40(int a1, int a2)
{
  if ( (FIELD_U8(a1, 6262) & 8) != 0 )
    return sub_6059BDF8(a1 + 8036, a2, 0);
  else
    return sub_605E4EBC();
}
