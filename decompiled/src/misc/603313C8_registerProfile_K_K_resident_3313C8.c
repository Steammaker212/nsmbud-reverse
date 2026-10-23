/* registerProfile_K_K_resident_3313C8
 * address: 0x603313C8   size: 1020   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_K_K_resident_3313C8()
{
  _DWORD *v0; // r0
  sead__SafeString v2[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C93EEC = 0;
  dword_60C93EF0 = 0;
  dword_60C93EF4 = 0;
  dword_60C93EF8 = (int)&sead__SafeStringBase__vtable;
  unk_60C93EFC = "wait";
  unk_60C93F00 = &sead__SafeStringBase__vtable;
  dword_60C93F04 = (int)"wait_l";
  dword_60C93F08 = (int)&sead__SafeStringBase__vtable;
  dword_60C93F0C = (int)"walk";
  dword_60C93F10 = (int)&sead__SafeStringBase__vtable;
  dword_60C93F14 = (int)"shiko_l";
  dword_60C93F18 = (int)&sead__SafeStringBase__vtable;
  dword_60C93F1C = (int)"shiko_r";
  dword_60C93F20 = (int)&sead__SafeStringBase__vtable;
  dword_60C93F24 = (int)"down";
  dword_60C93F28 = (int)&sead__SafeStringBase__vtable;
  dword_60C93F2C = (int)"bound";
  dword_60C93F30 = (int)&sead__SafeStringBase__vtable;
  dword_60C93F34 = (int)"return";
  dword_60C93F38 = (int)&sead__SafeStringBase__vtable;
  dword_60C93F3C = (int)"damage";
  sub_60000288();
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = "K.K.";
  Profile__ctor(&stru_60C93F40, Actor_K_K_resident_build, 0x29Au, v2, &stru_60AFF95C, 18);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60BEC5A0;
  v2[0].cstr = (char *)&unk_60AC4B71;
  Profile__ctor(&stru_60C93F58, Actor_K_K_resident_build, 0x29Cu, v2, &stru_60AFF980, 18);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC4B8A;
  Profile__ctor(&stru_60C93F70, Actor_K_K_resident_build, 0x29Bu, v2, &stru_60AFF9A4, 18);
  dword_60C93F8C = CurrentStateID + 1;
  dword_60C93F88 = (int)&off_60BEC8C4;
  dword_60C93F90 = (int)sub_60331A60;
  dword_60C93F94 = 0;
  dword_60C93F98 = (int)sub_60331C20;
  dword_60C93F9C = 0;
  dword_60C93FA0 = (int)sub_60331E7C;
  dword_60C93FA4 = 0;
  dword_60C93FA8 = (int)&off_60BEC8C4;
  *(_DWORD *)algn_60C93FAC = CurrentStateID + 2;
  dword_60C93FB0 = (int)&loc_60331E8C;
  dword_60C93FB4 = 0;
  dword_60C93FB8 = (int)&loc_60331F70;
  dword_60C93FBC = 0;
  dword_60C93FC0 = (int)nullsub_3361;
  dword_60C93FC4 = 0;
  unk_60C93FC8 = &off_60BEC8C4;
  unk_60C93FCC = CurrentStateID + 3;
  dword_60C93FD0 = (int)nullsub_3362;
  dword_60C93FD4 = 0;
  dword_60C93FD8 = (int)nullsub_3363;
  dword_60C93FDC = 0;
  dword_60C93FE0 = (int)nullsub_3364;
  dword_60C93FE4 = 0;
  dword_60C93FE8 = (int)&off_60BEC8C4;
  *(_DWORD *)algn_60C93FEC = CurrentStateID + 4;
  dword_60C93FF0 = (int)sub_60332278;
  dword_60C93FF4 = 0;
  dword_60C93FF8 = (int)SE_EMY_KK_SHIKO_ref;
  dword_60C93FFC = 0;
  dword_60C94000 = (int)sub_60332870;
  dword_60C94004 = 0;
  dword_60C94008 = (int)&off_60BEC8C4;
  *(_DWORD *)algn_60C9400C = CurrentStateID + 5;
  dword_60C94010 = (int)sub_60332888;
  dword_60C94014 = 0;
  dword_60C94018 = (int)sub_60332958;
  dword_60C9401C = 0;
  dword_60C94020 = (int)sub_60332B40;
  dword_60C94024 = 0;
  dword_60C94028 = (int)&off_60BEC8C4;
  *(_DWORD *)algn_60C9402C = CurrentStateID + 6;
  dword_60C94030 = (int)sub_60332B70;
  dword_60C94034 = 0;
  dword_60C94038 = (int)sub_60332C30;
  dword_60C9403C = 0;
  dword_60C94040 = (int)sub_60332DC8;
  dword_60C94044 = 0;
  unk_60C94048 = &off_60BEC8C4;
  unk_60C9404C = CurrentStateID + 7;
  CurrentStateID += 8;
  dword_60C94050 = (int)sub_60332DF8;
  dword_60C94054 = 0;
  dword_60C9406C = CurrentStateID;
  dword_60C94070 = 456;
  dword_60C94074 = 1;
  dword_60C94058 = (int)sub_60332EB8;
  dword_60C9405C = 0;
  dword_60C94060 = (int)sub_60332FEC;
  dword_60C94064 = 0;
  dword_60C94078 = 460;
  dword_60C9407C = 1;
  dword_60C94080 = 464;
  dword_60C94084 = 1;
  dword_60C94068 = (int)&off_60BEC8D8;
  dword_60C94088 = (int)&stru_60C90710;
  return &dword_60C94068;
}
