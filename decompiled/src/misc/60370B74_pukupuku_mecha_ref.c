/* pukupuku_mecha_ref
 * address: 0x60370B74   size: 1128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int pukupuku_mecha_ref()
{
  int v0; // r4
  sead__SafeString v2[5]; // [sp+Ch] [bp-2Ch] BYREF

  dword_60C96188 = 0;
  dword_60C9618C = 0;
  dword_60C96190 = 0;
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC53DD;
  Profile__ctor(&stru_60C96000, Actor_gurupupukupuku_mid_build, 0x212u, v2, &stru_60B0041C, 18);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC53EA;
  Profile__ctor(&stru_60C96018, Actor_gurupupukupuku_mid_build, 0x214u, v2, &stru_60B00440, 18);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC5400;
  Profile__ctor(&stru_60C96030, Actor_gurupupukupuku_mid_build, 0x21Au, v2, &stru_60B00440, 18);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC5413;
  Profile__ctor(&stru_60C96048, Actor_gurupupukupuku_mid_build, 0x216u, v2, &stru_60B0041C, 18);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC5429;
  Profile__ctor(&stru_60C96060, Actor_gurupupukupuku_mid_build, 0x217u, v2, &stru_60B00440, 18);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC5448;
  Profile__ctor(&stru_60C96078, Actor_gurupupukupuku_mid_build, 0x218u, v2, &stru_60B0041C, 18);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC545B;
  Profile__ctor(&stru_60C96090, Actor_gurupupukupuku_mid_build, 0x219u, v2, &stru_60B00440, 18);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC5477;
  Profile__ctor(&stru_60C960A8, Actor_gurupupukupuku_mid_build, 0x213u, v2, &stru_60B00464, 18);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC5490;
  Profile__ctor(&stru_60C960C0, Actor_gurupupukupuku_mid_build, 0x215u, v2, &stru_60B00488, 18);
  dword_60C960DC = CurrentStateID + 1;
  dword_60C960E0 = 640;
  dword_60C960E4 = 1;
  dword_60C960E8 = 644;
  dword_60C960EC = 1;
  dword_60C960F0 = 648;
  dword_60C960F4 = 1;
  dword_60C960D8 = (int)&off_60BF0B7C;
  dword_60C960F8 = (int)&dword_60C96200;
  dword_60C96100 = CurrentStateID + 2;
  dword_60C96104 = 664;
  dword_60C96108 = 1;
  dword_60C9610C = 668;
  dword_60C96110 = 1;
  dword_60C96114 = 672;
  dword_60C96118 = 1;
  dword_60C960FC = (int)&off_60BF0B7C;
  dword_60C9611C = (int)&dword_60C96248;
  v0 = CurrentStateID + 3;
  CurrentStateID += 4;
  dword_60C96124 = v0;
  dword_60C96128 = 676;
  dword_60C9612C = 1;
  dword_60C96130 = 680;
  dword_60C96134 = 1;
  dword_60C96138 = 684;
  dword_60C9613C = 1;
  dword_60C96120 = (int)&off_60BF0B7C;
  dword_60C96140 = (int)&dword_60C9626C;
  *(_DWORD *)algn_60C96148 = CurrentStateID;
  *(_DWORD *)&algn_60C96148[4] = 688;
  dword_60C96150 = 1;
  dword_60C96154 = 692;
  dword_60C96158 = 1;
  dword_60C9615C = 696;
  dword_60C96160 = 1;
  dword_60C96144 = (int)&off_60BF0B7C;
  dword_60C96194 = (int)&sead__SafeStringBase__vtable;
  dword_60C96164 = (int)&dword_60C96290;
  dword_60C96198 = (int)"pukupuku";
  dword_60C9619C = (int)&sead__SafeStringBase__vtable;
  dword_60C961A0 = (int)"pukupuku_mecha";
  sub_60000288();
  dword_60C961A4 = (int)&sead__SafeStringBase__vtable;
  dword_60C961A8 = (int)"pukupuku";
  dword_60C961AC = (int)&sead__SafeStringBase__vtable;
  dword_60C961B0 = (int)"pukupuku_mecha";
  sub_60000288();
  dword_60C961C4 = 0;
  dword_60C961C8 = -1056545178;
  dword_60C961CC = 0;
  dword_60C961D0 = 1065353216;
  dword_60C961D4 = 1065353216;
  dword_60C961D8 = 1065353216;
  dword_60C961DC = 0;
  dword_60C961E0 = -1048995430;
  dword_60C961E4 = 0;
  dword_60C961E8 = 1072064102;
  dword_60C961EC = 1072064102;
  dword_60C961F0 = 1072064102;
  dword_60C961B4 = 1120927744;
  dword_60C961B8 = 1119879168;
  dword_60C961BC = 1128267776;
  dword_60C961C0 = 1115684864;
  return 1115684864;
}
