/* registerProfile_giant_SumoBro_patsu_0F779C
 * address: 0x600F779C   size: 1288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_giant_SumoBro_patsu_0F779C()
{
  _DWORD *v0; // r0
  sead__SafeString v2[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C85B5C = 0;
  dword_60C85B60 = 0;
  dword_60C85B64 = 0;
  dword_60C85B74 = 1065353216;
  dword_60C85B78 = 1065353216;
  dword_60C85B7C = 1065353216;
  dword_60C85B80 = 1061997773;
  dword_60C85B84 = 1067030938;
  dword_60C85B88 = 1065353216;
  dword_60C85B8C = 1066611507;
  dword_60C85B90 = 1062836634;
  dword_60C85B94 = 1065353216;
  dword_60C85B98 = 1063675494;
  dword_60C85B9C = 1066192077;
  unk_60C85BA0 = 1065353216;
  unk_60C85BA4 = 1065772646;
  unk_60C85BA8 = 1064514355;
  dword_60C85BAC = 1065353216;
  dword_60C85BB0 = 1065353216;
  dword_60C85BB4 = 1065353216;
  dword_60C85BB8 = 1065353216;
  dword_60C85B70 = 0;
  dword_60C85B6C = (int)&dword_60C85B68;
  dword_60C85B68 = (int)&dword_60C85B68;
  memset(&unk_60C858B8, 0, 240);
  dword_60C85B54 = -1103101952;
  dword_60C85B58 = -1065353216;
  unk_60C85B40 = (int)(float)((float)(2147500000.0 * 16.0) / 180.0);
  dword_60C85B44 = (int)(float)((float)(2147500000.0 * 18.0) / 180.0);
  dword_60C85B48 = (int)(float)((float)(2147500000.0 * 30.0) / 180.0);
  dword_60C85B4C = (int)(float)((float)(2147500000.0 * 8.0) / 180.0);
  dword_60C85B50 = (int)(float)((float)(2147500000.0 * 35.0) / 180.0);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60ABDDEB;
  Profile__ctor(&stru_60C859A8, Actor_giant_SumoBro_patsu_build, 0x2BAu, v2, &stru_60AF5FF8, 18);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60BCEAB8;
  v2[0].cstr = (char *)&unk_60ABDDFB;
  Profile__ctor(&stru_60C859C0, Actor_giant_SumoBro_patsu_2_build, 0x2BBu, v2, &stru_60AF5FF8, 18);
  dword_60C859DC = CurrentStateID + 1;
  dword_60C859D8 = (int)&off_60BCF010;
  dword_60C859E0 = (int)sub_600F48D0;
  dword_60C859E4 = 0;
  dword_60C859E8 = (int)sub_600F4B88;
  dword_60C859EC = 0;
  dword_60C859F0 = (int)nullsub_2765;
  dword_60C859F4 = 0;
  unk_60C859F8 = &off_60BCF010;
  unk_60C859FC = CurrentStateID + 2;
  dword_60C85A00 = (int)sub_600F4BBC;
  dword_60C85A04 = 0;
  dword_60C85A08 = (int)sub_600F4C4C;
  dword_60C85A0C = 0;
  dword_60C85A10 = (int)nullsub_2766;
  dword_60C85A14 = 0;
  unk_60C85A18 = &off_60BCF010;
  unk_60C85A1C = CurrentStateID + 3;
  dword_60C85A20 = (int)sub_600F4C68;
  dword_60C85A24 = 0;
  dword_60C85A28 = (int)SE_AMB_SANDPILLAR_SIGN_ref;
  dword_60C85A2C = 0;
  dword_60C85A30 = (int)nullsub_2767;
  dword_60C85A34 = 0;
  unk_60C85A38 = &off_60BCF010;
  unk_60C85A3C = CurrentStateID + 4;
  dword_60C85A40 = (int)sub_600F4E08;
  dword_60C85A44 = 0;
  dword_60C85A48 = (int)SE_AMB_SANDPILLAR_SIGN_ref_F4F14;
  dword_60C85A4C = 0;
  dword_60C85A50 = (int)nullsub_2768;
  dword_60C85A54 = 0;
  dword_60C85ABC = CurrentStateID + 5;
  dword_60C85AB8 = (int)&off_60BCF024;
  dword_60C85AC0 = (int)nullsub_2769;
  dword_60C85AC4 = 0;
  dword_60C85AC8 = (int)sub_600F5B18;
  dword_60C85ACC = 0;
  dword_60C85AD0 = (int)sub_600F5B30;
  dword_60C85AD4 = 0;
  dword_60C85A58 = (int)&off_60BCF024;
  *(_DWORD *)algn_60C85A5C = CurrentStateID + 6;
  dword_60C85A60 = (int)sub_600F5B48;
  dword_60C85A64 = 0;
  dword_60C85A68 = (int)&loc_600F5B54;
  dword_60C85A6C = 0;
  dword_60C85A70 = (int)nullsub_2770;
  dword_60C85A74 = 0;
  unk_60C85A78 = &off_60BCF024;
  unk_60C85A7C = CurrentStateID + 7;
  dword_60C85A80 = (int)sub_600F5D84;
  dword_60C85A84 = 0;
  dword_60C85A88 = (int)sub_600F5E44;
  dword_60C85A8C = 0;
  dword_60C85A90 = (int)nullsub_139;
  dword_60C85A94 = 0;
  unk_60C85A98 = &off_60BCF024;
  unk_60C85A9C = CurrentStateID + 8;
  dword_60C85AA0 = (int)nullsub_140;
  dword_60C85AA4 = 0;
  dword_60C85AA8 = (int)&loc_600F5E6C;
  dword_60C85AAC = 0;
  dword_60C85AB0 = (int)nullsub_2771;
  dword_60C85AB4 = 0;
  dword_60C85AD8 = (int)&off_60BCF024;
  *(_DWORD *)algn_60C85ADC = CurrentStateID + 9;
  dword_60C85AE0 = (int)sub_600F6120;
  dword_60C85AE4 = 0;
  dword_60C85AE8 = (int)SE_BOSS_SANBO_CRASH_ref;
  dword_60C85AEC = 0;
  dword_60C85AF0 = (int)nullsub_2772;
  dword_60C85AF4 = 0;
  dword_60C85AF8 = (int)&off_60BCF024;
  *(_DWORD *)algn_60C85AFC = CurrentStateID + 10;
  CurrentStateID += 11;
  dword_60C85B1C = CurrentStateID;
  dword_60C85B00 = (int)&loc_600F6398;
  dword_60C85B18 = (int)&off_60BCF024;
  dword_60C85B04 = 0;
  dword_60C85B20 = (int)sub_600F67B8;
  dword_60C85B08 = (int)SE_BOSS_SANBO_CRASH_ref_2;
  dword_60C85B24 = 0;
  dword_60C85B0C = 0;
  dword_60C85B28 = (int)&loc_600F68A8;
  dword_60C85B10 = (int)nullsub_2773;
  dword_60C85B14 = 0;
  dword_60C85B2C = 0;
  dword_60C85B30 = (int)nullsub_2774;
  dword_60C85B34 = 0;
  return &dword_60C85B18;
}
