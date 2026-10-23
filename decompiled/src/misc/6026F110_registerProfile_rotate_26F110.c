/* registerProfile_rotate_26F110
 * address: 0x6026F110   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rotate_26F110()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C8E880 = 0;
  dword_60C8E884 = 0;
  dword_60C8E888 = 0;
  dword_60C8E898 = 0;
  dword_60C8E894 = 0;
  dword_60C8E890 = 0;
  dword_60C8E88C = 0;
  dword_60C8E89C = -1048051712;
  dword_60C8E8A0 = 1103101952;
  dword_60C8E8A4 = 1099431936;
  dword_60C8E8A8 = 1082130432;
  dword_60C8E8AC = 0;
  dword_60C8E8BC = 0;
  dword_60C8E8B8 = 0;
  dword_60C8E8B4 = 0;
  dword_60C8E8B0 = 0;
  dword_60C8E8C0 = -1048051712;
  dword_60C8E8C4 = -1065353216;
  dword_60C8E8C8 = 1099431936;
  dword_60C8E8CC = -1044381696;
  dword_60C8E8D0 = 0;
  dword_60C8E8E0 = 0;
  dword_60C8E8DC = 0;
  dword_60C8E8D8 = 0;
  dword_60C8E8D4 = 0;
  dword_60C8E8E4 = -1054867456;
  dword_60C8E8E8 = 1101004800;
  dword_60C8E8EC = 1092616192;
  dword_60C8E8F0 = 1082130432;
  dword_60C8E8F4 = 0;
  dword_60C8E804 = CurrentStateID + 1;
  dword_60C8E800 = (int)&off_60BDC71C;
  dword_60C8E808 = (int)sub_6026D6D8;
  dword_60C8E80C = 0;
  dword_60C8E810 = (int)sub_6026D6E8;
  dword_60C8E814 = 0;
  dword_60C8E818 = (int)nullsub_3116;
  dword_60C8E81C = 0;
  dword_60C8E824 = CurrentStateID + 2;
  dword_60C8E820 = (int)&off_60BDC71C;
  dword_60C8E828 = (int)sub_6026D84C;
  dword_60C8E82C = 0;
  dword_60C8E830 = (int)sub_6026D878;
  dword_60C8E834 = 0;
  dword_60C8E838 = (int)nullsub_3117;
  dword_60C8E83C = 0;
  CurrentStateID += 3;
  dword_60C8E844 = CurrentStateID;
  dword_60C8E840 = (int)&off_60BDC71C;
  dword_60C8E848 = (int)nullsub_3118;
  dword_60C8E84C = 0;
  dword_60C8E850 = (int)sub_6026D938;
  dword_60C8E854 = 0;
  dword_60C8E858 = (int)nullsub_3119;
  dword_60C8E85C = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC2B98;
  Profile__ctor(&stru_60C8E860, Actor_rotate_build, 0x73u, &v0, &stru_60AFDBAC, 0);
}
