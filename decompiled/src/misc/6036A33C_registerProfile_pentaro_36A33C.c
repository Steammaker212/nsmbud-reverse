/* registerProfile_pentaro_36A33C
 * address: 0x6036A33C   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float registerProfile_pentaro_36A33C()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C95E30 = 0;
  dword_60C95E34 = 0;
  dword_60C95E38 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC527A;
  Profile__ctor(&stru_60C95CE0, Actor_pentaro_build, 0x20Du, &v1, &stru_60B002FC, 18);
  dword_60C95CFC = CurrentStateID + 1;
  dword_60C95CF8 = (int)&off_60BF03D0;
  dword_60C95D00 = (int)sub_60367780;
  dword_60C95D04 = 0;
  dword_60C95D08 = (int)sub_6036778C;
  dword_60C95D0C = 0;
  dword_60C95D10 = (int)sub_60367858;
  dword_60C95D14 = 0;
  unk_60C95D18 = &off_60BF03D0;
  unk_60C95D1C = CurrentStateID + 2;
  dword_60C95D20 = (int)sub_60367864;
  dword_60C95D24 = 0;
  dword_60C95D28 = (int)sub_60367A24;
  dword_60C95D2C = 0;
  dword_60C95D30 = (int)sub_60367A78;
  dword_60C95D34 = 0;
  dword_60C95D38 = (int)&off_60BF03D0;
  *(_DWORD *)algn_60C95D3C = CurrentStateID + 3;
  dword_60C95D40 = (int)sub_60367AC8;
  dword_60C95D44 = 0;
  dword_60C95D48 = (int)&loc_60367C64;
  dword_60C95D4C = 0;
  dword_60C95D50 = (int)sub_60368520;
  dword_60C95D54 = 0;
  dword_60C95D58 = (int)&off_60BF03D0;
  *(_DWORD *)algn_60C95D5C = CurrentStateID + 4;
  dword_60C95D60 = (int)sub_60368538;
  dword_60C95D64 = 0;
  dword_60C95D68 = (int)SE_EMY_PENGUIN_PIYO_ref;
  dword_60C95D6C = 0;
  dword_60C95D70 = (int)nullsub_3427;
  dword_60C95D74 = 0;
  dword_60C95D78 = (int)&off_60BF03D0;
  *(_DWORD *)algn_60C95D7C = CurrentStateID + 5;
  dword_60C95D80 = (int)sub_603688D0;
  dword_60C95D84 = 0;
  dword_60C95D88 = (int)sub_60368A64;
  dword_60C95D8C = 0;
  dword_60C95D90 = (int)nullsub_3428;
  dword_60C95D94 = 0;
  dword_60C95D9C = CurrentStateID + 6;
  dword_60C95DA0 = 612;
  dword_60C95DA4 = 1;
  dword_60C95DA8 = 616;
  dword_60C95DAC = 1;
  dword_60C95DB0 = 620;
  dword_60C95DB4 = 1;
  dword_60C95D98 = (int)&off_60BF03E4;
  dword_60C95DB8 = (int)&Enemy_StateId_Frozen;
  dword_60C95DC4 = 444;
  dword_60C95DC8 = 1;
  dword_60C95DCC = 448;
  dword_60C95DD0 = 1;
  dword_60C95DD4 = 452;
  dword_60C95DD8 = 1;
  unk_60C95DBC = &off_60BF03E4;
  unk_60C95DC0 = CurrentStateID + 7;
  dword_60C95DDC = (int)&stru_60C906EC;
  CurrentStateID += 8;
  unk_60C95DE4 = CurrentStateID;
  unk_60C95DE8 = 456;
  dword_60C95DEC = 1;
  dword_60C95DF0 = 460;
  dword_60C95DF4 = 1;
  dword_60C95DF8 = 464;
  dword_60C95DFC = 1;
  dword_60C95DE0 = (int)&off_60BF03E4;
  dword_60C95E00 = (int)&stru_60C90710;
  *(_QWORD *)algn_60C95E28 = 0xC000000040000000LL;
  *(float *)&dword_60C95E24 = -0.1875 * 0.5;
  return -0.1875 * 0.5;
}
