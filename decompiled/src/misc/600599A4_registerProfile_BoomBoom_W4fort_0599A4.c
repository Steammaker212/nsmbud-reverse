/* registerProfile_BoomBoom_W4fort_0599A4
 * address: 0x600599A4   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_BoomBoom_W4fort_0599A4()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C80BF0 = 0;
  dword_60C80BF4 = 0;
  dword_60C80BF8 = 0;
  dword_60C80BC0 = -1096647577;
  dword_60C80BE0 = 1091281641;
  dword_60C80BC4 = -1091388970;
  dword_60C80BE8 = 1093315242;
  dword_60C80BC8 = -1106140492;
  dword_60C80BE4 = 1082689673;
  dword_60C80BCC = 2520;
  unk_60C80BD0 = (int)(float)((float)(2147500000.0 * 42.0) / 180.0);
  dword_60C80BD4 = -1106140492;
  dword_60C80BEC = 1082689673;
  dword_60C80BD8 = 2520;
  *(_DWORD *)algn_60C80BDC = (int)(float)((float)(2147500000.0 * 42.0) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABB37E;
  Profile__ctor(&stru_60C80B7C, &loc_60058F5C, 0x2AAu, &v2, &stru_60AF5344, 0);
  *v0 = &off_60BC4B68;
  dword_60C80B98 = ++CurrentStateID;
  dword_60C80B9C = 1352;
  dword_60C80BA0 = 1;
  dword_60C80BA4 = 1356;
  dword_60C80BA8 = 1;
  dword_60C80BAC = 1360;
  dword_60C80BB0 = 1;
  dword_60C80B94 = (int)&off_60BC50D8;
  dword_60C80BB4 = (int)&unk_60C80AE4;
  return &dword_60C80B94;
}
