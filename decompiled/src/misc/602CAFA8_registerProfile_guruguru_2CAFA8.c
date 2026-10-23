/* registerProfile_guruguru_2CAFA8
 * address: 0x602CAFA8   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_guruguru_2CAFA8()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C91898 = 0;
  dword_60C9189C = 0;
  dword_60C918A0 = 0;
  dword_60C918A4 = 0;
  dword_60C918A8 = 0x40000000;
  dword_60C918AC = 0x80000000;
  dword_60C918B0 = -1073741824;
  dword_60C91890[0] = 0x800000;
  dword_60C91894 = -8388608;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC3B60;
  Profile__ctor(&stru_60C91848, Actor_guruguru_build, 0x323u, &v1, &stru_60AFEA04, 2);
  dword_60C91864 = ++CurrentStateID;
  dword_60C91860 = (int)&off_60BE5C60;
  dword_60C91868 = (int)nullsub_3266;
  dword_60C9186C = 0;
  dword_60C91870 = (int)sub_602CA988;
  dword_60C91874 = 0;
  dword_60C91878 = (int)nullsub_3267;
  dword_60C9187C = 0;
  return &dword_60C91860;
}
