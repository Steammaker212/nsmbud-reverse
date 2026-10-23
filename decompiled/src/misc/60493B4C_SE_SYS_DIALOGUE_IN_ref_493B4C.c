/* SE_SYS_DIALOGUE_IN_ref_493B4C
 * address: 0x60493B4C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DIALOGUE_IN_ref_493B4C(int a1)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = sub_604962DC(1);
  sub_60473DE4((_DWORD *)(a1 + 36), 1u, v3, 0);
  sub_60807EF0(SoundSystem_instance, "SE_SYS_DIALOGUE_IN", 0, 1);
  return SE_SYS_HURRY_UP_ref_8164F8(dword_60CC6B68, 10);
}
