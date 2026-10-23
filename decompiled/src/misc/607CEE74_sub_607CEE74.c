/* sub_607CEE74
 * address: 0x607CEE74   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607CEE74(int a1)
{
  int v2; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  target = 0;
  v2 = 0x8000000;
  return moveValueTo((int *)(a1 + 160), &target, &v2);
}
