/* registerProfile_BoomBoom_W2fort_057304
 * address: 0x60057304   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_BoomBoom_W2fort_057304()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C80A30 = 0;
  dword_60C80A34 = 0;
  dword_60C80A38 = 0;
  dword_60C80A20 = -1106140492;
  dword_60C80A2C = 1082689673;
  dword_60C80A24 = 2520;
  dword_60C80A28 = (int)(float)((float)(2147500000.0 * 42.0) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABB24F;
  Profile__ctor(&stru_60C80920, Actor_BoomBoom_W2fort_build, 0x2A8u, &v2, &stru_60AF52FC, 0);
  *v0 = &off_60BC4074;
  dword_60C8093C = CurrentStateID + 1;
  dword_60C80940 = 1024;
  dword_60C80944 = 1;
  dword_60C80948 = 1028;
  dword_60C8094C = 1;
  dword_60C80950 = 1032;
  dword_60C80954 = 1;
  dword_60C80938 = (int)&off_60BC45C4;
  dword_60C80958 = (int)&dword_60C805C8;
  unk_60C80960 = CurrentStateID + 2;
  unk_60C80964 = 1036;
  dword_60C80968 = 1;
  dword_60C8096C = 1040;
  dword_60C80970 = 1;
  dword_60C80974 = 1044;
  dword_60C80978 = 1;
  dword_60C8095C = (int)&off_60BC45C4;
  dword_60C8097C = (int)&dword_60C8060C;
  unk_60C80984 = CurrentStateID + 3;
  unk_60C80988 = 1232;
  dword_60C8098C = 1;
  dword_60C80990 = 1236;
  dword_60C80994 = 1;
  dword_60C80998 = 1240;
  dword_60C8099C = 1;
  dword_60C80980 = (int)&off_60BC45C4;
  dword_60C809A0 = (int)&unk_60C804F0;
  *(_DWORD *)algn_60C809A8 = CurrentStateID + 4;
  *(_DWORD *)&algn_60C809A8[4] = 1244;
  dword_60C809B0 = 1;
  dword_60C809B4 = 1248;
  dword_60C809B8 = 1;
  dword_60C809BC = 1252;
  dword_60C809C0 = 1;
  dword_60C809A4 = (int)&off_60BC45C4;
  dword_60C809C4 = (int)&dword_60C80514;
  unk_60C809CC = CurrentStateID + 5;
  unk_60C809D0 = 1288;
  dword_60C809D4 = 1;
  dword_60C809D8 = 1292;
  dword_60C809DC = 1;
  dword_60C809E0 = 1296;
  dword_60C809E4 = 1;
  dword_60C809C8 = (int)&off_60BC45C4;
  dword_60C809E8 = (int)&NullState;
  CurrentStateID += 6;
  unk_60C809F0 = CurrentStateID;
  unk_60C809F4 = 1300;
  dword_60C809F8 = 1;
  dword_60C809FC = 1304;
  dword_60C80A00 = 1;
  dword_60C80A04 = 1308;
  dword_60C80A08 = 1;
  dword_60C809EC = (int)&off_60BC45C4;
  dword_60C80A0C = (int)&NullState;
  return 1;
}
