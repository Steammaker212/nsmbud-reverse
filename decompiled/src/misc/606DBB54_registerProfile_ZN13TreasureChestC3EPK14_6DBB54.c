/* registerProfile_ZN13TreasureChestC3EPK14_6DBB54
 * address: 0x606DBB54   size: 1084   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_ZN13TreasureChestC3EPK14_6DBB54()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+14h] [bp-2Ch] BYREF

  dword_60CBB9C8 = 0;
  dword_60CBB9CC = 0;
  dword_60CBB9D0 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AD7EBA;
  Profile__ctor(&stru_60CBB884, TreasureChest__ctor, 0x328u, &v2, &stru_60B08EE8, 2);
  *v0 = &off_60C1E950;
  dword_60CBB8A0 = CurrentStateID + 1;
  dword_60CBB89C = (int)&off_60C1EA54;
  dword_60CBB8A4 = (int)sub_606D9E8C;
  dword_60CBB8A8 = 0;
  dword_60CBB8AC = (int)sub_606D9E9C;
  dword_60CBB8B0 = 0;
  dword_60CBB8B4 = (int)nullsub_5260;
  dword_60CBB8B8 = 0;
  unk_60CBB8BC = &off_60C1EA54;
  unk_60CBB8C0 = CurrentStateID + 2;
  dword_60CBB8C4 = (int)sub_606D9F14;
  dword_60CBB8C8 = 0;
  dword_60CBB8CC = (int)SE_OBJ_TREASURE_BOX_APP_ref;
  dword_60CBB8D0 = 0;
  dword_60CBB8D4 = (int)nullsub_5261;
  dword_60CBB8D8 = 0;
  stru_60CBB8DC.vtable = &off_60C1EA54;
  stru_60CBB8DC.id = CurrentStateID + 3;
  dword_60CBB8E4 = (int)sub_606DA084;
  dword_60CBB8E8 = 0;
  dword_60CBB8EC = (int)sub_606DA0FC;
  dword_60CBB8F0 = 0;
  dword_60CBB8F4 = (int)nullsub_5262;
  dword_60CBB8F8 = 0;
  unk_60CBB8FC = &off_60C1EA54;
  unk_60CBB900 = CurrentStateID + 4;
  dword_60CBB904 = (int)nullsub_5263;
  dword_60CBB908 = 0;
  dword_60CBB90C = (int)sub_606DA260;
  dword_60CBB910 = 0;
  dword_60CBB914 = (int)nullsub_5264;
  dword_60CBB918 = 0;
  dword_60CBB91C = (int)&off_60C1EA54;
  unk_60CBB920 = CurrentStateID + 5;
  dword_60CBB924 = (int)sub_606DA2AC;
  dword_60CBB928 = 0;
  dword_60CBB92C = (int)sub_606DA2BC;
  dword_60CBB930 = 0;
  dword_60CBB934 = (int)nullsub_5265;
  dword_60CBB938 = 0;
  stru_60CBB93C.vtable = &off_60C1EA54;
  stru_60CBB93C.id = CurrentStateID + 6;
  dword_60CBB944 = (int)SE_OBJ_TREASURE_BOX_OPEN_ref;
  dword_60CBB948 = 0;
  dword_60CBB94C = (int)sub_606DA668;
  dword_60CBB950 = 0;
  dword_60CBB954 = (int)nullsub_5266;
  dword_60CBB958 = 0;
  stru_60CBB95C.vtable = &off_60C1EA54;
  stru_60CBB95C.id = CurrentStateID + 7;
  dword_60CBB964 = (int)sub_606DA6D8;
  dword_60CBB968 = 0;
  dword_60CBB96C = (int)sub_606DA6E8;
  dword_60CBB970 = 0;
  dword_60CBB974 = (int)nullsub_5267;
  dword_60CBB978 = 0;
  unk_60CBB97C = &off_60C1EA54;
  unk_60CBB980 = CurrentStateID + 8;
  CurrentStateID += 9;
  dword_60CBB9D4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBB9A0 = CurrentStateID;
  dword_60CBB99C = (int)&off_60C1EA54;
  dword_60CBB984 = (int)sub_606DA7B0;
  dword_60CBB988 = 0;
  dword_60CBB9A4 = (int)sub_606DA8F4;
  dword_60CBB9A8 = 0;
  dword_60CBB98C = (int)sub_606DA860;
  dword_60CBB990 = 0;
  dword_60CBB9AC = (int)sub_606DA91C;
  dword_60CBB9B0 = 0;
  dword_60CBB994 = (int)nullsub_5268;
  dword_60CBB998 = 0;
  dword_60CBB9B4 = (int)nullsub_5269;
  dword_60CBB9B8 = 0;
  dword_60CBB9D8 = (int)"I_kinoko";
  dword_60CBB9DC = (int)&sead__SafeStringBase__vtable;
  dword_60CBB9E0 = (int)"I_fireflower";
  dword_60CBB9E4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBB9E8 = (int)"I_propeller";
  dword_60CBB9EC = (int)&sead__SafeStringBase__vtable;
  dword_60CBB9F0 = (int)"I_penguin";
  dword_60CBB9F4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBB9F8 = (int)"I_kinoko";
  dword_60CBB9FC = (int)&sead__SafeStringBase__vtable;
  dword_60CBBA00 = (int)"I_star";
  dword_60CBBA04 = (int)&sead__SafeStringBase__vtable;
  dword_60CBBA08 = (int)"I_iceflower";
  dword_60CBBA0C = (int)&sead__SafeStringBase__vtable;
  dword_60CBBA10 = (int)"I_yoshichibi_egg";
  dword_60CBBA14 = (int)&sead__SafeStringBase__vtable;
  dword_60CBBA18 = (int)"I_yoshichibi_egg";
  dword_60CBBA1C = (int)&sead__SafeStringBase__vtable;
  unk_60CBBA20 = "I_musasabi";
  unk_60CBBA24 = &sead__SafeStringBase__vtable;
  unk_60CBBA28 = "I_kinoko";
  dword_60CBBA2C = (int)&sead__SafeStringBase__vtable;
  dword_60CBBA30 = (int)"I_crown";
  sub_60000288();
  unk_60CBBA40 = &sead__SafeStringBase__vtable;
  unk_60CBBA44 = "I_kinoko";
  dword_60CBBA48 = (int)&sead__SafeStringBase__vtable;
  dword_60CBBA4C = (int)"I_fireflower";
  dword_60CBBA50 = (int)&sead__SafeStringBase__vtable;
  unk_60CBBA54 = "I_propeller_model";
  unk_60CBBA58 = &sead__SafeStringBase__vtable;
  unk_60CBBA5C = "I_penguin";
  dword_60CBBA60 = (int)&sead__SafeStringBase__vtable;
  dword_60CBBA64 = (int)"I_kinoko";
  dword_60CBBA68 = (int)&sead__SafeStringBase__vtable;
  dword_60CBBA6C = (int)"I_star";
  dword_60CBBA70 = (int)&sead__SafeStringBase__vtable;
  dword_60CBBA74 = (int)"I_iceflower";
  dword_60CBBA78 = (int)&sead__SafeStringBase__vtable;
  dword_60CBBA7C = (int)"I_yoshichibi_egg";
  dword_60CBBA80 = (int)&sead__SafeStringBase__vtable;
  dword_60CBBA84 = (int)"I_yoshichibi_egg";
  dword_60CBBA88 = (int)&sead__SafeStringBase__vtable;
  unk_60CBBA8C = "I_musasabi";
  unk_60CBBA90 = &sead__SafeStringBase__vtable;
  unk_60CBBA94 = "I_kinoko";
  dword_60CBBA98 = (int)&sead__SafeStringBase__vtable;
  dword_60CBBA9C = (int)"I_crown";
  return sub_60000288();
}
