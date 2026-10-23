/* registerProfile_ZN10ParaGoomba5buildEPK1_3635E0
 * address: 0x603635E0   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_ZN10ParaGoomba5buildEPK1_3635E0()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C95940 = 0;
  dword_60C95944 = 0;
  dword_60C95948 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC51C1;
  Profile__ctor(&stru_60C958D8, ParaGoomba__build, 0x1D5u, &v1, &stru_60AFFAEC, 18);
  dword_60C9594C[0] = (int)&sead__SafeStringBase__vtable;
  dword_60C958F4 = CurrentStateID + 1;
  dword_60C958F0 = (int)&off_60BEFC94;
  dword_60C958F8 = (int)wing_kuri_ref;
  dword_60C958FC = 0;
  dword_60C95900 = (int)&loc_60362CF4;
  dword_60C95904 = 0;
  dword_60C95908 = (int)nullsub_3416;
  dword_60C9590C = 0;
  CurrentStateID += 2;
  dword_60C95914 = CurrentStateID;
  dword_60C95910 = (int)&off_60BEFC94;
  dword_60C95918 = (int)sub_60362E68;
  dword_60C9591C = 0;
  dword_60C95920 = (int)sub_60362EB4;
  dword_60C95924 = 0;
  dword_60C95928 = (int)nullsub_3417;
  dword_60C9592C = 0;
  dword_60C95950 = (int)"kuribo";
  dword_60C95954 = (int)&sead__SafeStringBase__vtable;
  dword_60C95958 = (int)"kakibo";
  return sub_60000288();
}
