/* registerProfile_Battle_for_Item_2_4718B4
 * address: 0x604718B4   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_Battle_for_Item_2_4718B4()
{
  sead__SafeString v1; // [sp+Ch] [bp-2Ch] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC97FF;
  Profile__ctor(&stru_60C9D8C8, Actor_Battle_for_Item_2_build, 0x32Cu, &v1, &stru_60B02920, 36);
  dword_60C9D8E4 = CurrentStateID + 1;
  dword_60C9D8E0 = (int)&off_60BFC9B8;
  dword_60C9D8E8 = (int)sub_60471290;
  dword_60C9D8EC = 0;
  dword_60C9D8F0 = (int)&loc_604712E4;
  dword_60C9D8F4 = 0;
  dword_60C9D8F8 = (int)nullsub_3725;
  dword_60C9D8FC = 0;
  CurrentStateID += 2;
  dword_60C9D904 = CurrentStateID;
  dword_60C9D900 = (int)&off_60BFC9B8;
  dword_60C9D908 = (int)sub_604713C8;
  dword_60C9D90C = 0;
  dword_60C9D910 = (int)sub_604713D8;
  dword_60C9D914 = 0;
  dword_60C9D918 = (int)nullsub_3726;
  dword_60C9D91C = 0;
  dword_60C9D920 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D924 = (int)"I_kinoko";
  dword_60C9D928 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D92C = (int)"I_fireflower";
  dword_60C9D930 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D934 = (int)"I_propeller";
  dword_60C9D938 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D93C = (int)"I_penguin";
  dword_60C9D940 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D944 = (int)"I_kinoko";
  dword_60C9D948 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D94C = (int)"I_star";
  dword_60C9D950 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D954 = (int)"I_iceflower";
  dword_60C9D958 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D95C = (int)"I_musasabi";
  sub_60000288();
  unk_60C9D960 = &sead__SafeStringBase__vtable;
  unk_60C9D964 = "I_kinoko";
  dword_60C9D968 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D96C = (int)"I_fireflower";
  dword_60C9D970 = (int)&sead__SafeStringBase__vtable;
  unk_60C9D974 = "I_propeller_model";
  unk_60C9D978 = &sead__SafeStringBase__vtable;
  unk_60C9D97C = "I_penguin";
  dword_60C9D980 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D984 = (int)"I_kinoko";
  dword_60C9D988 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D98C = (int)"I_star";
  dword_60C9D990 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D994 = (int)"I_iceflower";
  dword_60C9D998 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D99C = (int)"I_musasabi";
  return sub_60000288();
}
