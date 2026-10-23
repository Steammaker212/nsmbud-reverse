/* registerProfile_CSW5Boo_20E928
 * address: 0x6020E928   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_CSW5Boo_20E928()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C8CF70 = 0;
  dword_60C8CF74 = 0;
  dword_60C8CF78 = 0;
  dword_60C8CF60 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC1EFA;
  Profile__ctor(&stru_60C8CDB4, Actor_CSW5Boo_build, 0x37Bu, &v2, 0, 0);
  *v0 = &off_60BD8D9C;
  dword_60C8CDD0 = CurrentStateID + 1;
  dword_60C8CDD4 = 148;
  dword_60C8CDD8 = 1;
  dword_60C8CDDC = 152;
  dword_60C8CDE0 = 1;
  dword_60C8CDE4 = 156;
  dword_60C8CDE8 = 1;
  dword_60C8CDCC = (int)&off_60BD8EDC;
  dword_60C8CDEC = (int)&NullState;
  dword_60C8CDFC = 1;
  dword_60C8CE00 = 164;
  dword_60C8CE04 = 1;
  dword_60C8CE08 = 168;
  dword_60C8CE0C = 1;
  unk_60C8CDF0 = &off_60BD8EDC;
  unk_60C8CDF4 = CurrentStateID + 2;
  unk_60C8CDF8 = 160;
  dword_60C8CE10 = (int)&NullState;
  dword_60C8CE20 = 1;
  dword_60C8CE24 = 176;
  dword_60C8CE28 = 1;
  dword_60C8CE2C = 180;
  dword_60C8CE30 = 1;
  unk_60C8CE14 = &off_60BD8EDC;
  unk_60C8CE18 = CurrentStateID + 3;
  unk_60C8CE1C = 172;
  dword_60C8CE34 = (int)&NullState;
  dword_60C8CE44 = 1;
  dword_60C8CE48 = 188;
  dword_60C8CE4C = 1;
  dword_60C8CE50 = 192;
  dword_60C8CE54 = 1;
  dword_60C8CE38 = (int)&off_60BD8EDC;
  unk_60C8CE3C = CurrentStateID + 4;
  unk_60C8CE40 = 184;
  dword_60C8CE58 = (int)&NullState;
  dword_60C8CE68 = 1;
  dword_60C8CE6C = 200;
  dword_60C8CE70 = 1;
  dword_60C8CE74 = 204;
  dword_60C8CE78 = 1;
  unk_60C8CE5C = &off_60BD8EDC;
  unk_60C8CE60 = CurrentStateID + 5;
  unk_60C8CE64 = 196;
  dword_60C8CE7C = (int)&NullState;
  dword_60C8CE8C = 1;
  dword_60C8CE90 = 212;
  dword_60C8CE94 = 1;
  dword_60C8CE98 = 216;
  dword_60C8CE9C = 1;
  unk_60C8CE80 = &off_60BD8EDC;
  unk_60C8CE84 = CurrentStateID + 6;
  unk_60C8CE88 = 208;
  dword_60C8CEA0 = (int)&NullState;
  dword_60C8CEB0 = 1;
  dword_60C8CEB4 = 224;
  dword_60C8CEB8 = 1;
  dword_60C8CEBC = 228;
  dword_60C8CEC0 = 1;
  unk_60C8CEA4 = &off_60BD8EDC;
  unk_60C8CEA8 = CurrentStateID + 7;
  unk_60C8CEAC = 220;
  dword_60C8CEC4 = (int)&NullState;
  dword_60C8CED4 = 1;
  dword_60C8CED8 = 236;
  dword_60C8CEDC = 1;
  dword_60C8CEE0 = 240;
  dword_60C8CEE4 = 1;
  unk_60C8CEC8 = &off_60BD8EDC;
  unk_60C8CECC = CurrentStateID + 8;
  unk_60C8CED0 = 232;
  dword_60C8CEE8 = (int)&NullState;
  dword_60C8CEF8 = 1;
  dword_60C8CEFC = 248;
  dword_60C8CF00 = 1;
  dword_60C8CF04 = 252;
  dword_60C8CF08 = 1;
  unk_60C8CEEC = &off_60BD8EDC;
  unk_60C8CEF0 = CurrentStateID + 9;
  unk_60C8CEF4 = 244;
  dword_60C8CF0C = (int)&NullState;
  dword_60C8CF1C = 1;
  dword_60C8CF20 = 260;
  dword_60C8CF24 = 1;
  dword_60C8CF28 = 264;
  dword_60C8CF2C = 1;
  unk_60C8CF10 = &off_60BD8EDC;
  unk_60C8CF14 = CurrentStateID + 10;
  unk_60C8CF18 = 256;
  dword_60C8CF30 = (int)&NullState;
  CurrentStateID += 11;
  *(_DWORD *)algn_60C8CF38 = CurrentStateID;
  *(_DWORD *)&algn_60C8CF38[4] = 268;
  dword_60C8CF40 = 1;
  dword_60C8CF44 = 272;
  dword_60C8CF48 = 1;
  dword_60C8CF4C = 276;
  dword_60C8CF50 = 1;
  dword_60C8CF34 = (int)&off_60BD8EDC;
  dword_60C8CF54 = (int)&NullState;
  return 1;
}
