/* sub_6097FFF4
 * address: 0x6097FFF4   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097FFF4(int result, int a2, char a3)
{
  FIELD_U32(result, 200) = a2;
  FIELD_U8(result, 204) = a3;
  return result;
}
