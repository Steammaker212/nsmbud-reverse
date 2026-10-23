/* sub_608D9E44
 * address: 0x608D9E44   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D9E44(int result, int a2, int a3)
{
  FIELD_U32(result, 20) = a2;
  FIELD_U32(result, 24) = a3;
  return result;
}
