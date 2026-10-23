/* sub_6059AC64
 * address: 0x6059AC64   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6059AC64(int a1)
{
  if ( (FIELD_U8(a1, 6262) & 8) != 0 )
    return sub_6059BB74(a1 + 8036);
  else
    return 0.0;
}
