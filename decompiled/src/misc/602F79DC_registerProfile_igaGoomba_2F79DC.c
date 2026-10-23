/* registerProfile_igaGoomba_2F79DC
 * address: 0x602F79DC   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

State *registerProfile_igaGoomba_2F79DC()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C927EC = 0;
  dword_60C927F0 = 0;
  dword_60C927F4 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC40E6;
  Profile__ctor(&stru_60C927F8, Actor_igaGoomba_build, 0x1D6u, &v1, &stru_60AFEE74, 530);
  dword_60C92814 = CurrentStateID + 1;
  dword_60C92810 = (int)&off_60BE7990;
  dword_60C92818 = (int)sub_602F49FC;
  dword_60C9281C = 0;
  dword_60C92820 = (int)sub_602F4BC8;
  dword_60C92824 = 0;
  dword_60C92828 = (int)nullsub_3305;
  dword_60C9282C = 0;
  dword_60C92830 = (int)&off_60BE7990;
  *(_DWORD *)algn_60C92834 = CurrentStateID + 2;
  dword_60C92838 = (int)SE_EMY_IGAKURIBO_OPEN_ref;
  dword_60C9283C = 0;
  dword_60C92840 = (int)SE_EMY_IGAKURIBO_CLOSE_ref;
  dword_60C92844 = 0;
  dword_60C92848 = (int)nullsub_3306;
  dword_60C9284C = 0;
  dword_60C92850 = (int)&off_60BE7990;
  *(_DWORD *)algn_60C92854 = CurrentStateID + 3;
  dword_60C92858 = (int)sub_602F4F5C;
  dword_60C9285C = 0;
  dword_60C92860 = (int)sub_602F5208;
  dword_60C92864 = 0;
  dword_60C92868 = (int)nullsub_3307;
  dword_60C9286C = 0;
  dword_60C92870 = (int)&off_60BE7990;
  *(_DWORD *)algn_60C92874 = CurrentStateID + 4;
  dword_60C92878 = (int)sub_602F5348;
  dword_60C9287C = 0;
  dword_60C92880 = (int)sub_602F56AC;
  dword_60C92884 = 0;
  dword_60C92888 = (int)sub_602F5834;
  dword_60C9288C = 0;
  dword_60C92890 = (int)&off_60BE7990;
  *(_DWORD *)algn_60C92894 = CurrentStateID + 5;
  dword_60C92898 = (int)sub_602F5840;
  dword_60C9289C = 0;
  dword_60C928A0 = (int)sub_602F5874;
  dword_60C928A4 = 0;
  dword_60C928A8 = (int)sub_602F5A30;
  dword_60C928AC = 0;
  dword_60C928B0 = (int)&off_60BE7990;
  *(_DWORD *)algn_60C928B4 = CurrentStateID + 6;
  dword_60C928B8 = (int)sub_602F5A40;
  dword_60C928BC = 0;
  dword_60C928C0 = (int)sub_602F5AC8;
  dword_60C928C4 = 0;
  dword_60C928C8 = (int)nullsub_3308;
  dword_60C928CC = 0;
  dword_60C928D0 = (int)&off_60BE7990;
  *(_DWORD *)algn_60C928D4 = CurrentStateID + 7;
  dword_60C928D8 = (int)sub_602F5B38;
  dword_60C928DC = 0;
  dword_60C928E0 = (int)sub_602F5B84;
  dword_60C928E4 = 0;
  dword_60C928E8 = (int)nullsub_3309;
  dword_60C928EC = 0;
  CurrentStateID += 8;
  dword_60C928F4 = CurrentStateID;
  dword_60C928F8 = 444;
  dword_60C928FC = 1;
  dword_60C92900 = 448;
  dword_60C92904 = 1;
  dword_60C92908 = 452;
  dword_60C9290C = 1;
  dword_60C928F0 = (int)&off_60BE79A4;
  dword_60C92910 = (int)&stru_60C906EC;
  return &stru_60C906EC;
}
