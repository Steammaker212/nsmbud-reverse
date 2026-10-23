/* registerProfile_bakubaku_2403EC
 * address: 0x602403EC   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_bakubaku_2403EC()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8DB2C = 0;
  dword_60C8DB30 = 0;
  dword_60C8DB34 = 0;
  dword_60C8DB14 = 0x40000000;
  dword_60C8DB18 = -1073741824;
  dword_60C8DB1C = 0x2000000;
  dword_60C8DB20 = -33554432;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC2609;
  Profile__ctor(&stru_60C8DA00, Actor_bakubaku_build, 0x2A2u, &v1, &stru_60AFD668, 18);
  dword_60C8DA1C = CurrentStateID + 1;
  dword_60C8DA18 = (int)&off_60BD9950;
  dword_60C8DA20 = (int)sub_6023B26C;
  dword_60C8DA24 = 0;
  dword_60C8DA28 = (int)sub_6023B2E0;
  dword_60C8DA2C = 0;
  dword_60C8DA30 = (int)nullsub_3072;
  dword_60C8DA34 = 0;
  unk_60C8DA38 = &off_60BD9950;
  unk_60C8DA3C = CurrentStateID + 2;
  dword_60C8DA40 = (int)sub_6023B648;
  dword_60C8DA44 = 0;
  dword_60C8DA48 = (int)sub_6023B698;
  dword_60C8DA4C = 0;
  dword_60C8DA50 = (int)nullsub_3073;
  dword_60C8DA54 = 0;
  unk_60C8DA58 = &off_60BD9950;
  unk_60C8DA5C = CurrentStateID + 3;
  dword_60C8DA60 = (int)sub_6023B874;
  dword_60C8DA64 = 0;
  dword_60C8DA68 = (int)sub_6023B8C0;
  dword_60C8DA6C = 0;
  dword_60C8DA70 = (int)nullsub_3074;
  dword_60C8DA74 = 0;
  dword_60C8DA78 = (int)&off_60BD9950;
  *(_DWORD *)algn_60C8DA7C = CurrentStateID + 4;
  dword_60C8DA80 = (int)sub_6023BB44;
  dword_60C8DA84 = 0;
  dword_60C8DA88 = (int)&loc_6023BBD4;
  dword_60C8DA8C = 0;
  dword_60C8DA90 = (int)sub_6023C1A0;
  dword_60C8DA94 = 0;
  unk_60C8DA98 = &off_60BD9950;
  unk_60C8DA9C = CurrentStateID + 5;
  dword_60C8DAA0 = (int)sub_6023C1B0;
  dword_60C8DAA4 = 0;
  dword_60C8DAA8 = (int)&loc_6023C1EC;
  dword_60C8DAAC = 0;
  dword_60C8DAB0 = (int)nullsub_3075;
  dword_60C8DAB4 = 0;
  dword_60C8DAB8 = (int)&off_60BD9950;
  *(_DWORD *)algn_60C8DABC = CurrentStateID + 6;
  dword_60C8DAC0 = (int)sub_6023C434;
  dword_60C8DAC4 = 0;
  dword_60C8DAC8 = (int)skl_root_ref_23C438;
  dword_60C8DACC = 0;
  dword_60C8DAD0 = (int)nullsub_3076;
  dword_60C8DAD4 = 0;
  CurrentStateID += 7;
  dword_60C8DADC = CurrentStateID;
  dword_60C8DAE0 = 456;
  dword_60C8DAE4 = 1;
  dword_60C8DAE8 = 460;
  dword_60C8DAEC = 1;
  dword_60C8DAF0 = 464;
  dword_60C8DAF4 = 1;
  dword_60C8DAD8 = (int)&off_60BD9964;
  dword_60C8DAF8 = (int)&stru_60C90710;
  return &stru_60C90710;
}
