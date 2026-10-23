/* sub_600D188C
 * address: 0x600D188C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600D188C(int *a1, int a2)
{
  int *v3; // r5
  int v5; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v3 = a1 + 40;
  target = (*(int (__fastcall **)(int *))(*a1 + 760))(a1);
  v5 = a2;
  return moveValueTo(v3, &target, &v5);
}
