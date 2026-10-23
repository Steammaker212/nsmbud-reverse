/* sub_6058E33C
 * address: 0x6058E33C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058E33C(int result)
{
  FIELD_U32(result, 6112) = (unsigned __int8)__ROR4__(FIELD_U32(result, 20), 8) + 1;
  return result;
}
