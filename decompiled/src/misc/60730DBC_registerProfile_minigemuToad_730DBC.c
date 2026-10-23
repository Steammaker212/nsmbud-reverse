/* registerProfile_minigemuToad_730DBC
 * address: 0x60730DBC   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_minigemuToad_730DBC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CBDBE0 = 0x4000000;
  dword_60CBDBE4 = 0x400000;
  dword_60CBDBE8 = 0;
  dword_60CBDBEC = 0;
  dword_60CBDBF0 = 0;
  dword_60CBDB04 = CurrentStateID + 1;
  dword_60CBDB00 = (int)&off_60C2273C;
  dword_60CBDB08 = (int)sub_6072F4F0;
  dword_60CBDB0C = 0;
  dword_60CBDB10 = (int)sub_6072F518;
  dword_60CBDB14 = 0;
  dword_60CBDB18 = (int)nullsub_5377;
  dword_60CBDB1C = 0;
  dword_60CBDB24 = CurrentStateID + 2;
  dword_60CBDB20 = (int)&off_60C2273C;
  dword_60CBDB28 = (int)sub_6072F564;
  dword_60CBDB2C = 0;
  dword_60CBDB30 = (int)sub_6072F5B4;
  dword_60CBDB34 = 0;
  dword_60CBDB38 = (int)nullsub_5378;
  dword_60CBDB3C = 0;
  dword_60CBDB44 = CurrentStateID + 3;
  dword_60CBDB40 = (int)&off_60C2273C;
  dword_60CBDB48 = (int)sub_6072F5BC;
  dword_60CBDB4C = 0;
  dword_60CBDB50 = (int)sub_6072F5E8;
  dword_60CBDB54 = 0;
  dword_60CBDB58 = (int)nullsub_5379;
  dword_60CBDB5C = 0;
  dword_60CBDB64 = CurrentStateID + 4;
  dword_60CBDB60 = (int)&off_60C2273C;
  dword_60CBDB68 = (int)sub_6072F62C;
  dword_60CBDB6C = 0;
  dword_60CBDB70 = (int)sub_6072F67C;
  dword_60CBDB74 = 0;
  dword_60CBDB78 = (int)nullsub_5380;
  dword_60CBDB7C = 0;
  dword_60CBDB84 = CurrentStateID + 5;
  dword_60CBDB80 = (int)&off_60C2273C;
  dword_60CBDB88 = (int)SE_VOC_KINOPIO_LEANBACK_ref;
  dword_60CBDB8C = 0;
  dword_60CBDB90 = (int)sub_6072F74C;
  dword_60CBDB94 = 0;
  dword_60CBDB98 = (int)nullsub_5381;
  dword_60CBDB9C = 0;
  CurrentStateID += 6;
  dword_60CBDBA4 = CurrentStateID;
  dword_60CBDBA0 = (int)&off_60C2273C;
  dword_60CBDBA8 = (int)SE_VOC_KINOPIO_TRAMPLED_ref;
  dword_60CBDBAC = 0;
  dword_60CBDBB0 = (int)SE_PLY_LAND_ROCK_ref;
  dword_60CBDBB4 = 0;
  dword_60CBDBB8 = (int)sub_6072F978;
  dword_60CBDBBC = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD962F;
  Profile__ctor(&stru_60CBDBC0, Actor_minigemuToad_build, 0x33Fu, &v0, &stru_60B0A298, 0);
}
