/* registerProfile_BoomBoom_W5fort_05B698
 * address: 0x6005B698   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *registerProfile_BoomBoom_W5fort_05B698()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C80D00 = 0;
  dword_60C80D04 = 0;
  dword_60C80D08 = 0;
  dword_60C80CD0 = -1101486625;
  dword_60C80CF0 = 1085943436;
  dword_60C80CD4 = -1096691398;
  dword_60C80CF8 = 1088654906;
  dword_60C80CD8 = -1106140492;
  dword_60C80CF4 = 1082689673;
  dword_60C80CDC = 2520;
  unk_60C80CE0 = (int)(float)((float)(2147500000.0 * 42.0) / 180.0);
  dword_60C80CE4 = -1106140492;
  dword_60C80CFC = 1082689673;
  dword_60C80CE8 = 2520;
  *(_DWORD *)algn_60C80CEC = (int)(float)((float)(2147500000.0 * 42.0) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABB410;
  Profile__ctor(&stru_60C80BFC, Actor_BoomBoom_W5fort_build, 0x2ABu, &v2, &stru_60AF5368, 0);
  *v0 = &off_60BC50EC;
  dword_60C80C18 = CurrentStateID + 1;
  dword_60C80C1C = 1024;
  dword_60C80C20 = 1;
  dword_60C80C24 = 1028;
  dword_60C80C28 = 1;
  dword_60C80C2C = 1032;
  dword_60C80C30 = 1;
  dword_60C80C14 = (int)&off_60BC5694;
  dword_60C80C34 = (int)&dword_60C80938;
  unk_60C80C3C = CurrentStateID + 2;
  unk_60C80C40 = 1036;
  dword_60C80C44 = 1;
  dword_60C80C48 = 1040;
  dword_60C80C4C = 1;
  dword_60C80C50 = 1044;
  dword_60C80C54 = 1;
  dword_60C80C38 = (int)&off_60BC5694;
  dword_60C80C58 = (int)&dword_60C80A54;
  unk_60C80C60 = CurrentStateID + 3;
  unk_60C80C64 = 1288;
  dword_60C80C68 = 1;
  dword_60C80C6C = 1292;
  dword_60C80C70 = 1;
  dword_60C80C74 = 1296;
  dword_60C80C78 = 1;
  dword_60C80C5C = (int)&off_60BC5694;
  dword_60C80C7C = (int)&dword_60C80B08;
  unk_60C80C84 = CurrentStateID + 4;
  unk_60C80C88 = 1300;
  dword_60C80C8C = 1;
  dword_60C80C90 = 1304;
  dword_60C80C94 = 1;
  dword_60C80C98 = 1308;
  dword_60C80C9C = 1;
  dword_60C80C80 = (int)&off_60BC5694;
  dword_60C80CA0 = (int)&dword_60C809EC;
  CurrentStateID += 5;
  *(_DWORD *)algn_60C80CA8 = CurrentStateID;
  *(_DWORD *)&algn_60C80CA8[4] = 1352;
  dword_60C80CB0 = 1;
  dword_60C80CB4 = 1356;
  dword_60C80CB8 = 1;
  dword_60C80CBC = 1360;
  dword_60C80CC0 = 1;
  dword_60C80CA4 = (int)&off_60BC5694;
  dword_60C80CC4 = (int)&unk_60C80AE4;
  return &unk_60C80AE4;
}
