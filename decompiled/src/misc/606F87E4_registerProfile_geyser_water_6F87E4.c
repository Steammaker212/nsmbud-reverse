/* registerProfile_geyser_water_6F87E4
 * address: 0x606F87E4   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_geyser_water_6F87E4()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD84F1;
  Profile__ctor(&stru_60CBC35C, Actor_geyser_water_build, 0x7Bu, &v1, &stru_60B094EC, 0);
  dword_60CBC378 = CurrentStateID + 1;
  dword_60CBC37C = 200;
  dword_60CBC380 = 1;
  dword_60CBC384 = 204;
  dword_60CBC388 = 1;
  dword_60CBC38C = 208;
  dword_60CBC390 = 1;
  dword_60CBC374 = (int)&off_60C20718;
  dword_60CBC394 = (int)&NullState;
  dword_60CBC3A4 = 1;
  dword_60CBC3A8 = 216;
  dword_60CBC3AC = 1;
  dword_60CBC3B0 = 220;
  dword_60CBC3B4 = 1;
  stru_60CBC398.vtable = &off_60C20718;
  stru_60CBC398.id = CurrentStateID + 2;
  unk_60CBC3A0 = 212;
  dword_60CBC3B8 = (int)&NullState;
  dword_60CBC3C8 = 1;
  dword_60CBC3CC = 228;
  dword_60CBC3D0 = 1;
  dword_60CBC3D4 = 232;
  dword_60CBC3D8 = 1;
  unk_60CBC3BC = &off_60C20718;
  unk_60CBC3C0 = CurrentStateID + 3;
  unk_60CBC3C4 = 224;
  dword_60CBC3DC = (int)&NullState;
  dword_60CBC3EC = 1;
  dword_60CBC3F0 = 240;
  dword_60CBC3F4 = 1;
  dword_60CBC3F8 = 244;
  dword_60CBC3FC = 1;
  stru_60CBC3E0.vtable = &off_60C20718;
  stru_60CBC3E0.id = CurrentStateID + 4;
  unk_60CBC3E8 = 236;
  dword_60CBC400 = (int)&NullState;
  dword_60CBC410 = 1;
  dword_60CBC414 = 252;
  dword_60CBC418 = 1;
  dword_60CBC41C = 256;
  dword_60CBC420 = 1;
  dword_60CBC404 = (int)&off_60C20718;
  *(_DWORD *)algn_60CBC408 = CurrentStateID + 5;
  *(_DWORD *)&algn_60CBC408[4] = 248;
  dword_60CBC424 = (int)&NullState;
  CurrentStateID += 6;
  unk_60CBC42C = CurrentStateID;
  unk_60CBC430 = 260;
  dword_60CBC434 = 1;
  dword_60CBC438 = 264;
  dword_60CBC43C = 1;
  dword_60CBC440 = 268;
  dword_60CBC444 = 1;
  dword_60CBC428 = (int)&off_60C20718;
  dword_60CBC448 = (int)&NullState;
  return 1;
}
