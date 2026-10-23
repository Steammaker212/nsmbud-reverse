/* registerProfile_chibiyoshi_light_StaffRoll_for_74A690
 * address: 0x6074A690   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_chibiyoshi_light_StaffRoll_for_74A690())()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD9C59;
  Profile__ctor(&stru_60CBE7EC, Actor_chibiyoshi_light_StaffRoll_for_build, 0x34Cu, v1, 0, 0);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD9C90;
  Profile__ctor(&stru_60CBE804, Actor_chibiyoshi_light_StaffRoll_for_build, 0x34Du, v1, 0, 0);
  dword_60CBE820 = CurrentStateID + 1;
  dword_60CBE824 = 136;
  dword_60CBE828 = 1;
  dword_60CBE82C = 140;
  dword_60CBE830 = 1;
  dword_60CBE834 = 144;
  dword_60CBE838 = 1;
  dword_60CBE81C = (int)&off_60C238DC;
  dword_60CBE83C = (int)&dword_60CBE6AC;
  dword_60CBE848 = 148;
  dword_60CBE84C = 1;
  dword_60CBE850 = 152;
  dword_60CBE854 = 1;
  dword_60CBE858 = 156;
  dword_60CBE85C = 1;
  stru_60CBE840.vtable = &off_60C238DC;
  stru_60CBE840.id = CurrentStateID + 2;
  dword_60CBE860 = (int)&unk_60CBE6D0;
  dword_60CBE86C = 160;
  dword_60CBE870 = 1;
  dword_60CBE874 = 164;
  dword_60CBE878 = 1;
  dword_60CBE87C = 168;
  dword_60CBE880 = 1;
  stru_60CBE864.vtable = &off_60C238DC;
  stru_60CBE864.id = CurrentStateID + 3;
  dword_60CBE884 = (int)&unk_60CBE6F4;
  dword_60CBE890 = 172;
  dword_60CBE894 = 1;
  dword_60CBE898 = 176;
  dword_60CBE89C = 1;
  dword_60CBE8A0 = 180;
  dword_60CBE8A4 = 1;
  unk_60CBE888 = &off_60C238DC;
  unk_60CBE88C = CurrentStateID + 4;
  dword_60CBE8A8 = (int)&dword_60CBE718;
  CurrentStateID += 5;
  dword_60CBE8B0 = CurrentStateID;
  dword_60CBE8AC = (int)&off_60C238F0;
  dword_60CBE8B4 = (int)sub_6074A004;
  dword_60CBE8B8 = 0;
  dword_60CBE8BC = (int)sub_6074A02C;
  dword_60CBE8C0 = 0;
  dword_60CBE8C4 = (int)nullsub_5445;
  dword_60CBE8C8 = 0;
  return nullsub_5445;
}
