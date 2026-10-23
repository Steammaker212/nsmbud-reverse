/* registerProfile_SumoBro_patsu_385D88
 * address: 0x60385D88   size: 860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_SumoBro_patsu_385D88()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C96BF0[0] = 0;
  dword_60C96BF4 = 0;
  dword_60C96BF8 = 0;
  dword_60C96BFC = 1068289229;
  dword_60C96C00 = 1068289229;
  dword_60C96C04 = 1068289229;
  dword_60C96C08 = 0;
  dword_60C96C0C = -1053294592;
  dword_60C96C10 = 0;
  dword_60C96C14 = 1069128090;
  dword_60C96C18 = 1069966950;
  dword_60C96C1C = 1069128090;
  dword_60C96C20 = 0;
  dword_60C96C24 = -1054343168;
  dword_60C96C28 = 0;
  dword_60C96C2C = 0;
  *(_QWORD *)algn_60C96C30 = 3247702016LL;
  dword_60C96ABC[0] = 1067030938;
  dword_60C96AC0 = 1063675494;
  dword_60C96AC4 = -1077097267;
  dword_60C96AC8 = 1068708659;
  dword_60C96ACC = 1067030938;
  dword_60C96AD0 = 1072902963;
  dword_60C96AD4 = -1077097267;
  dword_60C96AD8 = 1075419546;
  dword_60C96ADC = 1067030938;
  dword_60C96AE0 = 1077516698;
  dword_60C96AE4 = -1077097267;
  dword_60C96AE8 = 1079613850;
  dword_60C96AEC = 1067030938;
  dword_60C96AF0 = 1081711002;
  dword_60C96AF4 = -1077097267;
  dword_60C96AF8 = 1082969293;
  dword_60C96AFC = 1060320051;
  dword_60C96B00 = 1084017869;
  dword_60C96B04 = 1045220557;
  dword_60C96B08 = -1090519040;
  dword_60C96B0C = -1073741824;
  dword_60C96B10 = -1082130432;
  dword_60C96B14 = 1074580685;
  dword_60C96B18 = -1080033280;
  dword_60C96B1C = -1082130432;
  dword_60C96B20 = -1090519040;
  dword_60C96B24 = 1071225242;
  dword_60C96B28 = -1090519040;
  dword_60C96B2C = -1090519040;
  dword_60C96B30 = -1082130432;
  dword_60C96B34 = 1069547520;
  dword_60C96B38 = -1081081856;
  unk_60C96B3C = 0x40000000;
  unk_60C96B40 = -1082130432;
  unk_60C96B44 = -1102263091;
  unk_60C96B48 = -1086324736;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC570A;
  Profile__ctor(&stru_60C96B4C, Actor_SumoBro_patsu_build, 0x1FAu, &v1, 0, 34);
  dword_60C96B68 = CurrentStateID + 1;
  dword_60C96B64 = (int)&off_60BF38D0;
  dword_60C96B6C = (int)nullsub_3467;
  dword_60C96B70 = 0;
  dword_60C96B74 = (int)sub_60385010;
  dword_60C96B78 = 0;
  dword_60C96B7C = (int)nullsub_3468;
  dword_60C96B80 = 0;
  unk_60C96B84 = &off_60BF38D0;
  unk_60C96B88 = CurrentStateID + 2;
  dword_60C96B8C = (int)sub_603850CC;
  dword_60C96B90 = 0;
  dword_60C96B94 = (int)j_Enemy_vf1CC_2;
  dword_60C96B98 = 0;
  dword_60C96B9C = (int)nullsub_3469;
  dword_60C96BA0 = 0;
  unk_60C96BA4 = &off_60BF38D0;
  unk_60C96BA8 = CurrentStateID + 3;
  CurrentStateID += 4;
  dword_60C96BAC = (int)sub_6038511C;
  dword_60C96BB0 = 0;
  dword_60C96BC8 = CurrentStateID;
  dword_60C96BCC = 612;
  dword_60C96BD0 = 1;
  dword_60C96BB4 = (int)&loc_60385214;
  dword_60C96BB8 = 0;
  dword_60C96BBC = (int)nullsub_3470;
  dword_60C96BC0 = 0;
  dword_60C96BD4 = 616;
  dword_60C96BD8 = 1;
  dword_60C96BDC = 620;
  dword_60C96BE0 = 1;
  dword_60C96BC4 = (int)&off_60BF38E4;
  dword_60C96BE4 = (int)&Enemy_StateId_Frozen;
  return &dword_60C96BC4;
}
