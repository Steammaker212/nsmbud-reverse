/* registerProfile_CourseSelectfort_bosu_205F3C
 * address: 0x60205F3C   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_CourseSelectfort_bosu_205F3C()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C8C7C0 = 0;
  dword_60C8C7C4 = 0;
  dword_60C8C7C8 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC1E89;
  Profile__ctor(&stru_60C8C660, Actor_CourseSelectfort_bosu_build, 0x375u, &v2, 0, 0);
  dword_60C8C7CC = (int)&sead__SafeStringBase__vtable;
  *v0 = &off_60BD87C4;
  dword_60C8C7D0 = (int)"F008";
  dword_60C8C7D4 = (int)&sead__SafeStringBase__vtable;
  dword_60C8C7D8 = (int)"W103";
  sub_60000288();
  dword_60C8C67C = CurrentStateID + 1;
  dword_60C8C680 = 92;
  dword_60C8C684 = 1;
  dword_60C8C688 = 96;
  dword_60C8C68C = 1;
  dword_60C8C690 = 100;
  dword_60C8C694 = 1;
  dword_60C8C678 = (int)&off_60BD88A0;
  dword_60C8C698 = (int)&NullState;
  dword_60C8C6A8 = 1;
  dword_60C8C6AC = 108;
  dword_60C8C6B0 = 1;
  dword_60C8C6B4 = 112;
  dword_60C8C6B8 = 1;
  unk_60C8C69C = &off_60BD88A0;
  unk_60C8C6A0 = CurrentStateID + 2;
  unk_60C8C6A4 = 104;
  dword_60C8C6BC = (int)&NullState;
  dword_60C8C6C8 = 116;
  dword_60C8C6CC = 1;
  dword_60C8C6D0 = 120;
  dword_60C8C6D4 = 1;
  dword_60C8C6D8 = 124;
  dword_60C8C6DC = 1;
  unk_60C8C6C0 = &off_60BD88A0;
  unk_60C8C6C4 = CurrentStateID + 3;
  dword_60C8C6E0 = (int)&NullState;
  dword_60C8C6EC = 128;
  dword_60C8C6F0 = 1;
  dword_60C8C6F4 = 132;
  dword_60C8C6F8 = 1;
  dword_60C8C6FC = 136;
  dword_60C8C700 = 1;
  unk_60C8C6E4 = &off_60BD88A0;
  unk_60C8C6E8 = CurrentStateID + 4;
  dword_60C8C704 = (int)&NullState;
  dword_60C8C710 = 140;
  dword_60C8C714 = 1;
  dword_60C8C718 = 144;
  dword_60C8C71C = 1;
  dword_60C8C720 = 148;
  dword_60C8C724 = 1;
  unk_60C8C708 = &off_60BD88A0;
  unk_60C8C70C = CurrentStateID + 5;
  dword_60C8C728 = (int)&NullState;
  dword_60C8C734 = 152;
  dword_60C8C738 = 1;
  dword_60C8C73C = 156;
  dword_60C8C740 = 1;
  dword_60C8C744 = 160;
  dword_60C8C748 = 1;
  unk_60C8C72C = &off_60BD88A0;
  unk_60C8C730 = CurrentStateID + 6;
  dword_60C8C74C = (int)&NullState;
  dword_60C8C758 = 164;
  dword_60C8C75C = 1;
  dword_60C8C760 = 168;
  dword_60C8C764 = 1;
  dword_60C8C768 = 172;
  dword_60C8C76C = 1;
  unk_60C8C750 = &off_60BD88A0;
  unk_60C8C754 = CurrentStateID + 7;
  dword_60C8C770 = (int)&NullState;
  dword_60C8C77C = 176;
  dword_60C8C780 = 1;
  dword_60C8C784 = 180;
  dword_60C8C788 = 1;
  dword_60C8C78C = 184;
  dword_60C8C790 = 1;
  unk_60C8C774 = &off_60BD88A0;
  unk_60C8C778 = CurrentStateID + 8;
  dword_60C8C794 = (int)&NullState;
  CurrentStateID += 9;
  unk_60C8C79C = CurrentStateID;
  unk_60C8C7A0 = 188;
  dword_60C8C7A4 = 1;
  dword_60C8C7A8 = 192;
  dword_60C8C7AC = 1;
  dword_60C8C7B0 = 196;
  dword_60C8C7B4 = 1;
  dword_60C8C798 = (int)&off_60BD88A0;
  dword_60C8C7B8 = (int)&NullState;
  return 1;
}
