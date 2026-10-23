/* sub_6050ABE8
 * address: 0x6050ABE8   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050ABE8(int result)
{
  if ( (FIELD_U8(result, 36) & 1) != 0 )
    JUMPOUT(0x6050AD6C);
  return result;
}
