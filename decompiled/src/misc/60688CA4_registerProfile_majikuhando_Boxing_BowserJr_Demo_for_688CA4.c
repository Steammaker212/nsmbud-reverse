/* registerProfile_majikuhando_Boxing_BowserJr_Demo_for_688CA4
 * address: 0x60688CA4   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_majikuhando_Boxing_BowserJr_Demo_for_688CA4()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r0
  sead__SafeString v3[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CB8398 = 0;
  dword_60CB839C = 0;
  dword_60CB83A0 = 0;
  v3[0].vtable = &sead__SafeStringBase__vtable;
  v3[0].cstr = (char *)&unk_60AD668E;
  Profile__ctor(&stru_60CB83A4, Actor_majikuhando_Boxing_BowserJr_Demo_for_build, 0x119u, v3, &stru_60B07DE0, 0);
  v3[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60C16FEC;
  v3[0].cstr = (char *)&unk_60AD66C2;
  Profile__ctor(&stru_60CB83BC, Actor_majikuhando_Boxing_BowserJr_Demo_for_build, 0x11Au, v3, &stru_60B07DE0, 0);
  *v1 = &off_60C16FF8;
  dword_60CB83D8 = CurrentStateID + 1;
  dword_60CB83D4 = (int)&off_60C17100;
  dword_60CB83DC = (int)sub_606864F0;
  dword_60CB83E0 = 0;
  dword_60CB83E4 = (int)nullsub_5145;
  dword_60CB83E8 = 0;
  dword_60CB83EC = (int)nullsub_5146;
  dword_60CB83F0 = 0;
  dword_60CB83F4 = (int)&off_60C17100;
  unk_60CB83F8 = CurrentStateID + 2;
  dword_60CB83FC = (int)SE_BOSS_KOOPAHAND_APPEAR_ref;
  dword_60CB8400 = 0;
  dword_60CB8404 = (int)&loc_6068661C;
  dword_60CB8408 = 0;
  dword_60CB840C = (int)nullsub_5147;
  dword_60CB8410 = 0;
  unk_60CB8414 = &off_60C17100;
  unk_60CB8418 = CurrentStateID + 3;
  dword_60CB841C = (int)SE_BOSS_KOOPAHAND_ARM_MOVE_ref;
  dword_60CB8420 = 0;
  dword_60CB8424 = (int)SE_BOSS_KOOPAHAND_SWING_ref;
  dword_60CB8428 = 0;
  dword_60CB842C = (int)nullsub_5148;
  dword_60CB8430 = 0;
  dword_60CB8434 = (int)&off_60C17100;
  unk_60CB8438 = CurrentStateID + 4;
  CurrentStateID += 5;
  dword_60CB8458 = CurrentStateID;
  dword_60CB843C = (int)SE_BOSS_KOOPAHAND_APPEAR_ref_2;
  dword_60CB8454 = (int)&off_60C17100;
  dword_60CB8440 = 0;
  dword_60CB845C = (int)SE_BOSS_KOOPAHAND_PUNCH_SIGN_ref;
  dword_60CB8444 = (int)&loc_60686A20;
  dword_60CB8460 = 0;
  dword_60CB8448 = 0;
  dword_60CB8464 = (int)sub_60686CBC;
  dword_60CB844C = (int)nullsub_5149;
  dword_60CB8450 = 0;
  dword_60CB8468 = 0;
  dword_60CB846C = (int)nullsub_5150;
  dword_60CB8470 = 0;
  return &dword_60CB8454;
}
