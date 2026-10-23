/* jc_demo_W7_shock2_ref_3FFBC
 * address: 0x6003FFBC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_demo_W7_shock2_ref_3FFBC(_DWORD *a1)
{
  _DWORD v3[6]; // [sp+0h] [bp-18h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "jc_demo_W7_shock2";
  sub_60047464(a1, 0, v3, 0, 0.0, 1.0);
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 3);
  a1[2950] = 477218560;
  a1[2951] = 59652320;
  a1[2873] = 1;
  return 1;
}
