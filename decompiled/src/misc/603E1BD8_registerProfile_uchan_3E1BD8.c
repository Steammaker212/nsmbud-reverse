/* registerProfile_uchan_3E1BD8
 * address: 0x603E1BD8   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_uchan_3E1BD8()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-28h] BYREF

  dword_60C99590 = 0;
  dword_60C99594 = 0;
  dword_60C99598 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC6209;
  Profile__ctor(&stru_60C9944C, Actor_uchan_build, 0x28Bu, &v2, &stru_60B01434, 2);
  *v0 = &off_60BF8990;
  dword_60C99468 = CurrentStateID + 1;
  dword_60C9946C = 676;
  dword_60C99470 = 1;
  dword_60C99474 = 680;
  dword_60C99478 = 1;
  dword_60C9947C = 684;
  dword_60C99480 = 1;
  dword_60C99464 = (int)&off_60BF8D04;
  dword_60C99484 = (int)&dword_60CBCA80;
  dword_60C9948C = CurrentStateID + 2;
  dword_60C99490 = 688;
  dword_60C99494 = 1;
  dword_60C99498 = 692;
  dword_60C9949C = 1;
  dword_60C994A0 = 696;
  dword_60C994A4 = 1;
  dword_60C99488 = (int)&off_60BF8D04;
  dword_60C994A8 = (int)&unk_60CBCAA4;
  dword_60C994B0 = CurrentStateID + 3;
  dword_60C994B4 = 700;
  dword_60C994B8 = 1;
  dword_60C994BC = 704;
  dword_60C994C0 = 1;
  dword_60C994C4 = 708;
  dword_60C994C8 = 1;
  dword_60C994AC = (int)&off_60BF8D04;
  dword_60C994CC = (int)&unk_60CBCAC8;
  dword_60C994D4 = CurrentStateID + 4;
  dword_60C994D8 = 712;
  dword_60C994DC = 1;
  dword_60C994E0 = 716;
  dword_60C994E4 = 1;
  dword_60C994E8 = 720;
  dword_60C994EC = 1;
  dword_60C994D0 = (int)&off_60BF8D04;
  dword_60C994F0 = (int)&unk_60CBCAEC;
  dword_60C994F8 = CurrentStateID + 5;
  dword_60C994FC = 724;
  dword_60C99500 = 1;
  dword_60C99504 = 728;
  dword_60C99508 = 1;
  dword_60C9950C = 732;
  dword_60C99510 = 1;
  dword_60C994F4 = (int)&off_60BF8D04;
  dword_60C99514 = (int)&unk_60CBCB10;
  dword_60C9951C = CurrentStateID + 6;
  dword_60C99520 = 736;
  dword_60C99524 = 1;
  dword_60C99528 = 740;
  dword_60C9952C = 1;
  dword_60C99530 = 744;
  dword_60C99534 = 1;
  dword_60C99518 = (int)&off_60BF8D04;
  dword_60C99538 = (int)&unk_60CBCB34;
  unk_60C99544 = 748;
  unk_60C99548 = 1;
  unk_60C9954C = 752;
  dword_60C99550 = 1;
  dword_60C99554 = 756;
  dword_60C99558 = 1;
  unk_60C9953C = &off_60BF8D04;
  unk_60C99540 = CurrentStateID + 7;
  dword_60C9959C = (int)&sead__SafeStringBase__vtable;
  dword_60C9955C = (int)&dword_60CBCB58;
  CurrentStateID += 8;
  dword_60C99564 = CurrentStateID;
  dword_60C99560 = (int)&off_60BF8D18;
  dword_60C99568 = (int)SE_BOSS_WOOGAN_THAW_ref;
  dword_60C9956C = 0;
  dword_60C99570 = (int)SE_EMY_WOOCHAN_MOGURU_LAST_ref;
  dword_60C99574 = 0;
  dword_60C99578 = (int)nullsub_3615;
  dword_60C9957C = 0;
  dword_60C995A0 = (int)"wait";
  dword_60C995A4 = (int)&sead__SafeStringBase__vtable;
  dword_60C995A8 = (int)"move";
  dword_60C995AC = (int)&sead__SafeStringBase__vtable;
  dword_60C995B0 = (int)"omen";
  return sub_60000288();
}
