/* registerProfile_CourseSelectBoo_20069C
 * address: 0x6020069C   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_CourseSelectBoo_20069C()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C8C378 = 0;
  dword_60C8C37C = 0;
  dword_60C8C380 = 0;
  dword_60C8C384 = 1120403456;
  dword_60C8C388 = 1120403456;
  dword_60C8C38C = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC1DBF;
  Profile__ctor(&stru_60C8C248, Actor_CourseSelectBoo_build, 0x373u, &v2, 0, 0);
  *v0 = &off_60BD84C0;
  dword_60C8C264 = CurrentStateID + 1;
  dword_60C8C268 = 92;
  dword_60C8C26C = 1;
  dword_60C8C270 = 96;
  dword_60C8C274 = 1;
  dword_60C8C278 = 100;
  dword_60C8C27C = 1;
  dword_60C8C260 = (int)&off_60BD8584;
  dword_60C8C280 = (int)&NullState;
  dword_60C8C290 = 1;
  dword_60C8C294 = 108;
  dword_60C8C298 = 1;
  dword_60C8C29C = 112;
  dword_60C8C2A0 = 1;
  unk_60C8C284 = &off_60BD8584;
  unk_60C8C288 = CurrentStateID + 2;
  unk_60C8C28C = 104;
  dword_60C8C2A4 = (int)&NullState;
  dword_60C8C2B4 = 1;
  dword_60C8C2B8 = 120;
  dword_60C8C2BC = 1;
  dword_60C8C2C0 = 124;
  dword_60C8C2C4 = 1;
  unk_60C8C2A8 = &off_60BD8584;
  unk_60C8C2AC = CurrentStateID + 3;
  unk_60C8C2B0 = 116;
  dword_60C8C2C8 = (int)&NullState;
  dword_60C8C2D8 = 1;
  dword_60C8C2DC = 132;
  dword_60C8C2E0 = 1;
  dword_60C8C2E4 = 136;
  dword_60C8C2E8 = 1;
  unk_60C8C2CC = &off_60BD8584;
  unk_60C8C2D0 = CurrentStateID + 4;
  unk_60C8C2D4 = 128;
  dword_60C8C2EC = (int)&NullState;
  dword_60C8C2FC = 1;
  dword_60C8C300 = 144;
  dword_60C8C304 = 1;
  dword_60C8C308 = 148;
  dword_60C8C30C = 1;
  unk_60C8C2F0 = &off_60BD8584;
  unk_60C8C2F4 = CurrentStateID + 5;
  unk_60C8C2F8 = 140;
  dword_60C8C310 = (int)&NullState;
  dword_60C8C320 = 1;
  dword_60C8C324 = 156;
  dword_60C8C328 = 1;
  dword_60C8C32C = 160;
  dword_60C8C330 = 1;
  unk_60C8C314 = &off_60BD8584;
  unk_60C8C318 = CurrentStateID + 6;
  unk_60C8C31C = 152;
  dword_60C8C334 = (int)&NullState;
  CurrentStateID += 7;
  unk_60C8C33C = CurrentStateID;
  unk_60C8C340 = 164;
  dword_60C8C344 = 1;
  dword_60C8C348 = 168;
  dword_60C8C34C = 1;
  dword_60C8C350 = 172;
  dword_60C8C354 = 1;
  dword_60C8C338 = (int)&off_60BD8584;
  dword_60C8C358 = (int)&NullState;
  return 1;
}
