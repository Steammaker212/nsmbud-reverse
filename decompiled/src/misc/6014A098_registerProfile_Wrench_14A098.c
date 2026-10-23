/* registerProfile_Wrench_14A098
 * address: 0x6014A098   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Wrench_14A098())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABEE90;
  Profile__ctor(&stru_60C88178, Actor_Wrench_build, 0x26Au, &v1, &stru_60AF6AE0, 34);
  dword_60C88194 = CurrentStateID + 1;
  dword_60C88190 = (int)&off_60BD43C0;
  dword_60C88198 = (int)sub_60149138;
  dword_60C8819C = 0;
  dword_60C881A0 = (int)sub_6014914C;
  dword_60C881A4 = 0;
  dword_60C881A8 = (int)nullsub_2878;
  dword_60C881AC = 0;
  dword_60C881B0 = (int)&off_60BD43C0;
  *(_DWORD *)algn_60C881B4 = CurrentStateID + 2;
  dword_60C881B8 = (int)sub_60149250;
  dword_60C881BC = 0;
  dword_60C881C0 = (int)SE_EMY_CHOROPU_M_SPANNER_ref;
  dword_60C881C4 = 0;
  dword_60C881C8 = (int)nullsub_2879;
  dword_60C881CC = 0;
  CurrentStateID += 3;
  dword_60C881D4 = CurrentStateID;
  dword_60C881D0 = (int)&off_60BD43C0;
  dword_60C881D8 = (int)sub_601495DC;
  dword_60C881DC = 0;
  dword_60C881E0 = (int)sub_60149648;
  dword_60C881E4 = 0;
  dword_60C881E8 = (int)nullsub_2880;
  dword_60C881EC = 0;
  return nullsub_2880;
}
