/* registerProfile_yoshitama_70FF4C
 * address: 0x6070FF4C   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_yoshitama_70FF4C())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD8ABF;
  Profile__ctor(&stru_60CBD0D0, Actor_yoshitama_build, 0x32Bu, &v1, &stru_60B09CBC, 2);
  dword_60CBD0EC = CurrentStateID + 1;
  dword_60CBD0E8 = (int)&off_60C21844;
  dword_60CBD0F0 = (int)I_yoshi_egg_ref;
  dword_60CBD0F4 = 0;
  dword_60CBD0F8 = (int)I_yoshi_egg_ref_70EAAC;
  dword_60CBD0FC = 0;
  dword_60CBD100 = (int)nullsub_5350;
  dword_60CBD104 = 0;
  unk_60CBD108 = &off_60C21844;
  unk_60CBD10C = CurrentStateID + 2;
  dword_60CBD110 = (int)I_yoshi_egg_ref_70EBD4;
  dword_60CBD114 = 0;
  dword_60CBD118 = (int)sub_6070ECAC;
  dword_60CBD11C = 0;
  dword_60CBD120 = (int)nullsub_5351;
  dword_60CBD124 = 0;
  unk_60CBD128 = &off_60C21844;
  unk_60CBD12C = CurrentStateID + 3;
  dword_60CBD130 = (int)&loc_6070EE4C;
  dword_60CBD134 = 0;
  dword_60CBD138 = (int)sub_6070EFF8;
  dword_60CBD13C = 0;
  dword_60CBD140 = (int)nullsub_5352;
  dword_60CBD144 = 0;
  unk_60CBD148 = &off_60C21844;
  unk_60CBD14C = CurrentStateID + 4;
  dword_60CBD150 = (int)&loc_6070F000;
  dword_60CBD154 = 0;
  dword_60CBD158 = (int)sub_6070F178;
  dword_60CBD15C = 0;
  dword_60CBD160 = (int)nullsub_5353;
  dword_60CBD164 = 0;
  unk_60CBD168 = &off_60C21844;
  unk_60CBD16C = CurrentStateID + 5;
  dword_60CBD170 = (int)I_yoshi_egg_ref_70F180;
  dword_60CBD174 = 0;
  dword_60CBD178 = (int)sub_6070F280;
  dword_60CBD17C = 0;
  dword_60CBD180 = (int)nullsub_5354;
  dword_60CBD184 = 0;
  CurrentStateID += 6;
  dword_60CBD18C = CurrentStateID;
  dword_60CBD188 = (int)&off_60C21844;
  dword_60CBD190 = (int)SE_PLY_YOSHI_EGG_BREAK_ref;
  dword_60CBD194 = 0;
  dword_60CBD198 = (int)sub_6070F454;
  dword_60CBD19C = 0;
  dword_60CBD1A0 = (int)nullsub_5355;
  dword_60CBD1A4 = 0;
  return nullsub_5355;
}
