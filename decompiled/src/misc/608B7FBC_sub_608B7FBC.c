/* sub_608B7FBC
 * address: 0x608B7FBC   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B7FBC(int result, int a2, int a3)
{
  FIELD_U32(result, 236) = a2;
  FIELD_U32(result, 240) = a3;
  return result;
}
