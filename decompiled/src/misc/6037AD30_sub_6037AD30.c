/* sub_6037AD30
 * address: 0x6037AD30   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6037AD30(int a1)
{
  int v2; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  target = 0;
  v2 = (int)(float)((float)(2147500000.0 * 5.625) / 180.0);
  return moveValueTo((int *)(a1 + 160), &target, &v2);
}
