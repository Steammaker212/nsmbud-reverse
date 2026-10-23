/* registerProfile_Boxing_BowserJr_exclusive_floor_634B88
 * address: 0x60634B88   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_Boxing_BowserJr_exclusive_floor_634B88()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60CB4470 = 0;
  dword_60CB4474 = 0;
  dword_60CB4478 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AD425F;
  Profile__ctor(&stru_60CB43AC, Actor_Boxing_BowserJr_exclusive_floor_build, 0x174u, &v2, &stru_60B071FC, 0);
  *v0 = &off_60C129A0;
  dword_60CB43C8 = CurrentStateID + 1;
  dword_60CB43C4 = (int)&off_60C12AA0;
  dword_60CB43CC = (int)sub_60633850;
  dword_60CB43D0 = 0;
  dword_60CB43D4 = (int)sub_6063386C;
  dword_60CB43D8 = 0;
  dword_60CB43DC = (int)nullsub_4974;
  dword_60CB43E0 = 0;
  stru_60CB43E4.vtable = &off_60C12AA0;
  stru_60CB43E4.id = CurrentStateID + 2;
  dword_60CB43EC = (int)sub_606338D0;
  dword_60CB43F0 = 0;
  dword_60CB43F4 = (int)SE_BOSS_JR_BLOCK_APPEAR_ref;
  dword_60CB43F8 = 0;
  dword_60CB43FC = (int)nullsub_4975;
  dword_60CB4400 = 0;
  stru_60CB4404.vtable = &off_60C12AA0;
  stru_60CB4404.id = CurrentStateID + 3;
  dword_60CB440C = (int)sub_60633CC8;
  dword_60CB4410 = 0;
  dword_60CB4414 = (int)nullsub_4976;
  dword_60CB4418 = 0;
  dword_60CB441C = (int)nullsub_4977;
  dword_60CB4420 = 0;
  stru_60CB4424.vtable = &off_60C12AA0;
  stru_60CB4424.id = CurrentStateID + 4;
  CurrentStateID += 5;
  dword_60CB447C = (int)&sead__SafeStringBase__vtable;
  dword_60CB4448 = CurrentStateID;
  dword_60CB4444 = (int)&off_60C12AA0;
  dword_60CB442C = (int)SE_BOSS_JR_BLOCK_HIBI_ref;
  dword_60CB4430 = 0;
  dword_60CB444C = (int)sub_60633EC4;
  dword_60CB4450 = 0;
  dword_60CB4434 = (int)sub_60633DC0;
  dword_60CB4438 = 0;
  dword_60CB4454 = (int)sub_60633EF8;
  dword_60CB4458 = 0;
  dword_60CB443C = (int)nullsub_4978;
  dword_60CB4440 = 0;
  dword_60CB445C = (int)nullsub_248;
  dword_60CB4460 = 0;
  dword_60CB4480 = (int)"point_sign";
  dword_60CB4484 = (int)&sead__SafeStringBase__vtable;
  dword_60CB4488 = (int)"point_appear";
  return sub_60000288();
}
