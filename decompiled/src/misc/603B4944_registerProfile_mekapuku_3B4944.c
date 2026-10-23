/* registerProfile_mekapuku_3B4944
 * address: 0x603B4944   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_mekapuku_3B4944()
{
  sead__SafeString v1[5]; // [sp+10h] [bp-28h] BYREF

  dword_60C980C0 = 0;
  dword_60C980C4 = 0;
  dword_60C980C8 = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC5B5A;
  Profile__ctor(&stru_60C97FF0, Actor_mekapuku_build, 0x21Cu, v1, &stru_60B00BD4, 18);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC5B67;
  Profile__ctor(&stru_60C98008, Actor_mekapuku_build, 0x21Du, v1, &stru_60B00BD4, 18);
  dword_60C98024 = CurrentStateID + 1;
  dword_60C98020 = (int)&off_60BF59B8;
  dword_60C98028 = (int)sub_603B41A4;
  dword_60C9802C = 0;
  dword_60C98030 = (int)&loc_603B42A0;
  dword_60C98034 = 0;
  dword_60C98038 = (int)sub_603B4540;
  dword_60C9803C = 0;
  dword_60C98040 = (int)&off_60BF59B8;
  *(_DWORD *)algn_60C98044 = CurrentStateID + 2;
  dword_60C98048 = (int)sub_603B454C;
  dword_60C9804C = 0;
  dword_60C98050 = (int)sub_603B4610;
  dword_60C98054 = 0;
  dword_60C98058 = (int)sub_603B4648;
  dword_60C9805C = 0;
  dword_60C98060 = (int)&off_60BF59B8;
  *(_DWORD *)algn_60C98064 = CurrentStateID + 3;
  CurrentStateID += 4;
  dword_60C980FC = (int)&sead__SafeStringBase__vtable;
  dword_60C98068 = (int)sub_603B4654;
  dword_60C9806C = 0;
  dword_60C98084 = CurrentStateID;
  dword_60C98088 = 612;
  dword_60C9808C = 1;
  dword_60C98070 = (int)sub_603B46E0;
  dword_60C98074 = 0;
  dword_60C98078 = (int)sub_603B491C;
  dword_60C9807C = 0;
  dword_60C98090 = 616;
  dword_60C98094 = 1;
  dword_60C98098 = 620;
  dword_60C9809C = 1;
  dword_60C98080 = (int)&off_60BF59CC;
  dword_60C980A0 = (int)&Enemy_StateId_Frozen;
  dword_60C98130 = 1094713344;
  dword_60C98134 = 822;
  dword_60C98138 = 7;
  dword_60C9813C = (int)"SE_EMY_TOBIPUKU_JUMP";
  dword_60C98140 = 1082130432;
  dword_60C98144 = 821;
  dword_60C98148 = 6;
  dword_60C9814C = (int)"SE_EMY_TOBIPUKU_SPLASH";
  dword_60C98100 = (int)"pukupuku";
  dword_60C98104 = (int)&sead__SafeStringBase__vtable;
  dword_60C98108 = (int)"pukupuku_mecha";
  sub_60000288();
  dword_60C9810C = (int)&sead__SafeStringBase__vtable;
  dword_60C98110 = (int)"pukupuku";
  dword_60C98114 = (int)&sead__SafeStringBase__vtable;
  dword_60C98118 = (int)"pukupuku_mecha";
  sub_60000288();
  dword_60C9811C = (int)&sead__SafeStringBase__vtable;
  dword_60C98120 = (int)"fly";
  dword_60C98124 = (int)&sead__SafeStringBase__vtable;
  dword_60C98128 = (int)"swim";
  return sub_60000288();
}
