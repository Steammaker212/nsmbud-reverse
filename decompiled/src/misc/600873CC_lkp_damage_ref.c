/* lkp_damage_ref
 * address: 0x600873CC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_damage_ref(_DWORD *a1)
{
  int v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v2 = a1[1775];
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "lkp_damage";
  sub_60421AE4(v2, v4, 1);
  a1[30] = 0;
  a1[31] = 0;
  a1[34] = -1065353216;
  a1[25] = -1103101952;
  return -1103101952;
}
