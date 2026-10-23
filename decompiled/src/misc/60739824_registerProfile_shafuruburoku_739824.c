/* registerProfile_shafuruburoku_739824
 * address: 0x60739824   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_shafuruburoku_739824()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CBDE64 = CurrentStateID + 1;
  dword_60CBDE60 = (int)&off_60C22B24;
  dword_60CBDE68 = (int)&loc_60735F68;
  dword_60CBDE6C = 0;
  dword_60CBDE70 = (int)&loc_60736094;
  dword_60CBDE74 = 0;
  dword_60CBDE78 = (int)nullsub_5392;
  dword_60CBDE7C = 0;
  dword_60CBDE84 = CurrentStateID + 2;
  dword_60CBDE80 = (int)&off_60C22B24;
  dword_60CBDE88 = (int)sub_60736510;
  dword_60CBDE8C = 0;
  dword_60CBDE90 = (int)sub_60736A74;
  dword_60CBDE94 = 0;
  dword_60CBDE98 = (int)nullsub_5393;
  dword_60CBDE9C = 0;
  dword_60CBDEA4 = CurrentStateID + 3;
  dword_60CBDEA0 = (int)&off_60C22B24;
  dword_60CBDEA8 = (int)sub_6073722C;
  dword_60CBDEAC = 0;
  dword_60CBDEB0 = (int)nullsub_5394;
  dword_60CBDEB4 = 0;
  dword_60CBDEB8 = (int)nullsub_5395;
  dword_60CBDEBC = 0;
  dword_60CBDEC4 = CurrentStateID + 4;
  dword_60CBDEC0 = (int)&off_60C22B24;
  dword_60CBDEC8 = (int)sub_60737244;
  dword_60CBDECC = 0;
  dword_60CBDED0 = (int)sub_607372B4;
  dword_60CBDED4 = 0;
  dword_60CBDED8 = (int)nullsub_5396;
  dword_60CBDEDC = 0;
  CurrentStateID += 5;
  dword_60CBDEE4 = CurrentStateID;
  dword_60CBDEE8 = 404;
  dword_60CBDEEC = 1;
  dword_60CBDEF0 = 408;
  dword_60CBDEF4 = 1;
  dword_60CBDEF8 = 412;
  dword_60CBDEFC = 1;
  dword_60CBDEE0 = (int)&off_60C22B38;
  dword_60CBDF00 = (int)&dword_60CAE2F8;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD998A;
  Profile__ctor(&stru_60CBDF04, Actor_shafuruburoku_build, 0x105u, &v0, &stru_60B0A41C, 0);
}
