/* sub_604729C4
 * address: 0x604729C4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604729C4(int a1, int a2)
{
  int result; // r0

  result = sub_6047DA04(a1 + 3276, FIELD_U32(a2, 172), 2 * FIELD_U16(a2, 214));
  FIELD_U32(a1, 3292) = result;
  return result;
}
