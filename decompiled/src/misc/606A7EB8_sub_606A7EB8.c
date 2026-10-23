/* sub_606A7EB8
 * address: 0x606A7EB8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606A7EB8(int a1, unsigned int a2, unsigned int a3)
{
  sub_606A7D28(a1, 0, a2 & 1, a3 & 1);
  sub_606A7D28(a1 + 8, 1u, (a2 >> 1) & 1, (a3 >> 1) & 1);
  sub_606A7D28(a1 + 16, 2u, (a2 >> 2) & 1, (a3 >> 2) & 1);
  sub_606A7D28(a1 + 24, 3u, (a2 >> 3) & 1, (a3 >> 3) & 1);
}
