/* registerProfile_switch_Lift_63A47C
 * address: 0x6063A47C   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_switch_Lift_63A47C())()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60CB53C0 = 0;
  dword_60CB53C4 = 0;
  dword_60CB53C8 = 0;
  dword_60CB53CC = 0;
  dword_60CB53D0 = 0;
  dword_60CB53D4 = 0;
  dword_60CB53D8[0] = 0;
  dword_60CB53DC = 0x40000000;
  dword_60CB53E0 = 1065353216;
  dword_60CB53E4 = -1073741824;
  dword_60CB53E8 = -1082130432;
  dword_60CB53EC = 0;
  dword_60CB53F0 = -1090519040;
  dword_60CB53F4 = 0;
  byte_60CB53F8 = 3;
  dword_60CB53FC = 0;
  dword_60CB5400 = 0;
  dword_60CB5404 = 1065353216;
  dword_60CB5408 = 0x80000000;
  dword_60CB540C = 0;
  dword_60CB5410 = 1065353216;
  dword_60CB5414 = 0;
  dword_60CB5418 = 1056964608;
  byte_60CB541C = 2;
  dword_60CB5420 = 0;
  dword_60CB5424 = 0x80000000;
  dword_60CB5428 = 1065353216;
  dword_60CB542C = 0;
  dword_60CB5430 = 0;
  unk_60CB5434 = -1082130432;
  unk_60CB5438 = 0;
  unk_60CB543C = -1090519040;
  byte_60CB5440 = 1;
  dword_60CB5444 = 0;
  dword_60CB5448 = -1073741824;
  dword_60CB544C = 1065353216;
  dword_60CB5450 = 0x40000000;
  unk_60CB5454 = 1065353216;
  unk_60CB5458 = 0;
  unk_60CB545C = 1056964608;
  dword_60CB5460 = 0;
  byte_60CB5464 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD4DB2;
  Profile__ctor(&stru_60CB5468, Actor_switch_Lift_build, 0x16Cu, &v1, &stru_60B072A0, 2);
  dword_60CB5484 = CurrentStateID + 1;
  dword_60CB5480 = (int)&off_60C12CE0;
  dword_60CB5488 = (int)nullsub_249;
  dword_60CB548C = 0;
  dword_60CB5490 = (int)sub_606393C0;
  dword_60CB5494 = 0;
  dword_60CB5498 = (int)nullsub_4979;
  dword_60CB549C = 0;
  CurrentStateID += 2;
  dword_60CB54A4 = CurrentStateID;
  dword_60CB54A0 = (int)&off_60C12CE0;
  dword_60CB54A8 = (int)sub_606394C8;
  dword_60CB54AC = 0;
  dword_60CB54B0 = (int)sub_6063952C;
  dword_60CB54B4 = 0;
  dword_60CB54B8 = (int)nullsub_4980;
  dword_60CB54BC = 0;
  return nullsub_4980;
}
