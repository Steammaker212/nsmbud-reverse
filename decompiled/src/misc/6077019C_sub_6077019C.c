/* sub_6077019C
 * address: 0x6077019C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077019C(int result)
{
  if ( !FIELD_U32(result, 9964) )
    FIELD_U32(result, 1216) &= ~0x200000u;
  return result;
}
