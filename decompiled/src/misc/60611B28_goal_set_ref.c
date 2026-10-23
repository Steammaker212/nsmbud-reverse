/* goal_set_ref
 * address: 0x60611B28   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *goal_set_ref()
{
  sead__SafeString v1[5]; // [sp+10h] [bp-28h] BYREF

  dword_60CB31F0 = 0;
  dword_60CB31F4 = 0;
  dword_60CB31F8 = 0;
  dword_60CB3218 = 0;
  dword_60CB3214 = 0;
  dword_60CB3210 = 0;
  dword_60CB320C = 0;
  dword_60CB321C = -1048576000;
  dword_60CB3220 = 1098907648;
  dword_60CB3224 = 1098907648;
  dword_60CB3228 = 0;
  dword_60CB322C = 0;
  dword_60CB31FC[0] = (int)&sead__SafeStringBase__vtable;
  dword_60CB3200 = (int)"goal_set";
  dword_60CB3204 = (int)&sead__SafeStringBase__vtable;
  dword_60CB3208 = (int)"goal_set_kaiga";
  sub_60000288();
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD39A2;
  Profile__ctor(&stru_60CB30FC, Actor_sutejifor_goruporu_RDash_build, 0x113u, v1, &stru_60B06520, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD39B5;
  Profile__ctor(&stru_60CB3114, Actor_sutejifor_goruporu_RDash_build, 0x114u, v1, &stru_60B06520, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD39DD;
  Profile__ctor(&stru_60CB312C, Actor_sutejifor_goruporu_RDash_build, 0x115u, v1, &stru_60B06520, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD39F7;
  Profile__ctor(&stru_60CB3144, Actor_sutejifor_goruporu_RDash_build, 0x116u, v1, &stru_60B06520, 2);
  dword_60CB3160 = CurrentStateID + 1;
  dword_60CB315C = (int)&off_60C100AC;
  dword_60CB3164 = (int)nullsub_4891;
  dword_60CB3168 = 0;
  dword_60CB316C = (int)sub_60611FCC;
  dword_60CB3170 = 0;
  dword_60CB3174 = (int)nullsub_4892;
  dword_60CB3178 = 0;
  unk_60CB317C = &off_60C100AC;
  unk_60CB3180 = CurrentStateID + 2;
  dword_60CB3184 = (int)&loc_606120B0;
  dword_60CB3188 = 0;
  dword_60CB318C = (int)SE_SYS_GOAL_FLAG_ref;
  dword_60CB3190 = 0;
  dword_60CB3194 = (int)nullsub_4893;
  dword_60CB3198 = 0;
  unk_60CB319C = &off_60C100AC;
  unk_60CB31A0 = CurrentStateID + 3;
  CurrentStateID += 4;
  dword_60CB31C0 = CurrentStateID;
  dword_60CB31A4 = (int)sub_60612338;
  dword_60CB31BC = (int)&off_60C100AC;
  dword_60CB31A8 = 0;
  dword_60CB31C4 = (int)sub_6061238C;
  dword_60CB31AC = (int)sub_60612348;
  dword_60CB31C8 = 0;
  dword_60CB31B0 = 0;
  dword_60CB31CC = (int)nullsub_4895;
  dword_60CB31B4 = (int)nullsub_4894;
  dword_60CB31B8 = 0;
  dword_60CB31D0 = 0;
  dword_60CB31D4 = (int)nullsub_4896;
  dword_60CB31D8 = 0;
  return &dword_60CB31BC;
}
