/* registerProfile_BillBlaster_ctor_32389C
 * address: 0x6032389C   size: 1260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_BillBlaster_ctor_32389C()
{
  sead__SafeString v0[5]; // [sp+10h] [bp-28h] BYREF

  dword_60C93B00 = 0;
  dword_60C93B04 = 0;
  dword_60C93B08 = 0;
  dword_60C93B0C = (int)&sead__SafeStringBase__vtable;
  dword_60C93B10 = (int)"killer_houdai_a";
  dword_60C93B14 = (int)&sead__SafeStringBase__vtable;
  dword_60C93B18 = (int)"killer_houdai_a";
  sub_60000288();
  dword_60C93B1C = (int)&sead__SafeStringBase__vtable;
  dword_60C93B20 = (int)"killer_houdai_b";
  dword_60C93B24 = (int)&sead__SafeStringBase__vtable;
  dword_60C93B28 = (int)"killer_houdai_b";
  sub_60000288();
  dword_60C93B2C = (int)&sead__SafeStringBase__vtable;
  dword_60C93B30 = (int)"killer_houdai_c";
  dword_60C93B34 = (int)&sead__SafeStringBase__vtable;
  dword_60C93B38 = (int)"killer_houdai_c";
  sub_60000288();
  dword_60C93B4C = (int)&sead__SafeStringBase__vtable;
  dword_60C93B50 = (int)"ef_killer_houdai_02";
  dword_60C93B54 = (int)&sead__SafeStringBase__vtable;
  dword_60C93B58 = (int)"ef_killer_houdai_01";
  dword_60C93B5C = (int)&sead__SafeStringBase__vtable;
  dword_60C93B60 = (int)"ef_killer_houdai_02";
  dword_60C93B64 = (int)&sead__SafeStringBase__vtable;
  dword_60C93B68 = (int)"ef_killer_houdai_01";
  sub_60000288();
  dword_60C93B3C = (int)&sead__SafeStringBase__vtable;
  dword_60C93B40 = (int)"ef_killer_mag_houdai_02";
  dword_60C93B44 = (int)&sead__SafeStringBase__vtable;
  dword_60C93B48 = (int)"ef_killer_mag_houdai_01";
  sub_60000288();
  dword_60C93B7C = 0;
  dword_60C93B78 = 0;
  dword_60C93B74 = 0;
  dword_60C93B70 = 0;
  dword_60C93B80 = -1040187392;
  dword_60C93B84 = 1117519872;
  dword_60C93B88 = 1107296256;
  dword_60C93B8C = 0;
  dword_60C93B90 = 0;
  dword_60C93988 = CurrentStateID + 1;
  dword_60C93984 = (int)&off_60BEB478;
  dword_60C9398C = (int)sub_60323E90;
  dword_60C93990 = 0;
  dword_60C93994 = (int)sub_60323EC4;
  dword_60C93998 = 0;
  dword_60C9399C = (int)nullsub_178;
  dword_60C939A0 = 0;
  unk_60C939A4 = &off_60BEB478;
  unk_60C939A8 = CurrentStateID + 2;
  CurrentStateID += 3;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  dword_60C939C8 = CurrentStateID;
  dword_60C939C4 = (int)&off_60BEB478;
  dword_60C939AC = (int)sub_60323F24;
  dword_60C939B0 = 0;
  dword_60C939CC = (int)nullsub_3345;
  dword_60C939D0 = 0;
  dword_60C939B4 = (int)sub_60323FA0;
  dword_60C939B8 = 0;
  dword_60C939D4 = (int)nullsub_3346;
  dword_60C939D8 = 0;
  dword_60C939BC = (int)nullsub_3344;
  dword_60C939C0 = 0;
  dword_60C939DC = (int)nullsub_3347;
  dword_60C939E0 = 0;
  v0[0].cstr = (char *)&unk_60AC47F1;
  Profile__ctor(&stru_60C939E4, BillBlaster_ctor, 0x65u, v0, &stru_60AFF730, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC4801;
  Profile__ctor(&stru_60C939FC, BillBlaster_ctor, 0x66u, v0, &stru_60AFF730, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC4817;
  Profile__ctor(&stru_60C93A14, BillBlaster_ctor, 0x67u, v0, &stru_60AFF754, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC4833;
  Profile__ctor(&stru_60C93A2C, BillBlaster_ctor, 0x68u, v0, &stru_60AFF754, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC485E;
  Profile__ctor(&stru_60C93A44, BillBlaster_ctor, 0x6Cu, v0, &stru_60AFF754, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC4881;
  Profile__ctor(&stru_60C93A5C, BillBlaster_ctor, 0x6Du, v0, &stru_60AFF754, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC48B3;
  Profile__ctor(&stru_60C93A74, BillBlaster_ctor, 0x69u, v0, &stru_60AFF730, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC48CC;
  Profile__ctor(&stru_60C93A8C, BillBlaster_ctor, 0x6Au, v0, &stru_60AFF754, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC48F1;
  Profile__ctor(&stru_60C93AA4, BillBlaster_ctor, 0x6Bu, v0, &stru_60AFF754, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC4925;
  Profile__ctor(&stru_60C93ABC, BillBlaster_ctor, 0x6Eu, v0, &stru_60AFF754, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC4951;
  Profile__ctor(&stru_60C93AD4, BillBlaster_ctor, 0x6Fu, v0, &stru_60AFF754, 2);
}
