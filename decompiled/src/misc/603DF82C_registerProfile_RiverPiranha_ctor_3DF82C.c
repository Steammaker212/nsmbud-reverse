/* registerProfile_RiverPiranha_ctor_3DF82C
 * address: 0x603DF82C   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_RiverPiranha_ctor_3DF82C()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C99320 = 0;
  dword_60C99324 = 0;
  dword_60C99328 = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC61AC;
  Profile__ctor(&stru_60C9932C, RiverPiranha_ctor, 0x1F4u, v1, &stru_60B013C0, 18);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC61BF;
  Profile__ctor(&stru_60C99344, RiverPiranha_ctor, 0x1F5u, v1, &stru_60B013C0, 18);
  dword_60C99380 = CurrentStateID + 1;
  dword_60C9937C = (int)&off_60BF8968;
  dword_60C99384 = (int)sub_603DD498;
  dword_60C99388 = 0;
  dword_60C9938C = (int)sub_603DD59C;
  dword_60C99390 = 0;
  dword_60C99394 = (int)nullsub_3612;
  dword_60C99398 = 0;
  dword_60C9939C = (int)&off_60BF8968;
  unk_60C993A0 = CurrentStateID + 2;
  dword_60C993A4 = (int)sub_603DD9F0;
  dword_60C993A8 = 0;
  dword_60C993AC = (int)sub_603DDAE8;
  dword_60C993B0 = 0;
  dword_60C993B4 = (int)sub_603DDD14;
  dword_60C993B8 = 0;
  dword_60C9935C = (int)&off_60BF8968;
  unk_60C99360 = CurrentStateID + 3;
  dword_60C99364 = (int)sub_603DDD24;
  dword_60C99368 = 0;
  dword_60C9936C = (int)sub_603DDD70;
  dword_60C99370 = 0;
  dword_60C99374 = (int)nullsub_3613;
  dword_60C99378 = 0;
  dword_60C993BC = (int)&off_60BF8968;
  unk_60C993C0 = CurrentStateID + 4;
  dword_60C993C4 = (int)sub_603DE108;
  dword_60C993C8 = 0;
  dword_60C993CC = (int)sub_603DE11C;
  dword_60C993D0 = 0;
  dword_60C993D4 = (int)nullsub_3614;
  dword_60C993D8 = 0;
  dword_60C993DC = (int)&off_60BF8968;
  unk_60C993E0 = CurrentStateID + 5;
  CurrentStateID += 6;
  dword_60C993E4 = (int)sub_603DE378;
  dword_60C993E8 = 0;
  dword_60C99400 = CurrentStateID;
  dword_60C99404 = 456;
  dword_60C99408 = 1;
  dword_60C993EC = (int)sub_603DE398;
  dword_60C993F0 = 0;
  dword_60C993F4 = (int)nullsub_201;
  dword_60C993F8 = 0;
  dword_60C9940C = 460;
  dword_60C99410 = 1;
  dword_60C99414 = 464;
  dword_60C99418 = 1;
  dword_60C993FC = (int)&off_60BF897C;
  dword_60C9941C = (int)&stru_60C90710;
  return &dword_60C993FC;
}
