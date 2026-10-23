/* registerProfile_CSbone_kosuta_19B904
 * address: 0x6019B904   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_CSbone_kosuta_19B904()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C89DE8 = 0;
  dword_60C89DEC = 0;
  dword_60C89DF0 = 0;
  dword_60C89DC8 = (int)&sead__SafeStringBase__vtable;
  dword_60C89DCC = (int)"K25d";
  dword_60C89DD0 = (int)&sead__SafeStringBase__vtable;
  dword_60C89DD4 = (int)"K24a";
  dword_60C89DD8 = (int)&sead__SafeStringBase__vtable;
  dword_60C89DDC = (int)"W4J1";
  dword_60C89DE0 = (int)&sead__SafeStringBase__vtable;
  dword_60C89DE4 = (int)"W6J1";
  dword_60C89D24 = (int)&sead__SafeStringBase__vtable;
  *(_DWORD *)algn_60C89D28 = "normal";
  *(_DWORD *)&algn_60C89D28[4] = &sead__SafeStringBase__vtable;
  dword_60C89D30 = (int)"normal_head";
  dword_60C89D34 = (int)&sead__SafeStringBase__vtable;
  dword_60C89D38 = (int)"shock_head";
  sub_60000288();
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABFAC5;
  Profile__ctor(&stru_60C89D3C, Actor_CSbone_kosuta_build, 0x389u, &v2, 0, 0);
  *v0 = &off_60BD5DB0;
  dword_60C89D58 = CurrentStateID + 1;
  dword_60C89D54 = (int)&off_60BD5E1C;
  dword_60C89D5C = (int)nullsub_2910;
  dword_60C89D60 = 0;
  dword_60C89D64 = (int)sub_6019BD04;
  dword_60C89D68 = 0;
  dword_60C89D6C = (int)nullsub_2911;
  dword_60C89D70 = 0;
  unk_60C89D74 = &off_60BD5E1C;
  unk_60C89D78 = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60C89D98 = CurrentStateID;
  dword_60C89D7C = (int)lift_torokkoA2_ref;
  dword_60C89D94 = (int)&off_60BD5E1C;
  dword_60C89D80 = 0;
  dword_60C89D9C = (int)nullsub_2912;
  dword_60C89D84 = (int)sub_6019BF20;
  dword_60C89DA0 = 0;
  dword_60C89D88 = 0;
  dword_60C89DA4 = (int)sub_6019C9BC;
  dword_60C89D8C = (int)lift_torokkoA2_ref_19C8BC;
  dword_60C89D90 = 0;
  dword_60C89DA8 = 0;
  dword_60C89DAC = (int)nullsub_2913;
  dword_60C89DB0 = 0;
  return &dword_60C89D94;
}
