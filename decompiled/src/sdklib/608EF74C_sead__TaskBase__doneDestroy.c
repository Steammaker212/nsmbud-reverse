/* sead__TaskBase__doneDestroy
 * address: 0x608EF74C   size: 16   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__TaskBase__doneDestroy(int result)
{
  FIELD_U32(result, 48) |= 4u;
  return result;
}
