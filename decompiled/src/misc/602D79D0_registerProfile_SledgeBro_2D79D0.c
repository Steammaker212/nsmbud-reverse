/* registerProfile_SledgeBro_2D79D0
 * address: 0x602D79D0   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_SledgeBro_2D79D0()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C91ABC = 0;
  dword_60C91AC0 = 0;
  dword_60C91AC4 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC3C63;
  Profile__ctor(&stru_60C91AC8, SledgeBro_build, 0x2FEu, &v1, &stru_60AFEAD8, 18);
  dword_60C91AE4 = CurrentStateID + 1;
  dword_60C91AE0 = (int)&off_60BE6990;
  dword_60C91AE8 = (int)sub_602D2E88;
  dword_60C91AEC = 0;
  dword_60C91AF0 = (int)sub_602D2F7C;
  dword_60C91AF4 = 0;
  dword_60C91AF8 = (int)nullsub_3274;
  dword_60C91AFC = 0;
  dword_60C91B00 = (int)&off_60BE6990;
  *(_DWORD *)algn_60C91B04 = CurrentStateID + 2;
  dword_60C91B08 = (int)nullsub_3275;
  dword_60C91B0C = 0;
  dword_60C91B10 = (int)sub_602D3460;
  dword_60C91B14 = 0;
  dword_60C91B18 = (int)nullsub_3276;
  dword_60C91B1C = 0;
  dword_60C91B20 = (int)&off_60BE6990;
  *(_DWORD *)algn_60C91B24 = CurrentStateID + 3;
  dword_60C91B28 = (int)jump_st_ref_2D3564;
  dword_60C91B2C = 0;
  dword_60C91B30 = (int)sub_602D3640;
  dword_60C91B34 = 0;
  dword_60C91B38 = (int)nullsub_3277;
  dword_60C91B3C = 0;
  dword_60C91B40 = (int)&off_60BE6990;
  *(_DWORD *)algn_60C91B44 = CurrentStateID + 4;
  dword_60C91B48 = (int)sub_602D38A4;
  dword_60C91B4C = 0;
  dword_60C91B50 = (int)sub_602D39A4;
  dword_60C91B54 = 0;
  dword_60C91B58 = (int)nullsub_3278;
  dword_60C91B5C = 0;
  dword_60C91B60 = (int)&off_60BE6990;
  *(_DWORD *)algn_60C91B64 = CurrentStateID + 5;
  dword_60C91B68 = (int)jump_ed_ref_2D3C48;
  dword_60C91B6C = 0;
  dword_60C91B70 = (int)sub_602D3D28;
  dword_60C91B74 = 0;
  dword_60C91B78 = (int)nullsub_3279;
  dword_60C91B7C = 0;
  dword_60C91B80 = (int)&off_60BE6990;
  *(_DWORD *)algn_60C91B84 = CurrentStateID + 6;
  dword_60C91B88 = (int)jump_attack_ref;
  dword_60C91B8C = 0;
  dword_60C91B90 = (int)sub_602D3EA4;
  dword_60C91B94 = 0;
  dword_60C91B98 = (int)nullsub_3280;
  dword_60C91B9C = 0;
  dword_60C91BA0 = (int)&off_60BE6990;
  *(_DWORD *)algn_60C91BA4 = CurrentStateID + 7;
  dword_60C91BA8 = (int)jump_attack_ed_ref;
  dword_60C91BAC = 0;
  dword_60C91BB0 = (int)sub_602D4268;
  dword_60C91BB4 = 0;
  dword_60C91BB8 = (int)nullsub_3281;
  dword_60C91BBC = 0;
  dword_60C91BC0 = (int)&off_60BE6990;
  *(_DWORD *)algn_60C91BC4 = CurrentStateID + 8;
  dword_60C91BC8 = (int)sub_602D42F4;
  dword_60C91BCC = 0;
  dword_60C91BD0 = (int)sub_602D4430;
  dword_60C91BD4 = 0;
  dword_60C91BD8 = (int)sub_602D477C;
  dword_60C91BDC = 0;
  dword_60C91BE0 = (int)&off_60BE6990;
  *(_DWORD *)algn_60C91BE4 = CurrentStateID + 9;
  dword_60C91BE8 = (int)sub_602D479C;
  dword_60C91BEC = 0;
  dword_60C91BF0 = (int)sub_602D47C0;
  dword_60C91BF4 = 0;
  dword_60C91BF8 = (int)nullsub_3282;
  dword_60C91BFC = 0;
  dword_60C91C00 = (int)&off_60BE6990;
  *(_DWORD *)algn_60C91C04 = CurrentStateID + 10;
  dword_60C91C08 = (int)sub_602D4954;
  dword_60C91C0C = 0;
  dword_60C91C10 = (int)&loc_602D4A18;
  dword_60C91C14 = 0;
  dword_60C91C18 = (int)sub_602D5200;
  dword_60C91C1C = 0;
  dword_60C91C24 = CurrentStateID + 11;
  dword_60C91C28 = 444;
  dword_60C91C2C = 1;
  dword_60C91C30 = 448;
  dword_60C91C34 = 1;
  dword_60C91C38 = 452;
  dword_60C91C3C = 1;
  dword_60C91C20 = (int)&off_60BE69A4;
  dword_60C91C40 = (int)&stru_60C906EC;
  CurrentStateID += 12;
  *(_DWORD *)algn_60C91C48 = CurrentStateID;
  *(_DWORD *)&algn_60C91C48[4] = 456;
  dword_60C91C50 = 1;
  dword_60C91C54 = 460;
  dword_60C91C58 = 1;
  dword_60C91C5C = 464;
  dword_60C91C60 = 1;
  dword_60C91C44 = (int)&off_60BE69A4;
  dword_60C91C64 = (int)&stru_60C90710;
  return &stru_60C90710;
}
