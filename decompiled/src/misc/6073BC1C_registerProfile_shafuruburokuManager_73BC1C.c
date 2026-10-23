/* registerProfile_shafuruburokuManager_73BC1C
 * address: 0x6073BC1C   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_shafuruburokuManager_73BC1C()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CBDF28 = CurrentStateID + 1;
  dword_60CBDF24 = (int)&off_60C22C20;
  dword_60CBDF2C = (int)sub_60739A78;
  dword_60CBDF30 = 0;
  dword_60CBDF34 = (int)sub_60739AF8;
  dword_60CBDF38 = 0;
  dword_60CBDF3C = (int)nullsub_5397;
  dword_60CBDF40 = 0;
  dword_60CBDF48 = CurrentStateID + 2;
  dword_60CBDF44 = (int)&off_60C22C20;
  dword_60CBDF4C = (int)nullsub_5398;
  dword_60CBDF50 = 0;
  dword_60CBDF54 = (int)nullsub_5399;
  dword_60CBDF58 = 0;
  dword_60CBDF5C = (int)nullsub_5400;
  dword_60CBDF60 = 0;
  dword_60CBDF68 = CurrentStateID + 3;
  dword_60CBDF64 = (int)&off_60C22C20;
  dword_60CBDF6C = (int)sub_60739C1C;
  dword_60CBDF70 = 0;
  dword_60CBDF74 = (int)sub_60739C9C;
  dword_60CBDF78 = 0;
  dword_60CBDF7C = (int)nullsub_5401;
  dword_60CBDF80 = 0;
  dword_60CBDF88 = CurrentStateID + 4;
  dword_60CBDF84 = (int)&off_60C22C20;
  dword_60CBDF8C = (int)sub_60739F3C;
  dword_60CBDF90 = 0;
  dword_60CBDF94 = (int)sub_60739F60;
  dword_60CBDF98 = 0;
  dword_60CBDF9C = (int)nullsub_5402;
  dword_60CBDFA0 = 0;
  dword_60CBDFA8 = CurrentStateID + 5;
  dword_60CBDFA4 = (int)&off_60C22C20;
  dword_60CBDFAC = (int)sub_6073A1D4;
  dword_60CBDFB0 = 0;
  dword_60CBDFB4 = (int)sub_6073A1F8;
  dword_60CBDFB8 = 0;
  dword_60CBDFBC = (int)nullsub_5403;
  dword_60CBDFC0 = 0;
  dword_60CBDFC8 = CurrentStateID + 6;
  dword_60CBDFC4 = (int)&off_60C22C20;
  dword_60CBDFCC = (int)sub_6073A624;
  dword_60CBDFD0 = 0;
  dword_60CBDFD4 = (int)sub_6073A638;
  dword_60CBDFD8 = 0;
  dword_60CBDFDC = (int)nullsub_5404;
  dword_60CBDFE0 = 0;
  dword_60CBDFE8 = CurrentStateID + 7;
  dword_60CBDFE4 = (int)&off_60C22C20;
  dword_60CBDFEC = (int)sub_6073A6EC;
  dword_60CBDFF0 = 0;
  dword_60CBDFF4 = (int)sub_6073A76C;
  dword_60CBDFF8 = 0;
  dword_60CBDFFC = (int)nullsub_5405;
  dword_60CBE000 = 0;
  dword_60CBE008 = CurrentStateID + 8;
  dword_60CBE004 = (int)&off_60C22C20;
  dword_60CBE00C = (int)sub_6073A810;
  dword_60CBE010 = 0;
  dword_60CBE014 = (int)sub_6073A87C;
  dword_60CBE018 = 0;
  dword_60CBE01C = (int)nullsub_5406;
  dword_60CBE020 = 0;
  CurrentStateID += 9;
  dword_60CBE028 = CurrentStateID;
  dword_60CBE024 = (int)&off_60C22C20;
  dword_60CBE02C = (int)sub_6073AB98;
  dword_60CBE030 = 0;
  dword_60CBE034 = (int)sub_6073ABC8;
  dword_60CBE038 = 0;
  dword_60CBE03C = (int)nullsub_5407;
  dword_60CBE040 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD99A6;
  Profile__ctor(&stru_60CBE044, Actor_shafuruburokuManager_build, 0x1Au, &v1, &stru_60B0A440, 0);
  *result = &off_60C22B4C;
  return result;
}
