/* sub_606CAA68
 * address: 0x606CAA68   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CAA68(int a1, int a2)
{
  int result; // r0

  sub_606D2458();
  result = sub_606D4838(a2, FIELD_U32(a1, 6908));
  FIELD_U8(a1, 6912) = result;
  return result;
}
