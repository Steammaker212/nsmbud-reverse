/* sub_6075A6B0
 * address: 0x6075A6B0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075A6B0(int a1)
{
  int result; // r0

  sub_6078E8E8();
  result = FIELD_U32(a1, 300);
  if ( result != 1 )
    result = 0;
  FIELD_U32(a1, 560) = result;
  return result;
}
