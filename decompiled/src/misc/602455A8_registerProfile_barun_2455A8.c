/* registerProfile_barun_2455A8
 * address: 0x602455A8   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_barun_2455A8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C8DB38 = 0;
  dword_60C8DB3C = 0;
  dword_60C8DB40 = 0;
  dword_60C8DB48 = CurrentStateID + 1;
  dword_60C8DB44 = (int)&off_60BD9C50;
  dword_60C8DB4C = (int)sub_6024071C;
  dword_60C8DB50 = 0;
  dword_60C8DB54 = (int)&loc_602409FC;
  dword_60C8DB58 = 0;
  dword_60C8DB5C = (int)nullsub_3077;
  dword_60C8DB60 = 0;
  dword_60C8DB68 = CurrentStateID + 2;
  dword_60C8DB64 = (int)&off_60BD9C50;
  dword_60C8DB6C = (int)nullsub_3078;
  dword_60C8DB70 = 0;
  dword_60C8DB74 = (int)&loc_60240FCC;
  dword_60C8DB78 = 0;
  dword_60C8DB7C = (int)nullsub_3079;
  dword_60C8DB80 = 0;
  dword_60C8DB88 = CurrentStateID + 3;
  dword_60C8DB84 = (int)&off_60BD9C50;
  dword_60C8DB8C = (int)sub_602415F8;
  dword_60C8DB90 = 0;
  dword_60C8DB94 = (int)&loc_6024164C;
  dword_60C8DB98 = 0;
  dword_60C8DB9C = (int)nullsub_3080;
  dword_60C8DBA0 = 0;
  dword_60C8DBA8 = CurrentStateID + 4;
  dword_60C8DBA4 = (int)&off_60BD9C50;
  dword_60C8DBAC = (int)&loc_60241A7C;
  dword_60C8DBB0 = 0;
  dword_60C8DBB4 = (int)&loc_60241CD8;
  dword_60C8DBB8 = 0;
  dword_60C8DBBC = (int)nullsub_3081;
  dword_60C8DBC0 = 0;
  dword_60C8DBC8 = CurrentStateID + 5;
  dword_60C8DBC4 = (int)&off_60BD9C50;
  dword_60C8DBCC = (int)sub_60242140;
  dword_60C8DBD0 = 0;
  dword_60C8DBD4 = (int)&loc_60242150;
  dword_60C8DBD8 = 0;
  dword_60C8DBDC = (int)nullsub_3082;
  dword_60C8DBE0 = 0;
  CurrentStateID += 6;
  dword_60C8DBE8 = CurrentStateID;
  dword_60C8DBE4 = (int)&off_60BD9C50;
  dword_60C8DBEC = (int)sub_602424F8;
  dword_60C8DBF0 = 0;
  dword_60C8DBF4 = (int)&loc_6024252C;
  dword_60C8DBF8 = 0;
  dword_60C8DBFC = (int)sub_60242A2C;
  dword_60C8DC00 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC2643;
  Profile__ctor(&stru_60C8DC04, Actor_barun_build, 0x1B9u, &v0, 0, 1028);
}
