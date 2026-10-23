/* registerProfile_W2Hammer_burosu_20A894
 * address: 0x6020A894   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_W2Hammer_burosu_20A894()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C8CA50 = 0;
  dword_60C8CA54 = 0;
  dword_60C8CA58 = 0;
  dword_60C8CA5C = 1103626240;
  dword_60C8CA60 = 0;
  dword_60C8CA64 = 1106247680;
  dword_60C8CA68 = 0;
  dword_60C8C8E8 = CurrentStateID + 1;
  dword_60C8C8EC = 160;
  dword_60C8C8F0 = 1;
  dword_60C8C8F4 = 164;
  dword_60C8C8F8 = 1;
  dword_60C8C8FC = 168;
  dword_60C8C900 = 1;
  dword_60C8C8E4 = (int)&off_60BD8AF0;
  dword_60C8C904 = (int)&NullState;
  dword_60C8C914 = 1;
  dword_60C8C918 = 176;
  dword_60C8C91C = 1;
  dword_60C8C920 = 180;
  dword_60C8C924 = 1;
  stru_60C8C908.vtable = &off_60BD8AF0;
  stru_60C8C908.id = CurrentStateID + 2;
  unk_60C8C910 = 172;
  dword_60C8C928 = (int)&NullState;
  dword_60C8C938 = 1;
  dword_60C8C93C = 188;
  dword_60C8C940 = 1;
  dword_60C8C944 = 192;
  dword_60C8C948 = 1;
  unk_60C8C92C = &off_60BD8AF0;
  unk_60C8C930 = CurrentStateID + 3;
  unk_60C8C934 = 184;
  dword_60C8C94C = (int)&NullState;
  dword_60C8C95C = 1;
  dword_60C8C960 = 200;
  dword_60C8C964 = 1;
  dword_60C8C968 = 204;
  dword_60C8C96C = 1;
  stru_60C8C950.vtable = &off_60BD8AF0;
  stru_60C8C950.id = CurrentStateID + 4;
  unk_60C8C958 = 196;
  dword_60C8C970 = (int)&NullState;
  dword_60C8C980 = 1;
  dword_60C8C984 = 212;
  dword_60C8C988 = 1;
  dword_60C8C98C = 216;
  dword_60C8C990 = 1;
  unk_60C8C974 = &off_60BD8AF0;
  unk_60C8C978 = CurrentStateID + 5;
  unk_60C8C97C = 208;
  dword_60C8C994 = (int)&NullState;
  dword_60C8C9A4 = 1;
  dword_60C8C9A8 = 152;
  dword_60C8C9AC = 1;
  dword_60C8C9B0 = 156;
  dword_60C8C9B4 = 1;
  unk_60C8C998 = &off_60BD8AF0;
  unk_60C8C99C = CurrentStateID + 6;
  unk_60C8C9A0 = 148;
  dword_60C8C9B8 = (int)&NullState;
  dword_60C8C9C8 = 1;
  dword_60C8C9CC = 224;
  dword_60C8C9D0 = 1;
  dword_60C8C9D4 = 228;
  dword_60C8C9D8 = 1;
  dword_60C8C9BC = (int)&off_60BD8AF0;
  unk_60C8C9C0 = CurrentStateID + 7;
  unk_60C8C9C4 = 220;
  dword_60C8C9DC = (int)&NullState;
  dword_60C8C9EC = 1;
  dword_60C8C9F0 = 236;
  dword_60C8C9F4 = 1;
  dword_60C8C9F8 = 240;
  dword_60C8C9FC = 1;
  unk_60C8C9E0 = &off_60BD8AF0;
  unk_60C8C9E4 = CurrentStateID + 8;
  unk_60C8C9E8 = 232;
  dword_60C8CA00 = (int)&NullState;
  CurrentStateID += 9;
  dword_60C8CA10 = 1;
  dword_60C8CA14 = 248;
  dword_60C8CA18 = 1;
  dword_60C8CA1C = 252;
  dword_60C8CA20 = 1;
  stru_60C8CA04.vtable = &off_60BD8AF0;
  stru_60C8CA04.id = CurrentStateID;
  unk_60C8CA0C = 244;
  dword_60C8CA24 = (int)&NullState;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1EBD;
  Profile__ctor(&stru_60C8CA28, Actor_W2Hammer_burosu_build, 0x366u, &v1, 0, 0);
  *result = &off_60BD89D0;
  return result;
}
