/* registerProfile_kurosuke_28DC84
 * address: 0x6028DC84   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_kurosuke_28DC84()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8F4F8 = 0;
  dword_60C8F4FC = 0;
  dword_60C8F500 = 0;
  dword_60C8F4D8 = 805306368;
  dword_60C8F4DC = -805306368;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC2F81;
  Profile__ctor(&stru_60C8F398, Actor_kurosuke_build, 0x2A4u, &v1, &stru_60AFDF3C, 18);
  dword_60C8F3B4 = CurrentStateID + 1;
  dword_60C8F3B0 = (int)&off_60BDE61C;
  dword_60C8F3B8 = (int)sub_6028B854;
  dword_60C8F3BC = 0;
  dword_60C8F3C0 = (int)sub_6028B96C;
  dword_60C8F3C4 = 0;
  dword_60C8F3C8 = (int)nullsub_3159;
  dword_60C8F3CC = 0;
  unk_60C8F3D0 = &off_60BDE61C;
  unk_60C8F3D4 = CurrentStateID + 2;
  dword_60C8F3D8 = (int)attack1_ref;
  dword_60C8F3DC = 0;
  dword_60C8F3E0 = (int)&loc_6028BB80;
  dword_60C8F3E4 = 0;
  dword_60C8F3E8 = (int)nullsub_3160;
  dword_60C8F3EC = 0;
  unk_60C8F3F0 = &off_60BDE61C;
  unk_60C8F3F4 = CurrentStateID + 3;
  dword_60C8F3F8 = (int)sub_6028BE50;
  dword_60C8F3FC = 0;
  dword_60C8F400 = (int)sub_6028BFDC;
  dword_60C8F404 = 0;
  dword_60C8F408 = (int)nullsub_3161;
  dword_60C8F40C = 0;
  unk_60C8F410 = &off_60BDE61C;
  unk_60C8F414 = CurrentStateID + 4;
  dword_60C8F418 = (int)sub_6028C52C;
  dword_60C8F41C = 0;
  dword_60C8F420 = (int)sub_6028C664;
  dword_60C8F424 = 0;
  dword_60C8F428 = (int)nullsub_3162;
  dword_60C8F42C = 0;
  unk_60C8F430 = &off_60BDE61C;
  unk_60C8F434 = CurrentStateID + 5;
  dword_60C8F438 = (int)sub_6028C7C8;
  dword_60C8F43C = 0;
  dword_60C8F440 = (int)sub_6028C8C4;
  dword_60C8F444 = 0;
  dword_60C8F448 = (int)nullsub_3163;
  dword_60C8F44C = 0;
  unk_60C8F450 = &off_60BDE61C;
  unk_60C8F454 = CurrentStateID + 6;
  dword_60C8F458 = (int)sub_6028CA20;
  dword_60C8F45C = 0;
  dword_60C8F460 = (int)sub_6028CB1C;
  dword_60C8F464 = 0;
  dword_60C8F468 = (int)nullsub_3164;
  dword_60C8F46C = 0;
  dword_60C8F474 = CurrentStateID + 7;
  dword_60C8F478 = 444;
  dword_60C8F47C = 1;
  dword_60C8F480 = 448;
  dword_60C8F484 = 1;
  dword_60C8F488 = 452;
  dword_60C8F48C = 1;
  dword_60C8F470 = (int)&off_60BDE630;
  dword_60C8F490 = (int)&stru_60C906EC;
  CurrentStateID += 8;
  *(_DWORD *)algn_60C8F498 = CurrentStateID;
  *(_DWORD *)&algn_60C8F498[4] = 456;
  dword_60C8F4A0 = 1;
  dword_60C8F4A4 = 460;
  dword_60C8F4A8 = 1;
  dword_60C8F4AC = 464;
  dword_60C8F4B0 = 1;
  dword_60C8F494 = (int)&off_60BDE630;
  dword_60C8F4B4 = (int)&stru_60C90710;
  return &stru_60C90710;
}
