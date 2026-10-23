/* Pa_VSIcon_ref
 * address: 0x604E6680   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_VSIcon_ref(int a1)
{
  char v1; // r12

  if ( ((unsigned int)&dword_60CA5AE0[1] & ~(1615750812 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA5AE0[1]) )
  {
    dword_60CA5B50 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B54 = (int)"Pa_VSIcon_00";
    dword_60CA5B58 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B5C = (int)"Pa_VSIcon_01";
    dword_60CA5B60 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B64 = (int)"Pa_VSIcon_02";
    dword_60CA5B68 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B6C = (int)"Pa_VSIcon_03";
    sub_60000288();
    _cxa_guard_release(&dword_60CA5AE0[1]);
  }
  sub_60506F20(a1 + 26296, FIELD_U32(a1, 4), &dword_60CA5B50);
  sub_60506F20(a1 + 29916, FIELD_U32(a1, 4), &dword_60CA5B58);
  sub_60506F20(a1 + 33536, FIELD_U32(a1, 4), &dword_60CA5B60);
  return sub_60506F20(a1 + 37156, FIELD_U32(a1, 4), &dword_60CA5B68);
}
