/* registerProfile_keronpa_fire_RDashfor_139754
 * address: 0x60139754   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_keronpa_fire_RDashfor_139754()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C879A4 = 1072064102;
  dword_60C879A8 = 1072064102;
  dword_60C879AC = 1072064102;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABEC04;
  Profile__ctor(&stru_60C879B0, Actor_keronpa_fire_RDashfor_build, 0x22Fu, &v1, &stru_60AF6768, 34);
  dword_60C879CC = CurrentStateID + 1;
  dword_60C879D0 = 236;
  dword_60C879D4 = 1;
  dword_60C879D8 = 240;
  dword_60C879DC = 1;
  dword_60C879E0 = 244;
  dword_60C879E4 = 1;
  dword_60C879C8 = (int)&off_60BD28B4;
  dword_60C879E8 = (int)&NullState;
  dword_60C879F8 = 1;
  dword_60C879FC = 252;
  dword_60C87A00 = 1;
  dword_60C87A04 = 256;
  dword_60C87A08 = 1;
  stru_60C879EC.vtable = &off_60BD28B4;
  stru_60C879EC.id = CurrentStateID + 2;
  unk_60C879F4 = 248;
  dword_60C87A0C = (int)&NullState;
  dword_60C87A1C = 1;
  dword_60C87A20 = 264;
  dword_60C87A24 = 1;
  dword_60C87A28 = 268;
  dword_60C87A2C = 1;
  unk_60C87A10 = &off_60BD28B4;
  unk_60C87A14 = CurrentStateID + 3;
  unk_60C87A18 = 260;
  dword_60C87A30 = (int)&NullState;
  CurrentStateID += 4;
  *(_DWORD *)algn_60C87A38 = CurrentStateID;
  *(_DWORD *)&algn_60C87A38[4] = 272;
  dword_60C87A40 = 1;
  dword_60C87A44 = 276;
  dword_60C87A48 = 1;
  dword_60C87A4C = 280;
  dword_60C87A50 = 1;
  dword_60C87A34 = (int)&off_60BD28B4;
  dword_60C87A54 = (int)&NullState;
  return 1;
}
