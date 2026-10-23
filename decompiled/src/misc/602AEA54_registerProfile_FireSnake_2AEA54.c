/* registerProfile_FireSnake_2AEA54
 * address: 0x602AEA54   size: 996   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall *registerProfile_FireSnake_2AEA54())(int result)
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C90BA4 = 0;
  dword_60C90BA8 = 0;
  dword_60C90BAC = 0;
  dword_60C90BB0 = 1065353216;
  dword_60C90BB4 = 1065353216;
  dword_60C90BB8 = 1065353216;
  dword_60C90BA0 = (int)(float)((float)(2147500000.0 * 5.625) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC3743;
  Profile__ctor(&stru_60C90A18, FireSnake_build, 0x231u, &v2, &stru_60AFE504, 18);
  *v0 = &off_60BE31FC;
  dword_60C90A34 = CurrentStateID + 1;
  dword_60C90A30 = (int)&off_60BE3534;
  dword_60C90A38 = (int)sub_602AA2A0;
  dword_60C90A3C = 0;
  dword_60C90A40 = (int)&loc_602AA2BC;
  dword_60C90A44 = 0;
  dword_60C90A48 = (int)nullsub_3214;
  dword_60C90A4C = 0;
  dword_60C90A54 = CurrentStateID + 2;
  dword_60C90A50 = (int)&off_60BE3534;
  dword_60C90A58 = (int)sub_602AA4BC;
  dword_60C90A5C = 0;
  dword_60C90A60 = (int)sub_602AA4D0;
  dword_60C90A64 = 0;
  dword_60C90A68 = (int)nullsub_3215;
  dword_60C90A6C = 0;
  dword_60C90A74 = CurrentStateID + 3;
  dword_60C90A70 = (int)&off_60BE3534;
  dword_60C90A78 = (int)sub_602AA630;
  dword_60C90A7C = 0;
  dword_60C90A80 = (int)SE_EMY_FIRE_SNAKE_BIGGER_ref;
  dword_60C90A84 = 0;
  dword_60C90A88 = (int)nullsub_3216;
  dword_60C90A8C = 0;
  dword_60C90A94 = CurrentStateID + 4;
  dword_60C90A90 = (int)&off_60BE3534;
  dword_60C90A98 = (int)sub_602AAAB0;
  dword_60C90A9C = 0;
  dword_60C90AA0 = (int)sub_602AABCC;
  dword_60C90AA4 = 0;
  dword_60C90AA8 = (int)nullsub_3217;
  dword_60C90AAC = 0;
  dword_60C90AB4 = CurrentStateID + 5;
  dword_60C90AB0 = (int)&off_60BE3534;
  dword_60C90AB8 = (int)sub_602AAD14;
  dword_60C90ABC = 0;
  dword_60C90AC0 = (int)sub_602AAE38;
  dword_60C90AC4 = 0;
  dword_60C90AC8 = (int)nullsub_3218;
  dword_60C90ACC = 0;
  dword_60C90AD4 = CurrentStateID + 6;
  dword_60C90AD0 = (int)&off_60BE3534;
  dword_60C90AD8 = (int)sub_602AAF7C;
  dword_60C90ADC = 0;
  dword_60C90AE0 = (int)SE_EMY_FIRE_SNAKE_BIGGER_ref_2AB164;
  dword_60C90AE4 = 0;
  dword_60C90AE8 = (int)nullsub_3219;
  dword_60C90AEC = 0;
  dword_60C90AF4 = CurrentStateID + 7;
  dword_60C90AF0 = (int)&off_60BE3534;
  dword_60C90AF8 = (int)sub_602AB3EC;
  dword_60C90AFC = 0;
  dword_60C90B00 = (int)SE_EMY_FIRE_SNAKE_BIGGER_ref_2AB4E8;
  dword_60C90B04 = 0;
  dword_60C90B08 = (int)sub_602AB6A0;
  dword_60C90B0C = 0;
  dword_60C90B14 = CurrentStateID + 8;
  dword_60C90B10 = (int)&off_60BE3534;
  dword_60C90B18 = (int)sub_602AB6C8;
  dword_60C90B1C = 0;
  dword_60C90B20 = (int)SE_EMY_FIRE_SNAKE_BIGGER_ref_2AB780;
  dword_60C90B24 = 0;
  dword_60C90B28 = (int)nullsub_3220;
  dword_60C90B2C = 0;
  dword_60C90B34 = CurrentStateID + 9;
  dword_60C90B30 = (int)&off_60BE3534;
  dword_60C90B38 = (int)SE_EMY_FIRE_SNAKE_EXTINCT_ref;
  dword_60C90B3C = 0;
  dword_60C90B40 = (int)sub_602ABB6C;
  dword_60C90B44 = 0;
  dword_60C90B48 = (int)nullsub_3221;
  dword_60C90B4C = 0;
  dword_60C90B54 = CurrentStateID + 10;
  dword_60C90B58 = 456;
  dword_60C90B5C = 1;
  dword_60C90B60 = 460;
  dword_60C90B64 = 1;
  dword_60C90B68 = 464;
  dword_60C90B6C = 1;
  dword_60C90B50 = (int)&off_60BE3548;
  dword_60C90B70 = (int)&stru_60C90710;
  CurrentStateID += 11;
  dword_60C90B78 = CurrentStateID;
  dword_60C90B74 = (int)&off_60BE3534;
  dword_60C90B7C = (int)sub_602ABB90;
  dword_60C90B80 = 0;
  dword_60C90B84 = (int)sub_602ABBB0;
  dword_60C90B88 = 0;
  dword_60C90B8C = (int)sub_602ABCDC;
  dword_60C90B90 = 0;
  return sub_602ABCDC;
}
