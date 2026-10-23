/* sub_608D0A28
 * address: 0x608D0A28   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608D0A28(int a1, int a2, int a3, int a4, int a5, int a6)
{
  sub_608D0B5C(a1, 1, a4, a5, a6);
  FIELD_U32(a1, 44) = a3;
  __asm { ORR             PC, R0, R1,LSL R12 }
}
