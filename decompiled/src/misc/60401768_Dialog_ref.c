/* Dialog_ref
 * address: 0x60401768   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Dialog_ref(_DWORD *a1, int a2, int a3)
{
  char v3; // r12
  int result; // r0

  if ( ((unsigned int)&dword_60C99E58 & ~(1614813060 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C99E58) )
  {
    dword_60C99E48[0] = (int)&sead__SafeStringBase__vtable;
    dword_60C99E4C = (int)"HUD";
    dword_60C99E50 = (int)&sead__SafeStringBase__vtable;
    dword_60C99E54 = (int)"Dialog";
    sub_60000288();
    _cxa_guard_release(&dword_60C99E58);
  }
  *a1 = &sead__SafeStringBase__vtable;
  result = dword_60C99E48[2 * a3 + 1];
  a1[1] = result;
  return result;
}
