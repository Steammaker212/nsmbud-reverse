/* registerProfile_CourseSelect_kamera_1707D4
 * address: 0x601707D4   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelect_kamera_1707D4()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C88B08 = 0;
  dword_60C88B0C = 0;
  dword_60C88B10 = 0;
  dword_60C88B14 = 0;
  dword_60C88B18 = 1065353216;
  dword_60C88B1C = 0;
  dword_60C88B20 = 1197544448;
  dword_60C88B24 = 1145569280;
  dword_60C88B28 = 1140457472;
  dword_60C88B2C = 1197544448;
  dword_60C88B30 = 1145569280;
  dword_60C88B34 = 1140457472;
  dword_60C88B38 = -980332544;
  dword_60C88B3C = 0;
  dword_60C88B40 = 1161527296;
  dword_60C88B44 = 1168891904;
  dword_60C88B48 = 0;
  dword_60C88B4C = -982679552;
  dword_60C88B50 = 1184424960;
  dword_60C88B54 = 0;
  dword_60C88B58 = -1015414784;
  dword_60C88B5C = 1184424960;
  dword_60C88B60 = 0;
  dword_60C88B64 = 1152892928;
  dword_60C88B70 = 1192424448;
  dword_60C88B74 = 0;
  dword_60C88B78 = -989642752;
  dword_60C88B7C = 1192424448;
  dword_60C88B80 = 0;
  dword_60C88B84 = 1125515264;
  dword_60C88B88 = 1197544448;
  dword_60C88B8C = 1141473280;
  dword_60C88B90 = -1000275968;
  dword_60C88B94 = 1197544448;
  dword_60C88B98 = 1141473280;
  dword_60C88B9C = -1013579776;
  dword_60C88BA0 = 0;
  dword_60C88BA4 = 0;
  dword_60C88BA8 = 1118371840;
  dword_60C88BAC = 0;
  dword_60C88BB0 = 0;
  dword_60C88BB4 = 0;
  dword_60C88BB8 = 0;
  dword_60C88BBC = 0;
  dword_60C88BC0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABF0AB;
  Profile__ctor(&stru_60C88AC4, Actor_CourseSelect_kamera_build, 0x35Au, &v1, 0, 0);
  *result = &off_60BD4C50;
  return result;
}
