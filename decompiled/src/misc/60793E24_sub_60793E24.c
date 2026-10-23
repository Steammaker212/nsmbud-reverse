/* sub_60793E24
 * address: 0x60793E24   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60793E24(int a1)
{
  int v1; // r1

  v1 = FIELD_U32(a1, 32);
  return v1 != -1 && v1 != FIELD_U32(a1, 28);
}
