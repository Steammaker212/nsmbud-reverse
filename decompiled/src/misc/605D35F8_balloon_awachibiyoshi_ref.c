/* balloon_awachibiyoshi_ref
 * address: 0x605D35F8   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *balloon_awachibiyoshi_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CB1380 = 0;
  dword_60CB1384 = 0;
  dword_60CB1388 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "チビヨッシー(泡)の泡";
  Profile__ctor(&stru_60CB1210, Actor_chibiyoshi_2_build, 0x1C3u, &v1, 0, 34);
  dword_60CB122C = CurrentStateID + 1;
  dword_60CB1228 = (int)&off_60C0B170;
  dword_60CB1230 = (int)sub_605D29F8;
  dword_60CB1234 = 0;
  dword_60CB1238 = (int)&loc_605D2A1C;
  dword_60CB123C = 0;
  dword_60CB1240 = (int)sub_605D2D70;
  dword_60CB1244 = 0;
  dword_60CB1248 = (int)&off_60C0B170;
  *(_DWORD *)algn_60CB124C = CurrentStateID + 2;
  dword_60CB1250 = (int)SE_PLY_CH_YOSHI_BBL_CATCH_ref;
  dword_60CB1254 = 0;
  dword_60CB1258 = (int)&loc_605D2E34;
  dword_60CB125C = 0;
  dword_60CB1260 = (int)nullsub_4777;
  dword_60CB1264 = 0;
  dword_60CB1268 = (int)&off_60C0B170;
  *(_DWORD *)algn_60CB126C = CurrentStateID + 3;
  dword_60CB1270 = (int)sub_605D335C;
  dword_60CB1274 = 0;
  dword_60CB1278 = (int)&loc_605D33D0;
  dword_60CB127C = 0;
  dword_60CB1280 = (int)nullsub_4778;
  dword_60CB1284 = 0;
  unk_60CB1288 = &off_60C0B170;
  unk_60CB128C = CurrentStateID + 4;
  dword_60CB1360 = (int)&sead__SafeStringBase__vtable;
  dword_60CB1290 = (int)sub_605D3530;
  dword_60CB1294 = 0;
  dword_60CB1298 = (int)nullsub_4779;
  dword_60CB129C = 0;
  dword_60CB12A0 = (int)nullsub_4780;
  dword_60CB12A4 = 0;
  CurrentStateID += 5;
  dword_60CB12AC = CurrentStateID;
  dword_60CB12A8 = (int)&off_60C0B170;
  dword_60CB12B0 = (int)sub_605D3590;
  dword_60CB12B4 = 0;
  dword_60CB12B8 = (int)sub_605D35AC;
  dword_60CB12BC = 0;
  dword_60CB12C0 = (int)nullsub_4781;
  dword_60CB12C4 = 0;
  unk_60CB1364 = "balloon_awachibiyoshi";
  unk_60CB1368 = &sead__SafeStringBase__vtable;
  dword_60CB136C = (int)"balloon_awachibiyoshi";
  dword_60CB138C = (int)&sead__SafeStringBase__vtable;
  dword_60CB1390 = (int)"float";
  dword_60CB1394 = (int)&sead__SafeStringBase__vtable;
  dword_60CB1398 = (int)"vibrate";
  sub_60000288();
  dword_60CB1370 = 1098907648;
  dword_60CB1374 = 1098907648;
  dword_60CB12C8 = (int)&sead__SafeStringBase__vtable;
  unk_60CB12CC = "obj_coin";
  unk_60CB12D0 = &sead__SafeStringBase__vtable;
  dword_60CB12D4 = (int)"obj_coin";
  dword_60CB12D8 = (int)&sead__SafeStringBase__vtable;
  dword_60CB12DC = (int)&byte_60ABC94D;
  dword_60CB12E0 = (int)&sead__SafeStringBase__vtable;
  dword_60CB12E4 = (int)"I_kinoko";
  dword_60CB12E8 = (int)&sead__SafeStringBase__vtable;
  dword_60CB12EC = (int)"I_kinoko";
  dword_60CB12F0 = (int)&sead__SafeStringBase__vtable;
  dword_60CB12F4 = (int)"wait";
  dword_60CB12F8 = (int)&sead__SafeStringBase__vtable;
  dword_60CB12FC = (int)"I_fireflower";
  dword_60CB1300 = (int)&sead__SafeStringBase__vtable;
  dword_60CB1304 = (int)"I_fireflower";
  dword_60CB1308 = (int)&sead__SafeStringBase__vtable;
  dword_60CB130C = (int)"wait";
  dword_60CB1310 = (int)&sead__SafeStringBase__vtable;
  dword_60CB1314 = (int)"I_iceflower";
  dword_60CB1318 = (int)&sead__SafeStringBase__vtable;
  dword_60CB131C = (int)"I_iceflower";
  dword_60CB1320 = (int)&sead__SafeStringBase__vtable;
  dword_60CB1324 = (int)"wait";
  dword_60CB1328 = (int)&sead__SafeStringBase__vtable;
  dword_60CB132C = (int)"I_kinoko";
  dword_60CB1330 = (int)&sead__SafeStringBase__vtable;
  dword_60CB1334 = (int)"I_kinoko";
  dword_60CB1338 = (int)&sead__SafeStringBase__vtable;
  dword_60CB133C = (int)"wait";
  dword_60CB1340 = (int)&sead__SafeStringBase__vtable;
  dword_60CB1344 = (int)"I_musasabi";
  dword_60CB1348 = (int)&sead__SafeStringBase__vtable;
  dword_60CB134C = (int)"I_musasabi";
  dword_60CB1350 = (int)&sead__SafeStringBase__vtable;
  dword_60CB1354 = (int)"wait";
  sub_60000288();
  dword_60CB1378 = (int)&sead__SafeStringBase__vtable;
  dword_60CB137C = (int)"I_kinoko_switch";
  return "I_kinoko_switch";
}
