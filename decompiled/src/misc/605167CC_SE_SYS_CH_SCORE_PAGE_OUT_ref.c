/* SE_SYS_CH_SCORE_PAGE_OUT_ref
 * address: 0x605167CC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CH_SCORE_PAGE_OUT_ref(int a1)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  sub_60807EF0(SoundSystem_instance, "SE_SYS_CH_SCORE_PAGE_OUT", 0, 1);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = WipeIn_LevelNum_Mode_Loop_Out_ref(4);
  return sub_60473DE4((_DWORD *)(a1 + 36), 0, v3, 0);
}
