/* sub_60367864
 * address: 0x60367864   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60367864(int a1)
{
  char v1; // r12
  signed int result; // r0

  FIELD_U32(a1, 116) = -988004352;
  if ( ((unsigned int)&dword_60C95E20 & ~(1614182536 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C95E20) )
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
  if ( FIELD_U32(a1, 6304) )
  {
    FIELD_U32(a1, 6304) = 0;
    sub_60421AD4(FIELD_U32(a1, 6300));
  }
  FIELD_F32(a1, 120) = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 2.5;
  FIELD_U32(a1, 6316) = 13;
  result = ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &stru_60B00344, 0);
  FIELD_U32(a1, 624) = 0;
  return result;
}
