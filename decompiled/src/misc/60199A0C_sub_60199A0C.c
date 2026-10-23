/* sub_60199A0C
 * address: 0x60199A0C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60199A0C(_DWORD *a1, int a2, int a3)
{
  char v3; // r12
  int result; // r0

  if ( ((unsigned int)&dword_60C89D14 & ~(1612290600 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C89D14) )
  {
    dword_60C89CEC[0] = (int)&sead__SafeStringBase__vtable;
    dword_60C89CF0 = (int)"Capture";
    dword_60C89CF4 = (int)&sead__SafeStringBase__vtable;
    dword_60C89CF8 = (int)"HUD";
    dword_60C89CFC = (int)&sead__SafeStringBase__vtable;
    dword_60C89D00 = (int)"Dialog";
    dword_60C89D04 = (int)&sead__SafeStringBase__vtable;
    dword_60C89D08 = (int)"Effect";
    dword_60C89D0C = (int)&sead__SafeStringBase__vtable;
    dword_60C89D10 = (int)"Overlay";
    sub_60000288();
    _cxa_guard_release(&dword_60C89D14);
  }
  *a1 = &sead__SafeStringBase__vtable;
  result = dword_60C89CEC[2 * a3 + 1];
  a1[1] = result;
  return result;
}
