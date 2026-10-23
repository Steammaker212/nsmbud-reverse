/* registerProfile_chochin_2750A0
 * address: 0x602750A0   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *registerProfile_chochin_2750A0()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C8EC38 = 0;
  dword_60C8EC3C = 0;
  dword_60C8EC40 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC2C95;
  Profile__ctor(&stru_60C8EB30, Actor_chochin_build, 0x22Au, &v1, &stru_60AFDC30, 16);
  dword_60C8EB4C = CurrentStateID + 1;
  dword_60C8EB48 = (int)&off_60BDCEAC;
  dword_60C8EB50 = (int)&loc_60273B30;
  dword_60C8EB54 = 0;
  dword_60C8EB58 = (int)sub_60273B70;
  dword_60C8EB5C = 0;
  dword_60C8EB60 = (int)nullsub_3125;
  dword_60C8EB64 = 0;
  dword_60C8EB68 = (int)&off_60BDCEAC;
  *(_DWORD *)algn_60C8EB6C = CurrentStateID + 2;
  dword_60C8EB70 = (int)&loc_60273C10;
  dword_60C8EB74 = 0;
  dword_60C8EB78 = (int)sub_60273C5C;
  dword_60C8EB7C = 0;
  dword_60C8EB80 = (int)nullsub_3126;
  dword_60C8EB84 = 0;
  dword_60C8EB88 = (int)&off_60BDCEAC;
  *(_DWORD *)algn_60C8EB8C = CurrentStateID + 3;
  dword_60C8EB90 = (int)sub_60273D94;
  dword_60C8EB94 = 0;
  dword_60C8EB98 = (int)&loc_60273DA4;
  dword_60C8EB9C = 0;
  dword_60C8EBA0 = (int)nullsub_3127;
  dword_60C8EBA4 = 0;
  dword_60C8EBA8 = (int)&off_60BDCEAC;
  *(_DWORD *)algn_60C8EBAC = CurrentStateID + 4;
  dword_60C8EBB0 = (int)nullsub_3128;
  dword_60C8EBB4 = 0;
  dword_60C8EBB8 = (int)nullsub_3129;
  dword_60C8EBBC = 0;
  dword_60C8EBC0 = (int)nullsub_3130;
  dword_60C8EBC4 = 0;
  CurrentStateID += 5;
  dword_60C8EBCC = CurrentStateID;
  dword_60C8EBD0 = 456;
  dword_60C8EBD4 = 1;
  dword_60C8EBD8 = 460;
  dword_60C8EBDC = 1;
  dword_60C8EBE0 = 464;
  dword_60C8EBE4 = 1;
  dword_60C8EBC8 = (int)&off_60BDCEC0;
  dword_60C8EBE8 = (int)&stru_60C90710;
  dword_60C8EC00[0] = 655360000;
  unk_60C8EC04 = -655360000;
  dword_60C8EC08 = &sead__SafeStringBase__vtable;
  dword_60C8EC0C = (int)"ankou";
  dword_60C8EC10 = (int)&sead__SafeStringBase__vtable;
  dword_60C8EC14 = (int)"ankou";
  dword_60C8EC18 = (int)&sead__SafeStringBase__vtable;
  dword_60C8EC1C = (int)"ankou_fog";
  dword_60C8EC20 = (int)&sead__SafeStringBase__vtable;
  dword_60C8EC24 = (int)"swim";
  dword_60C8EC28 = (int)&sead__SafeStringBase__vtable;
  dword_60C8EC2C = (int)"BGM_anim";
  dword_60C8EC30 = (int)&sead__SafeStringBase__vtable;
  dword_60C8EC34 = (int)"ankou_fog";
  return "ankou_fog";
}
