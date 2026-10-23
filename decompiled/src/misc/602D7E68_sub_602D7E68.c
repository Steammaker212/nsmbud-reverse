/* sub_602D7E68
 * address: 0x602D7E68   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602D7E68(int a1, int a2)
{
  int v3; // r0

  v3 = sub_602D7E88(FIELD_U32(a2, 64));
  FIELD_U32(a1, 4) = v3;
  return v3 != 0;
}
