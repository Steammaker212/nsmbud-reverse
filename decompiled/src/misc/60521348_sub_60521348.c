/* sub_60521348
 * address: 0x60521348   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60521348(int result)
{
  if ( FIELD_U8(result, 4303) )
  {
    result += 3868;
    if ( FIELD_U8(result, 48) )
      return sub_607949E8(FIELD_U32(result, 4));
  }
  return result;
}
