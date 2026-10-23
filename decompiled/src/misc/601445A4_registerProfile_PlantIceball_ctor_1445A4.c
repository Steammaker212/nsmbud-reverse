/* registerProfile_PlantIceball_ctor_1445A4
 * address: 0x601445A4   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_PlantIceball_ctor_1445A4()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABEDA3;
  Profile__ctor(&stru_60C87EC0, PlantIceball_ctor, 0x1DBu, &v1, &stru_60AF69B0, 162);
  unk_60C87ED8 = 1060110336;
  unk_60C87EDC = -1087373312;
  dword_60C87EE0 = 1060110336;
  dword_60C87EE4 = 1060110336;
  dword_60C87EE8 = 1063256064;
  dword_60C87EEC = -1096810496;
  dword_60C87EF0 = 1063256064;
  dword_60C87EF4 = 1050673152;
  dword_60C87EF8 = 1060110336;
  dword_60C87EFC = 1060110336;
  dword_60C87F00 = 1060110336;
  dword_60C87F04 = -1087373312;
  dword_60C87F08 = 1063256064;
  dword_60C87F0C = 1050673152;
  dword_60C87F10 = 1063256064;
  dword_60C87F14 = -1096810496;
  dword_60C87F18 = -1087373312;
  unk_60C87F1C = 1060110336;
  unk_60C87F20 = 1061158912;
  dword_60C87F24 = 1060110336;
  dword_60C87F28 = -1096810496;
  dword_60C87F2C = 1063256064;
  dword_60C87F30 = 1056964608;
  dword_60C87F34 = 1063256064;
  dword_60C87F38 = 1060110336;
  unk_60C87F3C = 1060110336;
  unk_60C87F40 = -1085276160;
  dword_60C87F44 = 1060110336;
  dword_60C87F48 = 1050673152;
  dword_60C87F4C = 1063256064;
  dword_60C87F50 = -1090519040;
  dword_60C87F54 = 1063256064;
  dword_60C87F5C = CurrentStateID + 1;
  dword_60C87F60 = 268;
  dword_60C87F64 = 1;
  dword_60C87F68 = 272;
  dword_60C87F6C = 1;
  dword_60C87F70 = 276;
  dword_60C87F74 = 1;
  dword_60C87F58 = (int)&off_60BD39F8;
  dword_60C87F78 = (int)&NullState;
  CurrentStateID += 2;
  unk_60C87F80 = CurrentStateID;
  unk_60C87F84 = 192;
  unk_60C87F88 = 1;
  unk_60C87F8C = 196;
  dword_60C87F90 = 1;
  dword_60C87F94 = 200;
  dword_60C87F98 = 1;
  dword_60C87F7C = (int)&off_60BD39F8;
  dword_60C87F9C = (int)&dword_60C87DC8;
  return &dword_60C87DC8;
}
