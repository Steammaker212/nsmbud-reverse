/* sub_606EE4F0
 * address: 0x606EE4F0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EE4F0(int a1, int a2)
{
  int v2; // r4

  v2 = FIELD_U32(a2, 64);
  sub_602A3EFC(v2 + 7008, 16, 0.02);
  lift_trampoline_ref_6ED8EC(v2 + 6100);
  return 1;
}
