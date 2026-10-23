/* sub_602B917C
 * address: 0x602B917C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602B917C(int *a1)
{
  int *v1; // r4
  int v3; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  v1 = a1 + 40;
  target = (*(int (__fastcall **)(int *))(*a1 + 644))(a1);
  v3 = (int)(float)((float)(2147500000.0 * 5.625) / 180.0);
  return moveValueTo(v1, &target, &v3);
}
