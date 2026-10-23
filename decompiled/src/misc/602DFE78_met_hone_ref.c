/* met_hone_ref
 * address: 0x602DFE78   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *met_hone_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C91FB8 = 0;
  dword_60C91FBC = 0;
  dword_60C91FC0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC3E03;
  Profile__ctor(&stru_60C91EC0, Actor_honeBuzzy_2_build, 0x211u, &v1, 0, 34);
  dword_60C91EDC = CurrentStateID + 1;
  dword_60C91ED8 = (int)&off_60BE6D7C;
  dword_60C91EE0 = (int)sub_602DDCF4;
  dword_60C91EE4 = 0;
  dword_60C91EE8 = (int)&loc_602DDDC4;
  dword_60C91EEC = 0;
  dword_60C91EF0 = (int)nullsub_3285;
  dword_60C91EF4 = 0;
  dword_60C91EF8 = (int)&off_60BE6D7C;
  *(_DWORD *)algn_60C91EFC = CurrentStateID + 2;
  dword_60C91F00 = (int)sub_602DE0F8;
  dword_60C91F04 = 0;
  dword_60C91F08 = (int)sub_602DE104;
  dword_60C91F0C = 0;
  dword_60C91F10 = (int)nullsub_172;
  dword_60C91F14 = 0;
  stru_60C91F18.vtable = &off_60BE6D7C;
  stru_60C91F18.id = CurrentStateID + 3;
  dword_60C91F20 = (int)&loc_602DE198;
  dword_60C91F24 = 0;
  dword_60C91F28 = (int)&loc_602DE4EC;
  dword_60C91F2C = 0;
  dword_60C91F30 = (int)nullsub_3286;
  dword_60C91F34 = 0;
  dword_60C91F38 = (int)&off_60BE6D7C;
  *(_DWORD *)algn_60C91F3C = CurrentStateID + 4;
  dword_60C91F40 = (int)sub_602DE848;
  dword_60C91F44 = 0;
  dword_60C91F48 = (int)SE_EMY_KALON_REVIVAL_HEAD_ref;
  dword_60C91F4C = 0;
  dword_60C91F50 = (int)sub_602DEB80;
  dword_60C91F54 = 0;
  dword_60C91F58 = (int)&off_60BE6D7C;
  *(_DWORD *)algn_60C91F5C = CurrentStateID + 5;
  dword_60C91FA0[0] = (int)&sead__SafeStringBase__vtable;
  dword_60C91F60 = (int)sub_602DEBA4;
  dword_60C91F64 = 0;
  dword_60C91F68 = (int)sub_602DEC44;
  dword_60C91F6C = 0;
  dword_60C91F70 = (int)sub_602DECD4;
  dword_60C91F74 = 0;
  CurrentStateID += 6;
  dword_60C91F7C = CurrentStateID;
  dword_60C91F78 = (int)&off_60BE6D7C;
  dword_60C91F80 = (int)sub_602DED08;
  dword_60C91F84 = 0;
  dword_60C91F88 = (int)sub_602DED68;
  dword_60C91F8C = 0;
  dword_60C91F90 = (int)nullsub_3287;
  dword_60C91F94 = 0;
  unk_60C91FA4 = "met_hone";
  unk_60C91FA8 = &sead__SafeStringBase__vtable;
  dword_60C91FAC = (int)"met_hone_head";
  dword_60C91FB0 = (int)&sead__SafeStringBase__vtable;
  dword_60C91FB4 = (int)"met_hone_head";
  return "met_hone_head";
}
