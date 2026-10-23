/* registerProfile_raitokurage_2F8A64
 * address: 0x602F8A64   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 registerProfile_raitokurage_2F8A64()
{
  int v0; // r2
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C92A1C = 0;
  dword_60C92A20 = 0;
  dword_60C92A24 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC4143;
  Profile__ctor(&stru_60C9291C, Actor_raitokurage_build, 0x229u, &v2, &stru_60AFEF0C, 2);
  dword_60C92938 = CurrentStateID + 1;
  dword_60C92934 = (int)&off_60BE7C90;
  dword_60C9293C = (int)sub_602F7D5C;
  dword_60C92940 = 0;
  dword_60C92944 = (int)sub_602F7E18;
  dword_60C92948 = 0;
  dword_60C9294C = (int)sub_602F7F60;
  dword_60C92950 = 0;
  unk_60C92954 = &off_60BE7C90;
  unk_60C92958 = CurrentStateID + 2;
  dword_60C9295C = (int)sub_602F7F70;
  dword_60C92960 = 0;
  dword_60C92964 = (int)&loc_602F8008;
  dword_60C92968 = 0;
  dword_60C9296C = (int)nullsub_3310;
  dword_60C92970 = 0;
  dword_60C92974 = (int)&off_60BE7C90;
  unk_60C92978 = CurrentStateID + 3;
  dword_60C9297C = (int)&loc_602F83F0;
  dword_60C92980 = 0;
  dword_60C92984 = (int)&loc_602F8468;
  dword_60C92988 = 0;
  dword_60C9298C = (int)sub_602F8A2C;
  dword_60C92990 = 0;
  v0 = CurrentStateID + 4;
  CurrentStateID += 5;
  dword_60C92998 = v0;
  dword_60C9299C = 612;
  dword_60C929A0 = 1;
  dword_60C929A4 = 616;
  dword_60C929A8 = 1;
  dword_60C929AC = 620;
  dword_60C929B0 = 1;
  dword_60C92994 = (int)&off_60BE7CA4;
  dword_60C929B4 = (int)&Enemy_StateId_Frozen;
  unk_60C929BC = CurrentStateID;
  unk_60C929C0 = 456;
  dword_60C929C4 = 1;
  dword_60C929C8 = 460;
  dword_60C929CC = 1;
  dword_60C929D0 = 464;
  dword_60C929D4 = 1;
  dword_60C929B8 = (int)&off_60BE7CA4;
  dword_60C929D8 = (int)&stru_60C90710;
  dword_60C92A30 = (int)&sead__SafeStringBase__vtable;
  *(_DWORD *)algn_60C92A34 = "wait";
  dword_60C92A38 = 1;
  dword_60C92A3C = 1065353216;
  dword_60C92A40 = (int)&sead__SafeStringBase__vtable;
  dword_60C92A44 = (int)"swim_up_st";
  dword_60C92A48 = 0;
  dword_60C92A4C = 1065353216;
  dword_60C92A50 = (int)&sead__SafeStringBase__vtable;
  dword_60C92A54 = (int)"swim_up";
  dword_60C92A58 = 1;
  dword_60C92A5C = 1065353216;
  dword_60C92A60 = (int)&sead__SafeStringBase__vtable;
  dword_60C92A64 = (int)"swim_up_ed";
  dword_60C92A68 = 0;
  dword_60C92A6C = 1065353216;
  dword_60C92A70 = (int)&sead__SafeStringBase__vtable;
  dword_60C92A74 = (int)"swim_down_st";
  dword_60C92A78 = 0;
  dword_60C92A7C = 1065353216;
  dword_60C92A80 = (int)&sead__SafeStringBase__vtable;
  dword_60C92A84 = (int)"swim_down";
  dword_60C92A88 = 1;
  dword_60C92A8C = 1065353216;
  dword_60C92A90 = (int)&sead__SafeStringBase__vtable;
  dword_60C92A94 = (int)"swim_up_st";
  dword_60C92A98 = 0;
  dword_60C92A9C = 0;
  sub_60000288();
  unk_60C929F0 = 0x2000000080000000LL;
  return 0x2000000080000000LL;
}
