/* registerProfile_Roy_for_kishiLift_sutepu_111AE0
 * address: 0x60111AE0   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Roy_for_kishiLift_sutepu_111AE0())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABE397;
  Profile__ctor(&stru_60C868C8, Actor_Roy_for_kishiLift_sutepu_build, 0x110u, &v1, 0, 2);
  dword_60C868E4 = CurrentStateID + 1;
  dword_60C868E0 = (int)&off_60BD071C;
  dword_60C868E8 = (int)nullsub_2809;
  dword_60C868EC = 0;
  dword_60C868F0 = (int)sub_601109B0;
  dword_60C868F4 = 0;
  dword_60C868F8 = (int)nullsub_2810;
  dword_60C868FC = 0;
  CurrentStateID += 2;
  dword_60C86904 = CurrentStateID;
  dword_60C86900 = (int)&off_60BD071C;
  dword_60C86908 = (int)nullsub_2811;
  dword_60C8690C = 0;
  dword_60C86910 = (int)sub_60110AC0;
  dword_60C86914 = 0;
  dword_60C86918 = (int)nullsub_2812;
  dword_60C8691C = 0;
  return nullsub_2812;
}
