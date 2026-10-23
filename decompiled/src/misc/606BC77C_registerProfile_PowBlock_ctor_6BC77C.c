/* registerProfile_PowBlock_ctor_6BC77C
 * address: 0x606BC77C   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int registerProfile_PowBlock_ctor_6BC77C()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AD776E;
  Profile__ctor(&stru_60CBA648, PowBlock_ctor, 0x183u, &v2, &stru_60B08850, 2064);
  *v0 = &off_60C1B608;
  dword_60CBA664 = CurrentStateID + 1;
  dword_60CBA668 = 196;
  dword_60CBA66C = 1;
  dword_60CBA670 = 200;
  dword_60CBA674 = 1;
  dword_60CBA678 = 204;
  dword_60CBA67C = 1;
  dword_60CBA660 = (int)&off_60C1B7B4;
  dword_60CBA680 = (int)&stru_60CB0ECC;
  dword_60CBA68C = 208;
  dword_60CBA690 = 1;
  dword_60CBA694 = 212;
  dword_60CBA698 = 1;
  dword_60CBA69C = 216;
  dword_60CBA6A0 = 1;
  unk_60CBA684 = &off_60C1B7B4;
  unk_60CBA688 = CurrentStateID + 2;
  dword_60CBA6A4 = (int)&dword_60CB0CA4;
  dword_60CBA6B0 = 220;
  dword_60CBA6B4 = 1;
  dword_60CBA6B8 = 224;
  dword_60CBA6BC = 1;
  dword_60CBA6C0 = 228;
  dword_60CBA6C4 = 1;
  unk_60CBA6A8 = &off_60C1B7B4;
  unk_60CBA6AC = CurrentStateID + 3;
  dword_60CBA6C8 = (int)&dword_60CB0C80;
  dword_60CBA6D0 = CurrentStateID + 4;
  dword_60CBA6CC = (int)&off_60C1B7C8;
  dword_60CBA6D4 = (int)sub_606BC2D4;
  dword_60CBA6D8 = 0;
  dword_60CBA6DC = (int)sub_606BC4A4;
  dword_60CBA6E0 = 0;
  dword_60CBA6E4 = (int)nullsub_267;
  dword_60CBA6E8 = 0;
  unk_60CBA6EC = &off_60C1B7C8;
  unk_60CBA6F0 = CurrentStateID + 5;
  dword_60CBA6F4 = (int)sub_606BC4E8;
  dword_60CBA6F8 = 0;
  dword_60CBA6FC = (int)SE_OBJ_POW_BLOCK_QUAKE_ref;
  dword_60CBA700 = 0;
  dword_60CBA704 = (int)sub_606BC6FC;
  dword_60CBA708 = 0;
  CurrentStateID += 6;
  dword_60CBA710 = CurrentStateID;
  dword_60CBA70C = (int)&off_60C1B7C8;
  dword_60CBA714 = (int)sub_606BC70C;
  dword_60CBA718 = 0;
  dword_60CBA71C = (int)nullsub_5205;
  dword_60CBA720 = 0;
  dword_60CBA724 = (int)sub_606BC76C;
  dword_60CBA728 = 0;
  dword_60CBA760 = (int)&sead__SafeStringBase__vtable;
  unk_60CBA764 = "block_pow";
  unk_60CBA768 = &sead__SafeStringBase__vtable;
  dword_60CBA76C = (int)"block_pow";
  dword_60CBA770 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA774 = (int)"down";
  dword_60CBA778 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA77C = (int)"EF_POW";
  dword_60CBA79C = (int)&sead__SafeStringBase__vtable;
  dword_60CBA7A0 = (int)"EF_PowFB";
  dword_60CBA7A4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA7A8 = (int)"EF_PowFB";
  dword_60CBA7AC = (int)&sead__SafeStringBase__vtable;
  dword_60CBA7B0 = (int)"EF_PowRainbow";
  dword_60CBA7B4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA7B8 = (int)"EF_PowRainbow";
  sub_60000288();
  dword_60CBA780 = 1098907648;
  dword_60CBA784 = 1098907648;
  dword_60CBA788 = 1090519040;
  dword_60CBA78C = 1090519040;
  stru_60CBA730.distToCenter.x = 0.0;
  stru_60CBA730.field_C = 0.0;
  stru_60CBA730.distToCenter.y = 0.0;
  stru_60CBA730.field_8 = 0.0;
  stru_60CBA730.topLeft.x = -8.0;
  stru_60CBA730.topLeft.y = 16.0;
  stru_60CBA730.bottomRight.x = 8.0;
  stru_60CBA730.bottomRight.y = 0.0;
  stru_60CBA730.rotation = 0;
  dword_60CBA790 = 1061997773;
  dword_60CBA794 = 1061997773;
  dword_60CBA798 = 1061997773;
  return 1061997773;
}
