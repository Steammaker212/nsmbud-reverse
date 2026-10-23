/* sub_60333E80
 * address: 0x60333E80   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60333E80(int a1, int a2)
{
  int v2; // r0

  v2 = FIELD_U16(a2, 24) ^ 0x1F;
  return v2 != 0;
}
