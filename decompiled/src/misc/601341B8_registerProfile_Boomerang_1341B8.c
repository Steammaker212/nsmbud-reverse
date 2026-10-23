/* registerProfile_Boomerang_1341B8
 * address: 0x601341B8   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Boomerang_1341B8()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C87690 = 0;
  dword_60C87694 = 0;
  dword_60C87698 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABEAEB;
  Profile__ctor(&stru_60C8758C, Actor_Boomerang_build, 0x2F9u, &v1, &stru_60AF6574, 34);
  dword_60C8769C = 0;
  dword_60C876A0 = 1091567616;
  dword_60C876A4 = 0;
  dword_60C875A8 = CurrentStateID + 1;
  dword_60C875A4 = (int)&off_60BD20D0;
  dword_60C875AC = (int)sub_60131F04;
  dword_60C875B0 = 0;
  dword_60C875B4 = (int)sub_60131F18;
  dword_60C875B8 = 0;
  dword_60C875BC = (int)nullsub_2858;
  dword_60C875C0 = 0;
  stru_60C875C4.vtable = &off_60BD20D0;
  stru_60C875C4.id = CurrentStateID + 2;
  dword_60C875CC = (int)sub_601320D8;
  dword_60C875D0 = 0;
  dword_60C875D4 = (int)SE_EMY_BOOMERANG_BROS_BOOMERANG_ref;
  dword_60C875D8 = 0;
  dword_60C875DC = (int)sub_60132478;
  dword_60C875E0 = 0;
  stru_60C875E4.vtable = &off_60BD20D0;
  stru_60C875E4.id = CurrentStateID + 3;
  dword_60C875EC = (int)sub_60132488;
  dword_60C875F0 = 0;
  dword_60C875F4 = (int)SE_EMY_BOOMERANG_BROS_BOOMERANG_ref_1324AC;
  dword_60C875F8 = 0;
  dword_60C875FC = (int)nullsub_2859;
  dword_60C87600 = 0;
  stru_60C87604.vtable = &off_60BD20D0;
  stru_60C87604.id = CurrentStateID + 4;
  dword_60C8760C = (int)sub_6013287C;
  dword_60C87610 = 0;
  dword_60C87614 = (int)SE_EMY_BOOMERANG_BROS_BOOMERANG_ref_1328D4;
  dword_60C87618 = 0;
  dword_60C8761C = (int)nullsub_2860;
  dword_60C87620 = 0;
  stru_60C87624.vtable = &off_60BD20D0;
  stru_60C87624.id = CurrentStateID + 5;
  CurrentStateID += 6;
  dword_60C87648 = CurrentStateID;
  dword_60C8762C = (int)sub_60132A50;
  dword_60C87644 = (int)&off_60BD20D0;
  dword_60C87630 = 0;
  dword_60C8764C = (int)sub_60132C2C;
  dword_60C87634 = (int)SE_EMY_BOOMERANG_BROS_BOOMERANG_ref_132A88;
  dword_60C87650 = 0;
  dword_60C87638 = 0;
  dword_60C87654 = (int)sub_60132CD0;
  dword_60C8763C = (int)nullsub_2861;
  dword_60C87640 = 0;
  dword_60C87658 = 0;
  dword_60C8765C = (int)nullsub_149;
  dword_60C87660 = 0;
  return &dword_60C87644;
}
