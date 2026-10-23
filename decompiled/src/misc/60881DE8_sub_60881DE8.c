/* sub_60881DE8
 * address: 0x60881DE8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60881DE8(int *a1)
{
  int result; // r0

  result = *a1;
  if ( !result )
    return 0;
  if ( a1[1] != FIELD_U32(result, 32) )
    return 0;
  return result;
}
