/* sub_602613D4
 * address: 0x602613D4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602613D4(int a1, int a2)
{
  int v2; // r0

  v2 = FIELD_U32(a2, 32);
  return v2 && FIELD_U32(v2, 300) == 17;
}
