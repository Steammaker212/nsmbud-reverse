/* I_musasabiP_ref_2
 * address: 0x6046D6E4   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *I_musasabiP_ref_2()
{
  sead__SafeString v1; // [sp+Ch] [bp-2Ch] BYREF

  unk_60C9D720 = &sead__SafeStringBase__vtable;
  unk_60C9D724 = "I_musasabi";
  dword_60C9D728 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D72C = (int)"I_star";
  dword_60C9D730 = (int)&sead__SafeStringBase__vtable;
  unk_60C9D734 = "I_kinoko";
  unk_60C9D738 = &sead__SafeStringBase__vtable;
  unk_60C9D73C = "I_fireflower";
  dword_60C9D740 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D744 = (int)"I_iceflower";
  dword_60C9D748 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D74C = (int)"I_musasabi";
  dword_60C9D750 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D754 = (int)"I_kinoko";
  sub_60000288();
  dword_60C9D758 = (int)&sead__SafeStringBase__vtable;
  unk_60C9D75C = "I_musasabiP";
  unk_60C9D760 = &sead__SafeStringBase__vtable;
  unk_60C9D764 = "I_star";
  dword_60C9D768 = (int)&sead__SafeStringBase__vtable;
  unk_60C9D76C = "I_kinoko";
  unk_60C9D770 = &sead__SafeStringBase__vtable;
  unk_60C9D774 = "I_fireflower";
  dword_60C9D778 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D77C = (int)"I_iceflower";
  dword_60C9D780 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D784 = (int)"I_musasabi";
  dword_60C9D788 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D78C = (int)"I_kinoko";
  sub_60000288();
  dword_60C9D790[0] = (int)&sead__SafeStringBase__vtable;
  unk_60C9D794 = "wait2";
  unk_60C9D798 = &sead__SafeStringBase__vtable;
  dword_60C9D79C = (int)"wait";
  dword_60C9D7A0 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D7A4 = (int)"wait";
  dword_60C9D7A8 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D7AC = (int)"wait";
  dword_60C9D7B0 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D7B4 = (int)"wait";
  dword_60C9D7B8 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D7BC = (int)"wait";
  dword_60C9D7C0 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D7C4 = (int)"wait";
  sub_60000288();
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC9980;
  Profile__ctor(&stru_60C9D688, Actor_Quest_Item_build, 0x1CFu, &v1, &stru_60B0286C, 2);
  dword_60C9D6A4 = CurrentStateID + 1;
  dword_60C9D6A0 = (int)&off_60BFC4C4;
  dword_60C9D6A8 = (int)sub_6046DABC;
  dword_60C9D6AC = 0;
  dword_60C9D6B0 = (int)&loc_6046DAD8;
  dword_60C9D6B4 = 0;
  dword_60C9D6B8 = (int)nullsub_3714;
  dword_60C9D6BC = 0;
  unk_60C9D6C0 = &off_60BFC4C4;
  unk_60C9D6C4 = CurrentStateID + 2;
  dword_60C9D6C8 = (int)SE_SYS_KINO_GIVE_ITEM_ref;
  dword_60C9D6CC = 0;
  dword_60C9D6D0 = (int)&loc_6046DB98;
  dword_60C9D6D4 = 0;
  dword_60C9D6D8 = (int)nullsub_3715;
  dword_60C9D6DC = 0;
  dword_60C9D6E0 = (int)&off_60BFC4C4;
  *(_DWORD *)algn_60C9D6E4 = CurrentStateID + 3;
  CurrentStateID += 4;
  dword_60C9D704 = CurrentStateID;
  dword_60C9D6E8 = (int)nullsub_3716;
  dword_60C9D700 = (int)&off_60BFC4C4;
  dword_60C9D6EC = 0;
  dword_60C9D708 = (int)nullsub_3719;
  dword_60C9D6F0 = (int)nullsub_3717;
  dword_60C9D70C = 0;
  dword_60C9D6F4 = 0;
  dword_60C9D710 = (int)nullsub_3720;
  dword_60C9D6F8 = (int)nullsub_3718;
  dword_60C9D6FC = 0;
  dword_60C9D714 = 0;
  dword_60C9D718 = (int)nullsub_3721;
  dword_60C9D71C = 0;
  return &dword_60C9D700;
}
