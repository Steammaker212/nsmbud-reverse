/* registerProfile_kurasha_2863FC
 * address: 0x602863FC   size: 1120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

State *registerProfile_kurasha_2863FC()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C8F180 = 0;
  dword_60C8F184 = 0;
  dword_60C8F188 = 0;
  dword_60C8F18C = (int)&sead__SafeStringBase__vtable;
  unk_60C8F190 = "walk";
  unk_60C8F194 = &sead__SafeStringBase__vtable;
  dword_60C8F198 = (int)"wait";
  dword_60C8F19C = (int)&sead__SafeStringBase__vtable;
  dword_60C8F1A0 = (int)"run";
  dword_60C8F1A4 = (int)&sead__SafeStringBase__vtable;
  dword_60C8F1A8 = (int)"damage";
  dword_60C8F1AC = (int)&sead__SafeStringBase__vtable;
  dword_60C8F1B0 = (int)"dead";
  sub_60000288();
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC2EB1;
  Profile__ctor(&stru_60C8F1B4, Actor_kurasha_build, 0x293u, &v1, &stru_60AFDEB4, 18);
  dword_60C8F1D0 = CurrentStateID + 1;
  dword_60C8F1CC = (int)&off_60BDE338;
  dword_60C8F1D4 = (int)sub_60286AA8;
  dword_60C8F1D8 = 0;
  dword_60C8F1DC = (int)&loc_60286BA4;
  dword_60C8F1E0 = 0;
  dword_60C8F1E4 = (int)nullsub_3152;
  dword_60C8F1E8 = 0;
  dword_60C8F1EC = (int)&off_60BDE338;
  unk_60C8F1F0 = CurrentStateID + 2;
  dword_60C8F1F4 = (int)nullsub_3153;
  dword_60C8F1F8 = 0;
  dword_60C8F1FC = (int)nullsub_3154;
  dword_60C8F200 = 0;
  dword_60C8F204 = (int)nullsub_3155;
  dword_60C8F208 = 0;
  dword_60C8F20C = (int)&off_60BDE338;
  unk_60C8F210 = CurrentStateID + 3;
  dword_60C8F214 = (int)sub_60286EB0;
  dword_60C8F218 = 0;
  dword_60C8F21C = (int)sub_60286F58;
  dword_60C8F220 = 0;
  dword_60C8F224 = (int)nullsub_3156;
  dword_60C8F228 = 0;
  dword_60C8F22C = (int)&off_60BDE338;
  unk_60C8F230 = CurrentStateID + 4;
  dword_60C8F234 = (int)sub_602870B8;
  dword_60C8F238 = 0;
  dword_60C8F23C = (int)SE_EMY_CRASHER_PUNCH_ref;
  dword_60C8F240 = 0;
  dword_60C8F244 = (int)sub_602873BC;
  dword_60C8F248 = 0;
  dword_60C8F24C = (int)&off_60BDE338;
  unk_60C8F250 = CurrentStateID + 5;
  dword_60C8F254 = (int)sub_602873F0;
  dword_60C8F258 = 0;
  dword_60C8F25C = (int)SE_EMY_CRASHER_PUNCH_ref_2;
  dword_60C8F260 = 0;
  dword_60C8F264 = (int)sub_60287B30;
  dword_60C8F268 = 0;
  dword_60C8F26C = (int)&off_60BDE338;
  unk_60C8F270 = CurrentStateID + 6;
  dword_60C8F274 = (int)nullsub_166;
  dword_60C8F278 = 0;
  dword_60C8F27C = (int)nullsub_167;
  dword_60C8F280 = 0;
  dword_60C8F284 = (int)nullsub_168;
  dword_60C8F288 = 0;
  dword_60C8F28C = (int)&off_60BDE338;
  unk_60C8F290 = CurrentStateID + 7;
  dword_60C8F294 = (int)sub_60287B94;
  dword_60C8F298 = 0;
  dword_60C8F29C = (int)sub_60287C90;
  dword_60C8F2A0 = 0;
  dword_60C8F2A4 = (int)nullsub_3157;
  dword_60C8F2A8 = 0;
  dword_60C8F2AC = (int)&off_60BDE338;
  unk_60C8F2B0 = CurrentStateID + 8;
  dword_60C8F2B4 = (int)sub_60287D7C;
  dword_60C8F2B8 = 0;
  dword_60C8F2BC = (int)sub_60287E74;
  dword_60C8F2C0 = 0;
  dword_60C8F2C4 = (int)sub_60288250;
  dword_60C8F2C8 = 0;
  dword_60C8F2CC = (int)&off_60BDE338;
  unk_60C8F2D0 = CurrentStateID + 9;
  dword_60C8F2D4 = (int)sub_60288260;
  dword_60C8F2D8 = 0;
  dword_60C8F2DC = (int)sub_602883A8;
  dword_60C8F2E0 = 0;
  dword_60C8F2E4 = (int)sub_60288668;
  dword_60C8F2E8 = 0;
  unk_60C8F2EC = &off_60BDE338;
  unk_60C8F2F0 = CurrentStateID + 10;
  dword_60C8F2F4 = (int)sub_60288718;
  dword_60C8F2F8 = 0;
  dword_60C8F2FC = (int)sub_6028882C;
  dword_60C8F300 = 0;
  dword_60C8F304 = (int)nullsub_3158;
  dword_60C8F308 = 0;
  dword_60C8F310 = CurrentStateID + 11;
  dword_60C8F314 = 624;
  dword_60C8F318 = 1;
  dword_60C8F31C = 628;
  dword_60C8F320 = 1;
  dword_60C8F324 = 632;
  dword_60C8F328 = 1;
  dword_60C8F30C = (int)&off_60BDE34C;
  dword_60C8F32C = (int)&NullState;
  dword_60C8F338 = 456;
  dword_60C8F33C = 1;
  dword_60C8F340 = 460;
  dword_60C8F344 = 1;
  dword_60C8F348 = 464;
  dword_60C8F34C = 1;
  unk_60C8F330 = &off_60BDE34C;
  unk_60C8F334 = CurrentStateID + 12;
  dword_60C8F350 = (int)&stru_60C90710;
  CurrentStateID += 13;
  *(_DWORD *)algn_60C8F358 = CurrentStateID;
  *(_DWORD *)&algn_60C8F358[4] = 444;
  dword_60C8F360 = 1;
  dword_60C8F364 = 448;
  dword_60C8F368 = 1;
  dword_60C8F36C = 452;
  dword_60C8F370 = 1;
  dword_60C8F354 = (int)&off_60BDE34C;
  dword_60C8F374 = (int)&stru_60C906EC;
  return &stru_60C906EC;
}
