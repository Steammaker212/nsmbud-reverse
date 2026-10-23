/* registerProfile_seichin_39100C
 * address: 0x6039100C   size: 736   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_seichin_39100C()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C96F1C = 0;
  dword_60C96F20 = 0;
  dword_60C96F24 = 0;
  dword_60C96F00 = -1114112973;
  dword_60C96F18 = 1077336941;
  dword_60C96F04 = 0x20000000;
  unk_60C96F08 = (int)(float)((float)(2147500000.0 * 17.85) / 180.0);
  dword_60C96F0C = (int)(float)((float)(2147500000.0 * 5.625) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC57C0;
  Profile__ctor(&stru_60C96DFC, Actor_seichin_build, 0x285u, &v2, &stru_60B00838, 18);
  *v0 = &off_60BF3D44;
  dword_60C96E18 = CurrentStateID + 1;
  dword_60C96E14 = (int)&off_60BF4078;
  dword_60C96E1C = (int)&loc_6038E448;
  dword_60C96E20 = 0;
  dword_60C96E24 = (int)sub_6038E580;
  dword_60C96E28 = 0;
  dword_60C96E2C = (int)nullsub_3479;
  dword_60C96E30 = 0;
  dword_60C96E34 = (int)&off_60BF4078;
  unk_60C96E38 = CurrentStateID + 2;
  dword_60C96E3C = (int)touchdown_ref;
  dword_60C96E40 = 0;
  dword_60C96E44 = (int)sub_6038E898;
  dword_60C96E48 = 0;
  dword_60C96E4C = (int)nullsub_3480;
  dword_60C96E50 = 0;
  dword_60C96E54 = (int)&off_60BF4078;
  unk_60C96E58 = CurrentStateID + 3;
  dword_60C96E5C = (int)throw_right_ref;
  dword_60C96E60 = 0;
  dword_60C96E64 = (int)SE_EMY_GABON_ROCK_ref_2;
  dword_60C96E68 = 0;
  dword_60C96E6C = (int)nullsub_3481;
  dword_60C96E70 = 0;
  dword_60C96E74 = (int)&off_60BF4078;
  unk_60C96E78 = CurrentStateID + 4;
  dword_60C96E7C = (int)sub_6038F070;
  dword_60C96E80 = 0;
  dword_60C96E84 = (int)sub_6038F140;
  dword_60C96E88 = 0;
  dword_60C96E8C = (int)nullsub_3482;
  dword_60C96E90 = 0;
  dword_60C96E98 = CurrentStateID + 5;
  dword_60C96E9C = 444;
  dword_60C96EA0 = 1;
  dword_60C96EA4 = 448;
  dword_60C96EA8 = 1;
  dword_60C96EAC = 452;
  dword_60C96EB0 = 1;
  dword_60C96E94 = (int)&off_60BF408C;
  dword_60C96EB4 = (int)&stru_60C906EC;
  dword_60C96EC4 = 1;
  dword_60C96EC8 = 460;
  dword_60C96ECC = 1;
  dword_60C96ED0 = 464;
  dword_60C96ED4 = 1;
  unk_60C96EB8 = &off_60BF408C;
  unk_60C96EBC = CurrentStateID + 6;
  unk_60C96EC0 = 456;
  dword_60C96ED8 = (int)&stru_60C90710;
  CurrentStateID += 7;
  unk_60C96EE0 = CurrentStateID;
  unk_60C96EE4 = 516;
  dword_60C96EE8 = 1;
  dword_60C96EEC = 520;
  dword_60C96EF0 = 1;
  dword_60C96EF4 = 524;
  dword_60C96EF8 = 1;
  dword_60C96EDC = (int)&off_60BF408C;
  dword_60C96EFC = (int)&stru_60C907C4;
  return &stru_60C907C4;
}
