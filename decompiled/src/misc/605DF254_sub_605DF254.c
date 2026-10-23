/* sub_605DF254
 * address: 0x605DF254   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DF254(int a1)
{
  int v1; // r4

  v1 = a1 + 6264;
  FIELD_U32(a1, 6264) &= ~0x8000u;
  sub_605EB6D4(a1 + 6064);
  FIELD_U32(v1, 520) = 5;
  return 5;
}
