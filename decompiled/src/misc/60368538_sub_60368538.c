/* sub_60368538
 * address: 0x60368538   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60368538(int a1)
{
  char v1; // r12
  float result; // s0

  if ( ((unsigned int)&dword_60C95E20 & ~(1614185808 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C95E20) )
  {
    dword_60C95E3C = (int)&sead__SafeStringBase__vtable;
    dword_60C95E40 = (int)"attack_fast";
    dword_60C95E44 = (int)&sead__SafeStringBase__vtable;
    dword_60C95E48 = (int)"attack_slow";
    dword_60C95E4C = (int)&sead__SafeStringBase__vtable;
    dword_60C95E50 = (int)"damage";
    dword_60C95E54 = (int)&sead__SafeStringBase__vtable;
    dword_60C95E58 = (int)"dead";
    dword_60C95E5C = (int)&sead__SafeStringBase__vtable;
    dword_60C95E60 = (int)"fly";
    dword_60C95E64 = (int)&sead__SafeStringBase__vtable;
    dword_60C95E68 = (int)"freeze";
    dword_60C95E6C = (int)&sead__SafeStringBase__vtable;
    dword_60C95E70 = (int)"turn";
    sub_60000288();
    _cxa_guard_release(&dword_60C95E20);
  }
  if ( FIELD_U32(a1, 6304) != 1 )
  {
    FIELD_U32(a1, 6304) = 1;
    sub_60421AD4(FIELD_U32(a1, 6300));
  }
  FIELD_U32(a1, 104) = 1050673152;
  result = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 1.25;
  FIELD_F32(a1, 132) = result;
  return result;
}
