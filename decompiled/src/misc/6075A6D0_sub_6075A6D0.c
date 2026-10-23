/* sub_6075A6D0
 * address: 0x6075A6D0   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075A6D0(int result, int a2)
{
  FIELD_U32(result, 556) = a2;
  if ( a2 != 1 )
    LOBYTE(a2) = 0;
  FIELD_U8(result, 564) = a2;
  return result;
}
