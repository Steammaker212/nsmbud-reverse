/* lkp_fire_ref
 * address: 0x6008397C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_fire_ref(int a1)
{
  int v2; // r0
  int result; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 7100);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "lkp_fire";
  sub_60421AE4(v2, v4, 0);
  result = ((int (__fastcall *)(int))loc_6008950C)(a1);
  FIELD_U32(a1, 120) = 0;
  return result;
}
