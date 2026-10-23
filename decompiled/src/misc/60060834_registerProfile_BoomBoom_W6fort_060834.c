/* registerProfile_BoomBoom_W6fort_060834
 * address: 0x60060834   size: 1416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_BoomBoom_W6fort_060834()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C80F44 = 0;
  dword_60C80F48 = 0;
  dword_60C80F4C = 0;
  unk_60C80F00 = (int)(float)((float)(2147500000.0 * 30.0) / 180.0);
  unk_60C80F04 = (int)(float)((float)(2147500000.0 * 30.0) / 180.0);
  unk_60C80F08 = (int)(float)((float)(2147500000.0 * 13.0) / 180.0);
  dword_60C80F0C = (int)(float)((float)(2147500000.0 * 20.0) / 180.0);
  dword_60C80F10 = (int)(float)((float)(2147500000.0 * -15.0) / 180.0);
  *(_DWORD *)algn_60C80F14 = (int)(float)((float)(2147500000.0 * 0.4) / 180.0);
  *(_DWORD *)&algn_60C80F14[4] = (int)(float)((float)(2147500000.0 * 1.2) / 180.0);
  *(_DWORD *)&algn_60C80F14[8] = (int)(float)((float)(2147500000.0 * 0.8) / 180.0);
  dword_60C80F20 = (int)(float)((float)(2147500000.0 * 0.8) / 180.0);
  dword_60C80F24 = (int)(float)((float)(2147500000.0 * 2.4) / 180.0);
  dword_60C80F28 = (int)(float)((float)(2147500000.0 * 1.6) / 180.0);
  dword_60C80F2C = -1084975012;
  dword_60C80F40 = 1096933858;
  dword_60C80F30 = (int)(float)((float)(2147500000.0 * -25.714) / 180.0);
  dword_60C80F34 = (int)(float)((float)(2147500000.0 * 5.0) / 180.0);
  dword_60C80F38 = (int)(float)((float)(2147500000.0 * 5.0) / 180.0);
  *(_DWORD *)algn_60C80F3C = (int)(float)((float)(2147500000.0 * 0.8) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABB66C;
  Profile__ctor(&stru_60C80D0C, Actor_BoomBoom_W6fort_build, 0x2ACu, &v2, &stru_60AF53BC, 0);
  *v0 = &off_60BC56A8;
  dword_60C80D28 = CurrentStateID + 1;
  dword_60C80D2C = 1024;
  dword_60C80D30 = 1;
  dword_60C80D34 = 1028;
  dword_60C80D38 = 1;
  dword_60C80D3C = 1032;
  dword_60C80D40 = 1;
  dword_60C80D24 = (int)&off_60BC5B80;
  dword_60C80D44 = (int)&dword_60C805C8;
  unk_60C80D4C = CurrentStateID + 2;
  unk_60C80D50 = 1036;
  dword_60C80D54 = 1;
  dword_60C80D58 = 1040;
  dword_60C80D5C = 1;
  dword_60C80D60 = 1044;
  dword_60C80D64 = 1;
  dword_60C80D48 = (int)&off_60BC5B80;
  dword_60C80D68 = (int)&dword_60C8060C;
  unk_60C80D70 = CurrentStateID + 3;
  unk_60C80D74 = 1048;
  dword_60C80D78 = 1;
  dword_60C80D7C = 1052;
  dword_60C80D80 = 1;
  dword_60C80D84 = 1056;
  dword_60C80D88 = 1;
  dword_60C80D6C = (int)&off_60BC5B80;
  dword_60C80D8C = (int)&dword_60C80630;
  dword_60C80D94 = CurrentStateID + 4;
  dword_60C80D90 = (int)&off_60BC5B94;
  dword_60C80D98 = (int)sub_6005BA70;
  dword_60C80D9C = 0;
  dword_60C80DA0 = (int)sub_6005BC84;
  dword_60C80DA4 = 0;
  dword_60C80DA8 = (int)nullsub_2545;
  dword_60C80DAC = 0;
  unk_60C80DB0 = &off_60BC5B94;
  unk_60C80DB4 = CurrentStateID + 5;
  dword_60C80DB8 = (int)sub_6005BE1C;
  dword_60C80DBC = 0;
  dword_60C80DC0 = (int)&loc_6005BFC4;
  dword_60C80DC4 = 0;
  dword_60C80DC8 = (int)nullsub_2546;
  dword_60C80DCC = 0;
  dword_60C80DD0 = (int)&off_60BC5B94;
  *(_DWORD *)algn_60C80DD4 = CurrentStateID + 6;
  dword_60C80DD8 = (int)sub_6005C11C;
  dword_60C80DDC = 0;
  dword_60C80DE0 = (int)&loc_6005C340;
  dword_60C80DE4 = 0;
  dword_60C80DE8 = (int)nullsub_2547;
  dword_60C80DEC = 0;
  unk_60C80DF0 = &off_60BC5B94;
  unk_60C80DF4 = CurrentStateID + 7;
  dword_60C80DF8 = (int)&loc_6005C724;
  dword_60C80DFC = 0;
  dword_60C80E00 = (int)&loc_6005C8D8;
  dword_60C80E04 = 0;
  dword_60C80E08 = (int)nullsub_2548;
  dword_60C80E0C = 0;
  unk_60C80E10 = &off_60BC5B94;
  unk_60C80E14 = CurrentStateID + 8;
  dword_60C80E18 = (int)&loc_6005CAEC;
  dword_60C80E1C = 0;
  dword_60C80E20 = (int)&loc_6005CEB4;
  dword_60C80E24 = 0;
  dword_60C80E28 = (int)nullsub_2549;
  dword_60C80E2C = 0;
  unk_60C80E30 = &off_60BC5B94;
  unk_60C80E34 = CurrentStateID + 9;
  dword_60C80E38 = (int)SE_EMY_BUNBUN_FLYING_FAST_ref;
  dword_60C80E3C = 0;
  dword_60C80E40 = (int)&loc_6005D150;
  dword_60C80E44 = 0;
  dword_60C80E48 = (int)nullsub_2550;
  dword_60C80E4C = 0;
  dword_60C80E50 = (int)&off_60BC5B94;
  *(_DWORD *)algn_60C80E54 = CurrentStateID + 10;
  dword_60C80E58 = (int)sub_6005D4A4;
  dword_60C80E5C = 0;
  dword_60C80E60 = (int)&loc_6005D69C;
  dword_60C80E64 = 0;
  dword_60C80E68 = (int)nullsub_2551;
  dword_60C80E6C = 0;
  unk_60C80E70 = &off_60BC5B94;
  unk_60C80E74 = CurrentStateID + 11;
  dword_60C80E78 = (int)sub_6005D90C;
  dword_60C80E7C = 0;
  dword_60C80E80 = (int)&loc_6005DB78;
  dword_60C80E84 = 0;
  dword_60C80E88 = (int)nullsub_2552;
  dword_60C80E8C = 0;
  dword_60C80E90 = (int)&off_60BC5B94;
  *(_DWORD *)algn_60C80E94 = CurrentStateID + 12;
  dword_60C80E98 = (int)&loc_6005E060;
  dword_60C80E9C = 0;
  dword_60C80EA0 = (int)&loc_6005E160;
  dword_60C80EA4 = 0;
  dword_60C80EA8 = (int)nullsub_2553;
  dword_60C80EAC = 0;
  unk_60C80EB4 = CurrentStateID + 13;
  unk_60C80EB8 = 1072;
  dword_60C80EBC = 1;
  dword_60C80EC0 = 1076;
  dword_60C80EC4 = 1;
  dword_60C80EC8 = 1080;
  dword_60C80ECC = 1;
  dword_60C80EB0 = (int)&off_60BC5B80;
  dword_60C80ED0 = (int)&dword_60C806D8;
  CurrentStateID += 14;
  *(_DWORD *)algn_60C80ED8 = CurrentStateID;
  *(_DWORD *)&algn_60C80ED8[4] = 1084;
  dword_60C80EE0 = 1;
  dword_60C80EE4 = 1088;
  dword_60C80EE8 = 1;
  dword_60C80EEC = 1092;
  dword_60C80EF0 = 1;
  dword_60C80ED4 = (int)&off_60BC5B80;
  dword_60C80EF4 = (int)&dword_60C8075C;
  return &dword_60C8075C;
}
