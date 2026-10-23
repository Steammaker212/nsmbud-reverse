/* registerProfile_akutakoinjanputatsunonfor_581C68
 * address: 0x60581C68   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_akutakoinjanputatsunonfor_581C68()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = "アクターコインジャンプ";
  Profile__ctor(&stru_60CAF068, Actor_akutakoinjanputatsunonfor_build, 0x191u, v1, &stru_60B0495C, 8198);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = "アクターコインジャンプバトル用";
  Profile__ctor(&stru_60CAF080, Actor_akutakoinjanputatsunonfor_build, 0x192u, v1, &stru_60B0495C, 8198);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = "アクターコインジャンプタツノン用";
  Profile__ctor(&stru_60CAF098, Actor_akutakoinjanputatsunonfor_build, 0x193u, v1, &stru_60B0495C, 8198);
  dword_60CAF0B4 = CurrentStateID + 1;
  dword_60CAF0B0 = (int)&off_60C059A0;
  dword_60CAF0B8 = (int)&loc_60580CCC;
  dword_60CAF0BC = 0;
  dword_60CAF0C0 = (int)sub_605811C4;
  dword_60CAF0C4 = 0;
  dword_60CAF0C8 = (int)nullsub_4656;
  dword_60CAF0CC = 0;
  unk_60CAF0D0 = &off_60C059A0;
  unk_60CAF0D4 = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60CAF0F4 = CurrentStateID;
  dword_60CAF0D8 = (int)sub_605813D0;
  dword_60CAF0F0 = (int)&off_60C059A0;
  dword_60CAF0DC = 0;
  dword_60CAF0F8 = (int)&loc_60581568;
  dword_60CAF0E0 = (int)sub_60581560;
  dword_60CAF0FC = 0;
  dword_60CAF0E4 = 0;
  dword_60CAF100 = (int)sub_6058178C;
  dword_60CAF0E8 = (int)nullsub_4657;
  dword_60CAF0EC = 0;
  dword_60CAF104 = 0;
  dword_60CAF108 = (int)nullsub_4658;
  dword_60CAF10C = 0;
  return &dword_60CAF0F0;
}
