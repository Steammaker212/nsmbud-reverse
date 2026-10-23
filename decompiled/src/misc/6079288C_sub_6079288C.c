/* sub_6079288C
 * address: 0x6079288C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6079288C()
{
  dword_60CC4900 = (int)&sead__SafeStringBase__vtable;
  unk_60CC4904 = "jump";
  unk_60CC4908 = &sead__SafeStringBase__vtable;
  dword_60CC490C = (int)"jump_b";
  dword_60CC4910 = (int)&sead__SafeStringBase__vtable;
  dword_60CC4914 = (int)"jump_c";
  sub_60000288();
  dword_60CC4918 = (int)&sead__SafeStringBase__vtable;
  dword_60CC491C = (int)"2jmp_c_1";
  dword_60CC4920 = (int)&sead__SafeStringBase__vtable;
  dword_60CC4924 = (int)"2jump1";
  dword_60CC4928 = (int)&sead__SafeStringBase__vtable;
  dword_60CC492C = (int)"2jmp_b_1";
  sub_60000288();
  dword_60CC4930 = (int)&sead__SafeStringBase__vtable;
  dword_60CC4934 = (int)"2jmp_c_2";
  dword_60CC4938 = (int)&sead__SafeStringBase__vtable;
  dword_60CC493C = (int)"2jump2";
  dword_60CC4940 = (int)&sead__SafeStringBase__vtable;
  dword_60CC4944 = (int)"2jmp_b_2";
  return sub_60000288();
}
