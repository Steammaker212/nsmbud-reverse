/* registerProfile_PlantFireball_ctor_13A5A8
 * address: 0x6013A5A8   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_PlantFireball_ctor_13A5A8()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C87A60 = 0;
  dword_60C87A64 = 0;
  dword_60C87A68 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABEC21;
  Profile__ctor(&stru_60C87A6C, PlantFireball_ctor, 0x1DDu, &v1, &stru_60AF678C, 162);
  unk_60C87A84 = 1060110336;
  unk_60C87A88 = -1087373312;
  dword_60C87A8C = 1060110336;
  dword_60C87A90 = 1060110336;
  dword_60C87A94 = 1063256064;
  dword_60C87A98 = -1096810496;
  dword_60C87A9C = 1063256064;
  dword_60C87AA0 = 1050673152;
  dword_60C87AA4 = 1060110336;
  dword_60C87AA8 = 1060110336;
  dword_60C87AAC = 1060110336;
  dword_60C87AB0 = -1087373312;
  dword_60C87AB4 = 1063256064;
  dword_60C87AB8 = 1050673152;
  dword_60C87ABC = 1063256064;
  dword_60C87AC0 = -1096810496;
  dword_60C87AC4 = -1087373312;
  *(_DWORD *)algn_60C87AC8 = 1060110336;
  *(_DWORD *)&algn_60C87AC8[4] = 1061158912;
  dword_60C87AD0 = 1060110336;
  dword_60C87AD4 = -1096810496;
  dword_60C87AD8 = 1063256064;
  dword_60C87ADC = 1056964608;
  dword_60C87AE0 = 1063256064;
  dword_60C87AE4 = 1060110336;
  *(_DWORD *)algn_60C87AE8 = 1060110336;
  *(_DWORD *)&algn_60C87AE8[4] = -1085276160;
  dword_60C87AF0 = 1060110336;
  dword_60C87AF4 = 1050673152;
  dword_60C87AF8 = 1063256064;
  dword_60C87AFC = -1090519040;
  dword_60C87B00 = 1063256064;
  dword_60C87B08 = ++CurrentStateID;
  dword_60C87B0C = 192;
  dword_60C87B10 = 1;
  dword_60C87B14 = 196;
  dword_60C87B18 = 1;
  dword_60C87B1C = 200;
  dword_60C87B20 = 1;
  dword_60C87B04 = (int)&off_60BD2A2C;
  dword_60C87B24 = (int)&stru_60C877D8;
  return &dword_60C87B04;
}
