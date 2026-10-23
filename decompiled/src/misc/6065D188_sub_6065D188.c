/* sub_6065D188
 * address: 0x6065D188   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065D188(int a1)
{
  int result; // r0

  sub_6065DB20(a1, 0);
  result = FIELD_U32(a1, 164);
  FIELD_U32(a1, 6676) = result;
  return result;
}
