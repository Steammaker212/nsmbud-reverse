/* sub_60864BD8
 * address: 0x60864BD8   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60864BD8(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 16);
  if ( result <= 0 )
    return 0;
  return result;
}
