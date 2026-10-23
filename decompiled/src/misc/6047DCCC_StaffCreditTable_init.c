/* StaffCreditTable_init
 * address: 0x6047DCCC   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall StaffCreditTable_init(int a1)
{
  char v1; // r12

  if ( ((unsigned int)&unk_60C9EB40 & ~(1615322340 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C9EB40) )
  {
    dword_60C9EB44 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB48 = (int)"challenge_mode";
    dword_60C9EB4C = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB50 = (int)"course_name";
    dword_60C9EB54 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB58 = (int)"course_name_R-Dash";
    dword_60C9EB5C = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB60 = (int)"message";
    dword_60C9EB64 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB68 = (int)"staff_credit";
    dword_60C9EB6C = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB70 = (int)"staff_credit_R-Dash";
    dword_60C9EB74 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB78 = (int)"world_name";
    dword_60C9EB7C = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB80 = (int)"Help";
    dword_60C9EB84 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB88 = (int)"OverlayDialog";
    dword_60C9EB8C = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB90 = (int)"VSModeSelect";
    dword_60C9EB94 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB98 = (int)"staff_credit_NX";
    dword_60C9EB9C = (int)&sead__SafeStringBase__vtable;
    dword_60C9EBA0 = (int)"NXStaffCredit";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60C9EB40);
  }
  return s_msbt_ref(FIELD_U32(dword_60CD0C84, 852), (char *)&unk_60C9EB40 + 8 * a1 + 4);
}
