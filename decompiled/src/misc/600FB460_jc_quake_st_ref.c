/* jc_quake_st_ref
 * address: 0x600FB460   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *jc_quake_st_ref()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C85D10 = 0;
  dword_60C85D14 = 0;
  dword_60C85D18 = 0;
  dword_60C85D1C = (int)&sead__SafeStringBase__vtable;
  dword_60C85D20 = (int)"jc_wait";
  dword_60C85D24 = (int)&sead__SafeStringBase__vtable;
  dword_60C85D28 = (int)"jc_quake_st";
  dword_60C85D2C = (int)&sead__SafeStringBase__vtable;
  dword_60C85D30 = (int)"jc_quake_ed";
  dword_60C85D34 = (int)&sead__SafeStringBase__vtable;
  dword_60C85D38 = (int)"jc_delight";
  sub_60000288();
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABDF9D;
  Profile__ctor(&stru_60C85C88, Actor_W8course_BowserJr_build, 0x2CBu, &v2, &stru_60AF6108, 0);
  *v0 = &off_60BCF208;
  dword_60C85CA4 = CurrentStateID + 1;
  dword_60C85CA8 = 1104;
  dword_60C85CAC = 1;
  dword_60C85CB0 = 1108;
  dword_60C85CB4 = 1;
  dword_60C85CB8 = 1112;
  dword_60C85CBC = 1;
  dword_60C85CA0 = (int)&off_60BCF6AC;
  dword_60C85CC0 = (int)&dword_60C8416C;
  dword_60C85CD0 = 1;
  dword_60C85CD4 = 1120;
  dword_60C85CD8 = 1;
  dword_60C85CDC = 1124;
  dword_60C85CE0 = 1;
  unk_60C85CC4 = &off_60BCF6AC;
  unk_60C85CC8 = CurrentStateID + 2;
  unk_60C85CCC = 1116;
  CurrentStateID += 3;
  dword_60C85CE4 = (int)&unk_60C84190;
  unk_60C85CEC = CurrentStateID;
  unk_60C85CF0 = 1128;
  dword_60C85CF4 = 1;
  dword_60C85CF8 = 1132;
  dword_60C85CFC = 1;
  dword_60C85D00 = 1136;
  dword_60C85D04 = 1;
  dword_60C85CE8 = (int)&off_60BCF6AC;
  dword_60C85D08 = (int)&unk_60C841B4;
  return &unk_60C841B4;
}
