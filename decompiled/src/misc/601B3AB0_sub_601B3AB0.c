/* sub_601B3AB0
 * address: 0x601B3AB0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B3AB0(int a1, int a2)
{
  int result; // r0

  result = sub_601E1308(a2);
  FIELD_U32(a1, 180) = result;
  FIELD_U32(a1, 1000) = result;
  return result;
}
