/* sub_60516310
 * address: 0x60516310   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60516310()
{
  dword_60CA8578 = (int)&sead__SafeStringBase__vtable;
  dword_60CA857C = (int)"PlayerNumSelect";
  dword_60CA8580 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8584 = (int)"PlayerNumSelectDL";
  dword_60CA858C = CurrentStateID + 1;
  dword_60CA8588 = (int)&off_60BFF988;
  dword_60CA8590 = (int)sub_605140FC;
  dword_60CA8594 = 0;
  dword_60CA8598 = (int)nullsub_4237;
  dword_60CA859C = 0;
  dword_60CA85A0 = (int)nullsub_4238;
  dword_60CA85A4 = 0;
  stru_60CA85A8.vtable = &off_60BFF988;
  stru_60CA85A8.id = CurrentStateID + 2;
  dword_60CA85B0 = (int)sub_60514114;
  dword_60CA85B4 = 0;
  dword_60CA85B8 = (int)sub_60514474;
  dword_60CA85BC = 0;
  dword_60CA85C0 = (int)nullsub_4239;
  dword_60CA85C4 = 0;
  stru_60CA85C8.vtable = &off_60BFF988;
  stru_60CA85C8.id = CurrentStateID + 3;
  dword_60CA85D0 = (int)nullsub_4240;
  dword_60CA85D4 = 0;
  dword_60CA85D8 = (int)sub_60514490;
  dword_60CA85DC = 0;
  dword_60CA85E0 = (int)nullsub_4241;
  dword_60CA85E4 = 0;
  dword_60CA85E8 = (int)&off_60BFF988;
  *(_DWORD *)algn_60CA85EC = CurrentStateID + 4;
  dword_60CA85F0 = (int)sub_605144B8;
  dword_60CA85F4 = 0;
  dword_60CA85F8 = (int)nullsub_4242;
  dword_60CA85FC = 0;
  dword_60CA8600 = (int)nullsub_4243;
  dword_60CA8604 = 0;
  unk_60CA8608 = &off_60BFF988;
  unk_60CA860C = CurrentStateID + 5;
  dword_60CA8610 = (int)sub_605144D0;
  dword_60CA8614 = 0;
  dword_60CA8618 = (int)sub_60514534;
  dword_60CA861C = 0;
  dword_60CA8620 = (int)nullsub_4244;
  dword_60CA8624 = 0;
  unk_60CA8628 = &off_60BFF988;
  unk_60CA862C = CurrentStateID + 6;
  CurrentStateID += 7;
  dword_60CA864C = CurrentStateID;
  dword_60CA8630 = (int)sub_60514718;
  dword_60CA8648 = (int)&off_60BFF988;
  dword_60CA8634 = 0;
  dword_60CA8650 = (int)sub_60514884;
  dword_60CA8638 = (int)sub_60514754;
  dword_60CA8654 = 0;
  dword_60CA863C = 0;
  dword_60CA8658 = (int)sub_60514968;
  dword_60CA8640 = (int)nullsub_4245;
  dword_60CA8644 = 0;
  dword_60CA865C = 0;
  dword_60CA8660 = (int)sub_60514994;
  dword_60CA8664 = 0;
  dword_60CA8684 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8688 = (int)"bflyt";
  dword_60CA8694 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8698 = (int)"InOutR";
  dword_60CA869C = (int)&sead__SafeStringBase__vtable;
  dword_60CA86A0 = (int)"InOutL";
  sub_60000288();
  dword_60CA86D0[0] = (int)&sead__SafeStringBase__vtable;
  unk_60CA86D4 = "Pa_ReturnBtn_00";
  dword_60CA86D8 = &sead__SafeStringBase__vtable;
  dword_60CA86DC = (int)"Pa_BtnStory_00";
  dword_60CA86E0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA86E4 = (int)"Pa_BtnStory_01";
  dword_60CA86E8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA86EC = (int)"Pa_BtnStory_02";
  dword_60CA86F0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA86F4 = (int)"Pa_BtnStory_03";
  dword_60CA86F8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA86FC = (int)"Pa_BtnVS_00";
  dword_60CA8700 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8704 = (int)"Pa_BtnVS_01";
  dword_60CA8708 = (int)&sead__SafeStringBase__vtable;
  dword_60CA870C = (int)"Pa_BtnVS_02";
  sub_60000288();
  dword_60CA868C = (int)&sead__SafeStringBase__vtable;
  dword_60CA8690 = (int)"G_InOut_00";
  sub_60000288();
  dword_60CA86A4 = (int)&sead__SafeStringBase__vtable;
  *(_DWORD *)algn_60CA86A8 = "N_Story_00";
  *(_DWORD *)&algn_60CA86A8[4] = &sead__SafeStringBase__vtable;
  dword_60CA86B0 = (int)"N_VS_00";
  return sub_60000288();
}
