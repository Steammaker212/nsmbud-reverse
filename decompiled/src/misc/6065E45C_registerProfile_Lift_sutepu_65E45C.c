/* registerProfile_Lift_sutepu_65E45C
 * address: 0x6065E45C   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Lift_sutepu_65E45C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB6774 = CurrentStateID + 1;
  dword_60CB6770 = (int)&off_60C149E0;
  dword_60CB6778 = (int)nullsub_5054;
  dword_60CB677C = 0;
  dword_60CB6780 = (int)nullsub_5055;
  dword_60CB6784 = 0;
  dword_60CB6788 = (int)nullsub_5056;
  dword_60CB678C = 0;
  dword_60CB6794 = CurrentStateID + 2;
  dword_60CB6790 = (int)&off_60C149E0;
  dword_60CB6798 = (int)sub_6065D020;
  dword_60CB679C = 0;
  dword_60CB67A0 = (int)sub_6065D07C;
  dword_60CB67A4 = 0;
  dword_60CB67A8 = (int)nullsub_5057;
  dword_60CB67AC = 0;
  dword_60CB67B4 = CurrentStateID + 3;
  dword_60CB67B0 = (int)&off_60C149E0;
  dword_60CB67B8 = (int)sub_6065D0F4;
  dword_60CB67BC = 0;
  dword_60CB67C0 = (int)nullsub_5058;
  dword_60CB67C4 = 0;
  dword_60CB67C8 = (int)nullsub_5059;
  dword_60CB67CC = 0;
  dword_60CB67D4 = CurrentStateID + 4;
  dword_60CB67D0 = (int)&off_60C149E0;
  dword_60CB67D8 = (int)sub_6065D148;
  dword_60CB67DC = 0;
  dword_60CB67E0 = (int)sub_6065D188;
  dword_60CB67E4 = 0;
  dword_60CB67E8 = (int)nullsub_256;
  dword_60CB67EC = 0;
  CurrentStateID += 5;
  dword_60CB67F4 = CurrentStateID;
  dword_60CB67F0 = (int)&off_60C149E0;
  dword_60CB67F8 = (int)sub_6065D1AC;
  dword_60CB67FC = 0;
  dword_60CB6800 = (int)&loc_6065D220;
  dword_60CB6804 = 0;
  dword_60CB6808 = (int)nullsub_5060;
  dword_60CB680C = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD59D1;
  Profile__ctor(&stru_60CB6810, Actor_Lift_sutepu_build, 0xE6u, &v0, &stru_60B07800, 0);
}
