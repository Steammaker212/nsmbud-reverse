/* registerProfile_BoomBoom_W3fort_058C58
 * address: 0x60058C58   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_BoomBoom_W3fort_058C58()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C80B70 = 0;
  dword_60C80B74 = 0;
  dword_60C80B78 = 0;
  dword_60C80B40 = -1096647577;
  dword_60C80B60 = 1091281641;
  dword_60C80B44 = -1091388970;
  dword_60C80B68 = 1093315242;
  dword_60C80B48 = -1106140492;
  dword_60C80B64 = 1082689673;
  dword_60C80B4C = 2520;
  unk_60C80B50 = (int)(float)((float)(2147500000.0 * 42.0) / 180.0);
  dword_60C80B54 = -1106140492;
  dword_60C80B6C = 1082689673;
  dword_60C80B58 = 2520;
  *(_DWORD *)algn_60C80B5C = (int)(float)((float)(2147500000.0 * 42.0) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABB2D4;
  Profile__ctor(&stru_60C80A3C, &loc_600575D8, 0x2A9u, &v2, &stru_60AF5320, 0);
  *v0 = &off_60BC45D8;
  dword_60C80A58 = CurrentStateID + 1;
  dword_60C80A5C = 1036;
  dword_60C80A60 = 1;
  dword_60C80A64 = 1040;
  dword_60C80A68 = 1;
  dword_60C80A6C = 1044;
  dword_60C80A70 = 1;
  dword_60C80A54 = (int)&off_60BC4B54;
  dword_60C80A74 = (int)&dword_60C8095C;
  unk_60C80A7C = CurrentStateID + 2;
  unk_60C80A80 = 1060;
  dword_60C80A84 = 1;
  dword_60C80A88 = 1064;
  dword_60C80A8C = 1;
  dword_60C80A90 = 1068;
  dword_60C80A94 = 1;
  dword_60C80A78 = (int)&off_60BC4B54;
  dword_60C80A98 = (int)&dword_60C804A8;
  unk_60C80AA0 = CurrentStateID + 3;
  unk_60C80AA4 = 1328;
  dword_60C80AA8 = 1;
  dword_60C80AAC = 1332;
  dword_60C80AB0 = 1;
  dword_60C80AB4 = 1336;
  dword_60C80AB8 = 1;
  dword_60C80A9C = (int)&off_60BC4B54;
  dword_60C80ABC = (int)&NullState;
  dword_60C80ACC = 1;
  dword_60C80AD0 = 1344;
  dword_60C80AD4 = 1;
  dword_60C80AD8 = 1348;
  dword_60C80ADC = 1;
  dword_60C80AC0 = (int)&off_60BC4B54;
  unk_60C80AC4 = CurrentStateID + 4;
  unk_60C80AC8 = 1340;
  dword_60C80AE0 = (int)&NullState;
  dword_60C80AF0 = 1;
  dword_60C80AF4 = 1356;
  dword_60C80AF8 = 1;
  dword_60C80AFC = 1360;
  dword_60C80B00 = 1;
  unk_60C80AE4 = &off_60BC4B54;
  unk_60C80AE8 = CurrentStateID + 5;
  unk_60C80AEC = 1352;
  dword_60C80B04 = (int)&NullState;
  CurrentStateID += 6;
  unk_60C80B0C = CurrentStateID;
  unk_60C80B10 = 1288;
  dword_60C80B14 = 1;
  dword_60C80B18 = 1292;
  dword_60C80B1C = 1;
  dword_60C80B20 = 1296;
  dword_60C80B24 = 1;
  dword_60C80B08 = (int)&off_60BC4B54;
  dword_60C80B28 = (int)&dword_60C809C8;
  return &dword_60C809C8;
}
