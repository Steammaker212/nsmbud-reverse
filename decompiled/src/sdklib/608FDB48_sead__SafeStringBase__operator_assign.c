/* sead__SafeStringBase__operator_assign
 * address: 0x608FDB48   size: 12   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__SafeStringBase__operator_assign(int result, int a2)
{
  FIELD_U32(result, 4) = FIELD_U32(a2, 4);
  return result;
}
