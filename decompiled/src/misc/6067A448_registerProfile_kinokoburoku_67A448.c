/* registerProfile_kinokoburoku_67A448
 * address: 0x6067A448   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_kinokoburoku_67A448())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD62A8;
  Profile__ctor(&stru_60CB7D80, Actor_kinokoburoku_build, 0x5Du, &v1, &stru_60B07CD0, 2);
  dword_60CB7D9C = CurrentStateID + 1;
  dword_60CB7D98 = (int)&off_60C16618;
  dword_60CB7DA0 = (int)sub_60679BF4;
  dword_60CB7DA4 = 0;
  dword_60CB7DA8 = (int)sub_60679C04;
  dword_60CB7DAC = 0;
  dword_60CB7DB0 = (int)nullsub_5114;
  dword_60CB7DB4 = 0;
  unk_60CB7DB8 = &off_60C16618;
  unk_60CB7DBC = CurrentStateID + 2;
  dword_60CB7DC0 = (int)nullsub_5115;
  dword_60CB7DC4 = 0;
  dword_60CB7DC8 = (int)sub_60679CB0;
  dword_60CB7DCC = 0;
  dword_60CB7DD0 = (int)nullsub_5116;
  dword_60CB7DD4 = 0;
  CurrentStateID += 3;
  dword_60CB7DDC = CurrentStateID;
  dword_60CB7DD8 = (int)&off_60C16618;
  dword_60CB7DE0 = (int)sub_60679D3C;
  dword_60CB7DE4 = 0;
  dword_60CB7DE8 = (int)sub_60679DCC;
  dword_60CB7DEC = 0;
  dword_60CB7DF0 = (int)nullsub_262;
  dword_60CB7DF4 = 0;
  return nullsub_262;
}
