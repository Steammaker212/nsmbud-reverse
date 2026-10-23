/* ItemNameTable_init
 * address: 0x6045CC68   size: 620   group: items
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int ItemNameTable_init()
{
  sead__SafeString v1; // [sp+14h] [bp-2Ch] BYREF

  dword_60C9D030 = 0;
  dword_60C9D034 = 0;
  dword_60C9D038 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC97FF;
  Profile__ctor(&stru_60C9CFCC, Actor_Battle_for_Item_build, 0x32Au, &v1, &stru_60B02558, 36);
  dword_60C9D03C = (int)&sead__SafeStringBase__vtable;
  dword_60C9CFE8 = CurrentStateID + 1;
  dword_60C9CFE4 = (int)&off_60BFB2FC;
  dword_60C9CFEC = (int)sub_6045C47C;
  dword_60C9CFF0 = 0;
  dword_60C9CFF4 = (int)sub_6045C544;
  dword_60C9CFF8 = 0;
  dword_60C9CFFC = (int)nullsub_3690;
  dword_60C9D000 = 0;
  CurrentStateID += 2;
  dword_60C9D008 = CurrentStateID;
  dword_60C9D004 = (int)&off_60BFB2FC;
  dword_60C9D00C = (int)sub_6045C5A8;
  dword_60C9D010 = 0;
  dword_60C9D014 = (int)sub_6045C65C;
  dword_60C9D018 = 0;
  dword_60C9D01C = (int)nullsub_3691;
  dword_60C9D020 = 0;
  dword_60C9D040 = (int)"I_kinoko";
  dword_60C9D044 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D048 = (int)"I_fireflower";
  dword_60C9D04C = (int)&sead__SafeStringBase__vtable;
  dword_60C9D050 = (int)"I_propeller";
  dword_60C9D054 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D058 = (int)"I_penguin";
  dword_60C9D05C = (int)&sead__SafeStringBase__vtable;
  dword_60C9D060 = (int)"I_kinoko";
  dword_60C9D064 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D068 = (int)"I_star";
  dword_60C9D06C = (int)&sead__SafeStringBase__vtable;
  dword_60C9D070 = (int)"I_iceflower";
  dword_60C9D074 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D078 = (int)"I_yoshichibi_egg";
  dword_60C9D07C = (int)&sead__SafeStringBase__vtable;
  dword_60C9D080 = (int)"I_yoshichibi_egg";
  dword_60C9D084 = (int)&sead__SafeStringBase__vtable;
  unk_60C9D088 = "I_musasabi";
  unk_60C9D08C = &sead__SafeStringBase__vtable;
  unk_60C9D090 = "I_kinoko";
  dword_60C9D094 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D098 = (int)"I_crown";
  sub_60000288();
  unk_60C9D0A0 = &sead__SafeStringBase__vtable;
  unk_60C9D0A4 = "I_kinoko";
  dword_60C9D0A8 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D0AC = (int)"I_fireflower";
  dword_60C9D0B0 = (int)&sead__SafeStringBase__vtable;
  unk_60C9D0B4 = "I_propeller_model";
  unk_60C9D0B8 = &sead__SafeStringBase__vtable;
  unk_60C9D0BC = "I_penguin";
  dword_60C9D0C0 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D0C4 = (int)"I_kinoko";
  dword_60C9D0C8 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D0CC = (int)"I_star";
  dword_60C9D0D0 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D0D4 = (int)"I_iceflower";
  dword_60C9D0D8 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D0DC = (int)"I_yoshichibi_egg";
  dword_60C9D0E0 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D0E4 = (int)"I_yoshichibi_egg";
  dword_60C9D0E8 = (int)&sead__SafeStringBase__vtable;
  unk_60C9D0EC = "I_musasabi";
  unk_60C9D0F0 = &sead__SafeStringBase__vtable;
  unk_60C9D0F4 = "I_kinoko";
  dword_60C9D0F8 = (int)&sead__SafeStringBase__vtable;
  dword_60C9D0FC = (int)"I_crown";
  return sub_60000288();
}
