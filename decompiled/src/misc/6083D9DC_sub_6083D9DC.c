/* sub_6083D9DC
 * address: 0x6083D9DC   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083D9DC(int result, int a2, int a3)
{
  FIELD_U32(result, 16) = a2;
  FIELD_U32(result, 20) = a3;
  return result;
}
