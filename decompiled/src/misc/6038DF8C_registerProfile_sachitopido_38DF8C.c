/* registerProfile_sachitopido_38DF8C
 * address: 0x6038DF8C   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_sachitopido_38DF8C())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C96CC8 = 0;
  dword_60C96CCC = 0;
  dword_60C96CD0 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC576D;
  Profile__ctor(&stru_60C96CD4, Actor_sachitopido_build, 0x332u, &v2, &stru_60B007BC, 18);
  *v0 = &off_60BF39FC;
  dword_60C96CF0 = CurrentStateID + 1;
  dword_60C96CEC = (int)&off_60BF3D30;
  dword_60C96CF4 = (int)sub_60387FB8;
  dword_60C96CF8 = 0;
  dword_60C96CFC = (int)&loc_60388120;
  dword_60C96D00 = 0;
  dword_60C96D04 = (int)nullsub_3471;
  dword_60C96D08 = 0;
  unk_60C96D0C = &off_60BF3D30;
  unk_60C96D10 = CurrentStateID + 2;
  dword_60C96D14 = (int)search_ref_38899C;
  dword_60C96D18 = 0;
  dword_60C96D1C = (int)&loc_60388A34;
  dword_60C96D20 = 0;
  dword_60C96D24 = (int)nullsub_3472;
  dword_60C96D28 = 0;
  unk_60C96D2C = &off_60BF3D30;
  unk_60C96D30 = CurrentStateID + 3;
  dword_60C96D34 = (int)search_ref_388F04;
  dword_60C96D38 = 0;
  dword_60C96D3C = (int)SE_EMY_SR_TORPEDO_MOVE_ref_388FC4;
  dword_60C96D40 = 0;
  dword_60C96D44 = (int)nullsub_3473;
  dword_60C96D48 = 0;
  unk_60C96D4C = &off_60BF3D30;
  unk_60C96D50 = CurrentStateID + 4;
  dword_60C96D54 = (int)search_ref_3893B0;
  dword_60C96D58 = 0;
  dword_60C96D5C = (int)SE_EMY_SR_TORPEDO_MOVE_ref_389424;
  dword_60C96D60 = 0;
  dword_60C96D64 = (int)nullsub_3474;
  dword_60C96D68 = 0;
  unk_60C96D6C = &off_60BF3D30;
  unk_60C96D70 = CurrentStateID + 5;
  dword_60C96D74 = (int)search_ref_389650;
  dword_60C96D78 = 0;
  dword_60C96D7C = (int)SE_EMY_SR_TORPEDO_MOVE_ref_3896B8;
  dword_60C96D80 = 0;
  dword_60C96D84 = (int)nullsub_3475;
  dword_60C96D88 = 0;
  unk_60C96D8C = &off_60BF3D30;
  unk_60C96D90 = CurrentStateID + 6;
  dword_60C96D94 = (int)search_ref_389934;
  dword_60C96D98 = 0;
  dword_60C96D9C = (int)&loc_60389A4C;
  dword_60C96DA0 = 0;
  dword_60C96DA4 = (int)nullsub_3476;
  dword_60C96DA8 = 0;
  dword_60C96DAC = (int)&off_60BF3D30;
  unk_60C96DB0 = CurrentStateID + 7;
  dword_60C96DB4 = (int)&loc_6038A184;
  dword_60C96DB8 = 0;
  dword_60C96DBC = (int)&loc_6038A1D4;
  dword_60C96DC0 = 0;
  dword_60C96DC4 = (int)nullsub_3477;
  dword_60C96DC8 = 0;
  CurrentStateID += 8;
  dword_60C96DD0 = CurrentStateID;
  dword_60C96DCC = (int)&off_60BF3D30;
  dword_60C96DD4 = (int)sub_6038A5D0;
  dword_60C96DD8 = 0;
  dword_60C96DDC = (int)&loc_6038A714;
  dword_60C96DE0 = 0;
  dword_60C96DE4 = (int)nullsub_3478;
  dword_60C96DE8 = 0;
  return nullsub_3478;
}
