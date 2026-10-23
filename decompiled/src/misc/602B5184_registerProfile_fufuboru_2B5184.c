/* registerProfile_fufuboru_2B5184
 * address: 0x602B5184   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_fufuboru_2B5184())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C90D4C = 0;
  dword_60C90D50 = 0;
  dword_60C90D54 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC390F;
  Profile__ctor(&stru_60C90D58, Actor_fufuboru_build, 0x1FFu, &v1, 0, 34);
  dword_60C90D74 = CurrentStateID + 1;
  dword_60C90D70 = (int)&off_60BE3B5C;
  dword_60C90D78 = (int)nullsub_3225;
  dword_60C90D7C = 0;
  dword_60C90D80 = (int)sub_602B2874;
  dword_60C90D84 = 0;
  dword_60C90D88 = (int)nullsub_3226;
  dword_60C90D8C = 0;
  dword_60C90D90 = (int)&off_60BE3B5C;
  *(_DWORD *)algn_60C90D94 = CurrentStateID + 2;
  dword_60C90D98 = (int)sub_602B28A0;
  dword_60C90D9C = 0;
  dword_60C90DA0 = (int)&loc_602B28F8;
  dword_60C90DA4 = 0;
  dword_60C90DA8 = (int)nullsub_3227;
  dword_60C90DAC = 0;
  dword_60C90DB0 = (int)&off_60BE3B5C;
  *(_DWORD *)algn_60C90DB4 = CurrentStateID + 3;
  dword_60C90DB8 = (int)sub_602B2F00;
  dword_60C90DBC = 0;
  dword_60C90DC0 = (int)&loc_602B2F3C;
  dword_60C90DC4 = 0;
  dword_60C90DC8 = (int)sub_602B3440;
  dword_60C90DCC = 0;
  dword_60C90DD0 = (int)&off_60BE3B5C;
  *(_DWORD *)algn_60C90DD4 = CurrentStateID + 4;
  dword_60C90DD8 = (int)sub_602B3450;
  dword_60C90DDC = 0;
  dword_60C90DE0 = (int)&loc_602B34F0;
  dword_60C90DE4 = 0;
  dword_60C90DE8 = (int)nullsub_3228;
  dword_60C90DEC = 0;
  dword_60C90DF0 = (int)&off_60BE3B5C;
  *(_DWORD *)algn_60C90DF4 = CurrentStateID + 5;
  dword_60C90DF8 = (int)sub_602B3758;
  dword_60C90DFC = 0;
  dword_60C90E00 = (int)&loc_602B378C;
  dword_60C90E04 = 0;
  dword_60C90E08 = (int)nullsub_3229;
  dword_60C90E0C = 0;
  dword_60C90E10 = (int)&off_60BE3B5C;
  *(_DWORD *)algn_60C90E14 = CurrentStateID + 6;
  dword_60C90E18 = (int)sub_602B3CD8;
  dword_60C90E1C = 0;
  dword_60C90E20 = (int)&loc_602B3D24;
  dword_60C90E24 = 0;
  dword_60C90E28 = (int)nullsub_3230;
  dword_60C90E2C = 0;
  CurrentStateID += 7;
  dword_60C90E34 = CurrentStateID;
  dword_60C90E30 = (int)&off_60BE3B5C;
  dword_60C90E38 = (int)sub_602B3DF4;
  dword_60C90E3C = 0;
  dword_60C90E40 = (int)nullsub_3231;
  dword_60C90E44 = 0;
  dword_60C90E48 = (int)nullsub_3232;
  dword_60C90E4C = 0;
  return nullsub_3232;
}
