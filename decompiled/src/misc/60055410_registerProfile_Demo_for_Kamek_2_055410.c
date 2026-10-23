/* registerProfile_Demo_for_Kamek_2_055410
 * address: 0x60055410   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Demo_for_Kamek_2_055410())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8087C = 0;
  dword_60C80880 = 0;
  dword_60C80884 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "デモ用カメック";
  Profile__ctor(&stru_60C80888, Actor_Demo_for_Kamek_2_build, 0x2D1u, &v1, 0, 0);
  dword_60C808A4 = CurrentStateID + 1;
  dword_60C808A0 = (int)&off_60BC4060;
  dword_60C808A8 = (int)nullsub_2538;
  dword_60C808AC = 0;
  dword_60C808B0 = (int)nullsub_2539;
  dword_60C808B4 = 0;
  dword_60C808B8 = (int)nullsub_2540;
  dword_60C808BC = 0;
  dword_60C808C0 = &off_60BC4060;
  unk_60C808C4 = CurrentStateID + 2;
  dword_60C808C8 = (int)sub_600546D0;
  dword_60C808CC = 0;
  dword_60C808D0 = (int)sub_600547E0;
  dword_60C808D4 = 0;
  dword_60C808D8 = (int)sub_60054990;
  dword_60C808DC = 0;
  unk_60C808E0 = &off_60BC4060;
  unk_60C808E4 = CurrentStateID + 3;
  dword_60C808E8 = (int)fly_magic_ref;
  dword_60C808EC = 0;
  dword_60C808F0 = (int)SE_EMY_KAMECK_FLY_MAGIC_ref;
  dword_60C808F4 = 0;
  dword_60C808F8 = (int)nullsub_2541;
  dword_60C808FC = 0;
  CurrentStateID += 4;
  dword_60C80904 = CurrentStateID;
  dword_60C80900 = (int)&off_60BC4060;
  dword_60C80908 = (int)nullsub_2542;
  dword_60C8090C = 0;
  dword_60C80910 = (int)nullsub_2543;
  dword_60C80914 = 0;
  dword_60C80918 = (int)nullsub_2544;
  dword_60C8091C = 0;
  return nullsub_2544;
}
