/* Pa_IconA_ref
 * address: 0x604E6574   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_IconA_ref(int a1)
{
  char v1; // r12

  if ( ((unsigned int)&dword_60CA5AE0[2] & ~(1615750544 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA5AE0[2]) )
  {
    dword_60CA5B2C = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B30 = (int)"Pa_IconA_00";
    dword_60CA5B34 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B38 = (int)"Pa_IconA_01";
    dword_60CA5B3C = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B40 = (int)"Pa_IconA_02";
    sub_60000288();
    _cxa_guard_release(&dword_60CA5AE0[2]);
  }
  sub_60506F20(a1 + 15436, FIELD_U32(a1, 4), &dword_60CA5B2C);
  sub_60506F20(a1 + 19056, FIELD_U32(a1, 4), &dword_60CA5B34);
  return sub_60506F20(a1 + 22676, FIELD_U32(a1, 4), &dword_60CA5B3C);
}
