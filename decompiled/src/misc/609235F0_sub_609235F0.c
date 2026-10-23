/* sub_609235F0
 * address: 0x609235F0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609235F0(int a1)
{
  int v1; // r4

  v1 = a1 + 12;
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 12) + 12))(a1 + 12);
  return FIELD_U32(v1, 4);
}
