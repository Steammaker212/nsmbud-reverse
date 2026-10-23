/* registerProfile_wanwan_2_3DCC50
 * address: 0x603DCC50   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_wanwan_2_3DCC50())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C992D0 = 0;
  dword_60C992D4 = 0;
  dword_60C992D8 = 0;
  dword_60C992E8 = 0;
  dword_60C992E4 = 0;
  dword_60C992E0 = 0;
  dword_60C992DC = 0;
  dword_60C992EC = -1056964608;
  unk_60C992F0 = 1111490560;
  unk_60C992F4 = 1090519040;
  unk_60C992F8 = 0;
  dword_60C992FC = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC6168;
  Profile__ctor(&stru_60C99244, Actor_wanwan_2_build, 0x16Eu, &v1, &stru_60B0136C, 2);
  dword_60C99260 = CurrentStateID + 1;
  dword_60C9925C = (int)&off_60BF85A0;
  dword_60C99264 = (int)nullsub_3610;
  dword_60C99268 = 0;
  dword_60C9926C = (int)sub_603DB930;
  dword_60C99270 = 0;
  dword_60C99274 = (int)nullsub_198;
  dword_60C99278 = 0;
  unk_60C9927C = &off_60BF85A0;
  unk_60C99280 = CurrentStateID + 2;
  dword_60C99284 = (int)nullsub_199;
  dword_60C99288 = 0;
  dword_60C9928C = (int)sub_603DB988;
  dword_60C99290 = 0;
  dword_60C99294 = (int)nullsub_3611;
  dword_60C99298 = 0;
  CurrentStateID += 3;
  dword_60C992A0 = CurrentStateID;
  dword_60C9929C = (int)&off_60BF85A0;
  dword_60C992A4 = (int)sub_603DBC94;
  dword_60C992A8 = 0;
  dword_60C992AC = (int)sub_603DBD04;
  dword_60C992B0 = 0;
  dword_60C992B4 = (int)nullsub_200;
  dword_60C992B8 = 0;
  return nullsub_200;
}
