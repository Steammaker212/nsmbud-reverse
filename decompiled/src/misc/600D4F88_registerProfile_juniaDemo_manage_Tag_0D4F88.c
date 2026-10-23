/* registerProfile_juniaDemo_manage_Tag_0D4F88
 * address: 0x600D4F88   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_juniaDemo_manage_Tag_0D4F88()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C84298 = 0;
  dword_60C8429C = 0;
  dword_60C842A0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABD1BD;
  Profile__ctor(&stru_60C842A4, Actor_juniaDemo_manage_Tag_build, 0x2AFu, &v1, &stru_60AF5BD4, 0);
  dword_60C842C0 = CurrentStateID + 1;
  dword_60C842C4 = 204;
  dword_60C842C8 = 1;
  dword_60C842CC = 208;
  dword_60C842D0 = 1;
  dword_60C842D4 = 212;
  dword_60C842D8 = 1;
  dword_60C842BC = (int)&off_60BCBA0C;
  dword_60C842DC = (int)&unk_60C7F6A0;
  dword_60C842EC = 1;
  dword_60C842F0 = 232;
  dword_60C842F4 = 1;
  dword_60C842F8 = 236;
  dword_60C842FC = 1;
  unk_60C842E0 = &off_60BCBA0C;
  unk_60C842E4 = CurrentStateID + 2;
  unk_60C842E8 = 228;
  CurrentStateID += 3;
  dword_60C84308 = CurrentStateID;
  dword_60C84300 = (int)&dword_60C7F6E8;
  dword_60C84304 = (int)&off_60BCBA20;
  dword_60C8430C = (int)sub_600D26A0;
  dword_60C84310 = 0;
  dword_60C84314 = (int)sub_600D26EC;
  dword_60C84318 = 0;
  dword_60C8431C = (int)nullsub_2732;
  dword_60C84320 = 0;
  return &dword_60C84304;
}
