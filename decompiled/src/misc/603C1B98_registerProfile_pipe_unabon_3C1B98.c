/* registerProfile_pipe_unabon_3C1B98
 * address: 0x603C1B98   size: 1136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_pipe_unabon_3C1B98()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r0
  _DWORD *v2; // r0
  sead__SafeString v4[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C987F8 = 0;
  dword_60C987FC = 0;
  dword_60C98800 = 0;
  dword_60C987F0 = 11930464;
  dword_60C987F4 = (int)(float)((float)(2147500000.0 * 3.0) / 180.0);
  dword_60C98644 = (int)&sead__SafeStringBase__vtable;
  *(_DWORD *)algn_60C98648 = "unabon_swim";
  *(_DWORD *)&algn_60C98648[4] = &sead__SafeStringBase__vtable;
  dword_60C98650 = (int)"unabon_fire_head";
  dword_60C98654 = (int)&sead__SafeStringBase__vtable;
  dword_60C98658 = (int)"unabon_fire_body";
  dword_60C9865C = (int)&sead__SafeStringBase__vtable;
  dword_60C98660 = (int)"unabon_dead";
  sub_60000288();
  dword_60C98664 = (int)&sead__SafeStringBase__vtable;
  *(_DWORD *)algn_60C98668 = "unabon_S_swim";
  *(_DWORD *)&algn_60C98668[4] = &sead__SafeStringBase__vtable;
  dword_60C98670 = (int)"unabon_S_fire_head";
  dword_60C98674 = (int)&sead__SafeStringBase__vtable;
  dword_60C98678 = (int)"unabon_S_fire_body";
  dword_60C9867C = (int)&sead__SafeStringBase__vtable;
  dword_60C98680 = (int)"unabon_S_dead";
  sub_60000288();
  dword_60C98684 = (int)&sead__SafeStringBase__vtable;
  *(_DWORD *)algn_60C98688 = "skl_root";
  *(_DWORD *)&algn_60C98688[4] = &sead__SafeStringBase__vtable;
  dword_60C98690 = (int)"body01";
  dword_60C98694 = (int)&sead__SafeStringBase__vtable;
  dword_60C98698 = (int)"body02";
  dword_60C9869C = (int)&sead__SafeStringBase__vtable;
  dword_60C986A0 = (int)"body03";
  dword_60C986A4 = (int)&sead__SafeStringBase__vtable;
  dword_60C986A8 = (int)"body04";
  dword_60C986AC = (int)&sead__SafeStringBase__vtable;
  dword_60C986B0 = (int)"body05";
  dword_60C986B4 = (int)&sead__SafeStringBase__vtable;
  dword_60C986B8 = (int)"body06";
  dword_60C986BC = (int)&sead__SafeStringBase__vtable;
  dword_60C986C0 = (int)"body07";
  dword_60C986C4 = (int)&sead__SafeStringBase__vtable;
  dword_60C986C8 = (int)"body08";
  dword_60C986CC = (int)&sead__SafeStringBase__vtable;
  dword_60C986D0 = (int)"body09";
  dword_60C986D4 = (int)&sead__SafeStringBase__vtable;
  dword_60C986D8 = (int)"body10";
  dword_60C986DC = (int)&sead__SafeStringBase__vtable;
  dword_60C986E0 = (int)"body11";
  dword_60C986E4 = (int)&sead__SafeStringBase__vtable;
  dword_60C986E8 = (int)"body12";
  dword_60C986EC = (int)&sead__SafeStringBase__vtable;
  dword_60C986F0 = (int)"body13";
  dword_60C986F4 = (int)&sead__SafeStringBase__vtable;
  dword_60C986F8 = (int)"body14";
  dword_60C986FC = (int)&sead__SafeStringBase__vtable;
  dword_60C98700 = (int)"body15";
  dword_60C98704 = (int)&sead__SafeStringBase__vtable;
  dword_60C98708 = (int)"body16";
  dword_60C9870C = (int)&sead__SafeStringBase__vtable;
  dword_60C98710 = (int)"body17";
  dword_60C98714 = (int)&sead__SafeStringBase__vtable;
  dword_60C98718 = (int)"body18";
  dword_60C9871C = (int)&sead__SafeStringBase__vtable;
  dword_60C98720 = (int)"body19";
  dword_60C98724 = (int)&sead__SafeStringBase__vtable;
  dword_60C98728 = (int)"body20";
  sub_60000288();
  v4[0].vtable = &sead__SafeStringBase__vtable;
  v4[0].cstr = (char *)&unk_60AC5DE7;
  Profile__ctor(&stru_60C9872C, Actor_pipe_unabon_build, 0x294u, v4, &stru_60B00E20, 16);
  v4[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60BF6AF8;
  v4[0].cstr = (char *)&unk_60AC5DF4;
  Profile__ctor(&stru_60C98744, Actor_pipe_unabon_build, 0x295u, v4, &stru_60B00E44, 16);
  v4[0].vtable = &sead__SafeStringBase__vtable;
  *v1 = &off_60BF6B04;
  v4[0].cstr = (char *)&unk_60AC5E07;
  Profile__ctor(&stru_60C9875C, Actor_pipe_unabon_build, 0x296u, v4, &stru_60B00E68, 16);
  *v2 = &off_60BF6B10;
  dword_60C98778 = CurrentStateID + 1;
  dword_60C9877C = 636;
  dword_60C98780 = 1;
  dword_60C98784 = 640;
  dword_60C98788 = 1;
  dword_60C9878C = 644;
  dword_60C98790 = 1;
  dword_60C98774 = (int)&off_60BF6E14;
  dword_60C98794 = (int)&NullState;
  dword_60C987A0 = 648;
  dword_60C987A4 = 1;
  dword_60C987A8 = 652;
  dword_60C987AC = 1;
  dword_60C987B0 = 656;
  dword_60C987B4 = 1;
  unk_60C98798 = &off_60BF6E14;
  unk_60C9879C = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60C987B8 = (int)&NullState;
  unk_60C987C0 = CurrentStateID;
  unk_60C987C4 = 456;
  dword_60C987C8 = 1;
  dword_60C987CC = 460;
  dword_60C987D0 = 1;
  dword_60C987D4 = 464;
  dword_60C987D8 = 1;
  dword_60C987BC = (int)&off_60BF6E14;
  dword_60C987DC = (int)&stru_60C90710;
  return &stru_60C90710;
}
