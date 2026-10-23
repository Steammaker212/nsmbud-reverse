/* Pa_Zanki_ref
 * address: 0x604C5DA4   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_Zanki_ref(int a1)
{
  char v1; // r12

  if ( ((unsigned int)&dword_60CA2EF0 & ~(1615617468 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2EF0) )
  {
    dword_60CA2F88 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2F8C = (int)"Pa_Zanki_00";
    dword_60CA2F90 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2F94 = (int)"Pa_Zanki_01";
    dword_60CA2F98 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2F9C = (int)"Pa_Zanki_02";
    dword_60CA2FA0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2FA4 = (int)"Pa_Zanki_03";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2EF0);
  }
  sub_6050D95C(a1 + 14192, a1 + 48, &dword_60CA2F88);
  sub_6050D95C(a1 + 17796, a1 + 48, &dword_60CA2F90);
  sub_6050D95C(a1 + 21400, a1 + 48, &dword_60CA2F98);
  return sub_6050D95C(a1 + 25004, a1 + 48, &dword_60CA2FA0);
}
