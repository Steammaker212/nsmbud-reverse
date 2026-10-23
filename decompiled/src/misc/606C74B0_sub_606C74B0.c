/* sub_606C74B0
 * address: 0x606C74B0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C74B0(int result)
{
  if ( FIELD_F32(result, 7092) == 0.0 )
    FIELD_U8(result, 19) = 1;
  return result;
}
