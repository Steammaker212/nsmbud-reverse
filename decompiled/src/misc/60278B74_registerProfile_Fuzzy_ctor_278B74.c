/* registerProfile_Fuzzy_ctor_278B74
 * address: 0x60278B74   size: 896   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Fuzzy_ctor_278B74())()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C8EC44 = 0;
  dword_60C8EC48 = 0;
  dword_60C8EC4C = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC2CB8;
  Profile__ctor(&stru_60C8EC50, Fuzzy_ctor, 0x28Du, v1, &stru_60AFDC60, 18);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC2CC8;
  Profile__ctor(&stru_60C8EC68, Fuzzy_ctor, 0x28Eu, v1, &stru_60AFDC84, 18);
  dword_60C8EC84 = CurrentStateID + 1;
  dword_60C8EC80 = (int)&off_60BDD1D8;
  dword_60C8EC88 = (int)sub_602755A0;
  dword_60C8EC8C = 0;
  dword_60C8EC90 = (int)sub_602755B0;
  dword_60C8EC94 = 0;
  dword_60C8EC98 = (int)nullsub_3131;
  dword_60C8EC9C = 0;
  dword_60C8ECA0 = (int)&off_60BDD1D8;
  *(_DWORD *)algn_60C8ECA4 = CurrentStateID + 2;
  dword_60C8ECA8 = (int)sub_60275818;
  dword_60C8ECAC = 0;
  dword_60C8ECB0 = (int)sub_60275A48;
  dword_60C8ECB4 = 0;
  dword_60C8ECB8 = (int)nullsub_3132;
  dword_60C8ECBC = 0;
  dword_60C8ECC0 = (int)&off_60BDD1D8;
  *(_DWORD *)algn_60C8ECC4 = CurrentStateID + 3;
  dword_60C8ECC8 = (int)sub_60275CB8;
  dword_60C8ECCC = 0;
  dword_60C8ECD0 = (int)sub_60275CBC;
  dword_60C8ECD4 = 0;
  dword_60C8ECD8 = (int)nullsub_3133;
  dword_60C8ECDC = 0;
  dword_60C8ECE4 = CurrentStateID + 4;
  dword_60C8ECE8 = 456;
  dword_60C8ECEC = 1;
  dword_60C8ECF0 = 460;
  dword_60C8ECF4 = 1;
  dword_60C8ECF8 = 464;
  dword_60C8ECFC = 1;
  dword_60C8ECE0 = (int)&off_60BDD1EC;
  dword_60C8ED00 = (int)&stru_60C90710;
  dword_60C8ED0C = 528;
  dword_60C8ED10 = 1;
  dword_60C8ED14 = 532;
  dword_60C8ED18 = 1;
  dword_60C8ED1C = 536;
  dword_60C8ED20 = 1;
  dword_60C8ED04 = (int)&off_60BDD1EC;
  unk_60C8ED08 = CurrentStateID + 5;
  dword_60C8ED24 = (int)&stru_60C908E4;
  dword_60C8ED30 = 564;
  dword_60C8ED34 = 1;
  dword_60C8ED38 = 568;
  dword_60C8ED3C = 1;
  dword_60C8ED40 = 572;
  dword_60C8ED44 = 1;
  dword_60C8ED28 = (int)&off_60BDD1EC;
  *(_DWORD *)algn_60C8ED2C = CurrentStateID + 6;
  dword_60C8ED48 = (int)&stru_60C90950;
  dword_60C8ED54 = 612;
  dword_60C8ED58 = 1;
  dword_60C8ED5C = 616;
  dword_60C8ED60 = 1;
  dword_60C8ED64 = 620;
  dword_60C8ED68 = 1;
  dword_60C8ED4C = (int)&off_60BDD1EC;
  unk_60C8ED50 = CurrentStateID + 7;
  dword_60C8ED6C = (int)&Enemy_StateId_Frozen;
  dword_60C8ED70 = (int)&off_60BDD1D8;
  *(_DWORD *)algn_60C8ED74 = CurrentStateID + 8;
  dword_60C8ED78 = (int)sub_60275CCC;
  dword_60C8ED7C = 0;
  dword_60C8ED80 = (int)sub_60275DAC;
  dword_60C8ED84 = 0;
  dword_60C8ED88 = (int)nullsub_3134;
  dword_60C8ED8C = 0;
  dword_60C8ED90 = (int)&off_60BDD1D8;
  *(_DWORD *)algn_60C8ED94 = CurrentStateID + 9;
  dword_60C8ED98 = (int)sub_60275F48;
  dword_60C8ED9C = 0;
  dword_60C8EDA0 = (int)sub_60276068;
  dword_60C8EDA4 = 0;
  dword_60C8EDA8 = (int)nullsub_3135;
  dword_60C8EDAC = 0;
  CurrentStateID += 10;
  dword_60C8EDB4 = CurrentStateID;
  dword_60C8EDB0 = (int)&off_60BDD1D8;
  dword_60C8EDB8 = (int)sub_60276228;
  dword_60C8EDBC = 0;
  dword_60C8EDC0 = (int)sub_60276278;
  dword_60C8EDC4 = 0;
  dword_60C8EDC8 = (int)nullsub_3136;
  dword_60C8EDCC = 0;
  return nullsub_3136;
}
