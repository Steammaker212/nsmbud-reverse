/* registerProfile_CSW1_Item_208FC8
 * address: 0x60208FC8   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_CSW1_Item_208FC8())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C8C8C8 = 0;
  dword_60C8C8CC = 0;
  dword_60C8C8D0 = 0;
  dword_60C8C8D4 = 1103626240;
  dword_60C8C8D8 = 0;
  dword_60C8C8DC = 1101004800;
  dword_60C8C8E0 = 0;
  dword_60C8C8C0 = (int)&sead__SafeStringBase__vtable;
  dword_60C8C8C4 = (int)"wait2";
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC1EA9;
  Profile__ctor(&stru_60C8C7DC, Actor_CSW1_Item_build, 0x38Cu, &v2, 0, 0);
  *v0 = &off_60BD8910;
  dword_60C8C7F8 = CurrentStateID + 1;
  dword_60C8C7F4 = (int)&off_60BD89BC;
  dword_60C8C7FC = (int)nullsub_3017;
  dword_60C8C800 = 0;
  dword_60C8C804 = (int)nullsub_3018;
  dword_60C8C808 = 0;
  dword_60C8C80C = (int)nullsub_3019;
  dword_60C8C810 = 0;
  unk_60C8C814 = &off_60BD89BC;
  unk_60C8C818 = CurrentStateID + 2;
  dword_60C8C81C = (int)nullsub_3020;
  dword_60C8C820 = 0;
  dword_60C8C824 = (int)sub_602083C0;
  dword_60C8C828 = 0;
  dword_60C8C82C = (int)nullsub_3021;
  dword_60C8C830 = 0;
  stru_60C8C834.vtable = &off_60BD89BC;
  stru_60C8C834.id = CurrentStateID + 3;
  dword_60C8C83C = (int)sub_60208454;
  dword_60C8C840 = 0;
  dword_60C8C844 = (int)sub_60208460;
  dword_60C8C848 = 0;
  dword_60C8C84C = (int)nullsub_3022;
  dword_60C8C850 = 0;
  stru_60C8C854.vtable = &off_60BD89BC;
  stru_60C8C854.id = CurrentStateID + 4;
  dword_60C8C85C = (int)sub_6020849C;
  dword_60C8C860 = 0;
  dword_60C8C864 = (int)nullsub_3023;
  dword_60C8C868 = 0;
  dword_60C8C86C = (int)nullsub_3024;
  dword_60C8C870 = 0;
  stru_60C8C874.vtable = &off_60BD89BC;
  stru_60C8C874.id = CurrentStateID + 5;
  dword_60C8C87C = (int)sub_602084F4;
  dword_60C8C880 = 0;
  dword_60C8C884 = (int)sub_602085A0;
  dword_60C8C888 = 0;
  dword_60C8C88C = (int)nullsub_3025;
  dword_60C8C890 = 0;
  CurrentStateID += 6;
  dword_60C8C898 = CurrentStateID;
  dword_60C8C894 = (int)&off_60BD89BC;
  dword_60C8C89C = (int)sub_60208714;
  dword_60C8C8A0 = 0;
  dword_60C8C8A4 = (int)nullsub_3026;
  dword_60C8C8A8 = 0;
  dword_60C8C8AC = (int)nullsub_3027;
  dword_60C8C8B0 = 0;
  return nullsub_3027;
}
