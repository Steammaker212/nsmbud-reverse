/* sub_604785CC
 * address: 0x604785CC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604785CC(int a1)
{
  int v1; // r0

  v1 = FIELD_U32(a1, 124);
  return v1 && FIELD_U8(v1, 20) != 0;
}
