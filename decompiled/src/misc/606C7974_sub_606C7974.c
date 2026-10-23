/* sub_606C7974
 * address: 0x606C7974   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606C7974(signed int result)
{
  if ( (FIELD_U8(result, 22) & 0x10) != 0 )
    return LightMask__init((RevealMaskRelated *)(result + 7136), 0, 2);
  return result;
}
