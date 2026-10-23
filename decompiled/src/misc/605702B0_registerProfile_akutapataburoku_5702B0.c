/* registerProfile_akutapataburoku_5702B0
 * address: 0x605702B0   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_akutapataburoku_5702B0()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CAE7DC = 0;
  dword_60CAE7D8 = 0;
  dword_60CAE7D4 = 0;
  dword_60CAE7D0 = 0;
  dword_60CAE7E0 = -1056964608;
  dword_60CAE7E4 = 1090519040;
  dword_60CAE7E8 = 1090519040;
  dword_60CAE7EC = -1056964608;
  dword_60CAE7F0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD174B;
  Profile__ctor(&stru_60CAE7F4, Actor_akutapataburoku_build, 0x136u, &v1, &stru_60B04478, 4098);
  dword_60CAE810 = CurrentStateID + 1;
  dword_60CAE80C = (int)&off_60C02E7C;
  dword_60CAE814 = (int)sub_6056EFF4;
  dword_60CAE818 = 0;
  dword_60CAE81C = (int)sub_6056F02C;
  dword_60CAE820 = 0;
  dword_60CAE824 = (int)nullsub_4622;
  dword_60CAE828 = 0;
  unk_60CAE82C = &off_60C02E7C;
  unk_60CAE830 = CurrentStateID + 2;
  dword_60CAE834 = (int)nullsub_4623;
  dword_60CAE838 = 0;
  dword_60CAE83C = (int)sub_6056F124;
  dword_60CAE840 = 0;
  dword_60CAE844 = (int)nullsub_4624;
  dword_60CAE848 = 0;
  unk_60CAE84C = &off_60C02E7C;
  unk_60CAE850 = CurrentStateID + 3;
  dword_60CAE854 = (int)nullsub_4625;
  dword_60CAE858 = 0;
  dword_60CAE85C = (int)sub_6056F248;
  dword_60CAE860 = 0;
  dword_60CAE864 = (int)nullsub_4626;
  dword_60CAE868 = 0;
  unk_60CAE86C = &off_60C02E7C;
  unk_60CAE870 = CurrentStateID + 4;
  dword_60CAE874 = (int)sub_6056F2E8;
  dword_60CAE878 = 0;
  dword_60CAE87C = (int)sub_6056F344;
  dword_60CAE880 = 0;
  dword_60CAE884 = (int)nullsub_4627;
  dword_60CAE888 = 0;
  CurrentStateID += 5;
  dword_60CAE890 = CurrentStateID;
  dword_60CAE88C = (int)&off_60C02E7C;
  dword_60CAE894 = (int)nullsub_4628;
  dword_60CAE898 = 0;
  dword_60CAE89C = (int)nullsub_4629;
  dword_60CAE8A0 = 0;
  dword_60CAE8A4 = (int)nullsub_4630;
  dword_60CAE8A8 = 0;
  dword_60CAE8AC = 0x1000000;
  dword_60CAE8B0 = 0x2000000;
  return &dword_60CAE8B0;
}
