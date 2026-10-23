/* Pa_IconB_ref
 * address: 0x604E6470   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_IconB_ref(int a1)
{
  char v1; // r12

  if ( ((unsigned int)dword_60CA5AE0 & ~(1615750280 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CA5AE0) )
  {
    dword_60CA5B14 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B18 = (int)"Pa_IconB_00";
    dword_60CA5B1C = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B20 = (int)"Pa_IconB_01";
    dword_60CA5B24 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B28 = (int)"Pa_IconB_02";
    sub_60000288();
    _cxa_guard_release(dword_60CA5AE0);
  }
  sub_60506F20(a1 + 4576, FIELD_U32(a1, 4), &dword_60CA5B14);
  sub_60506F20(a1 + 8196, FIELD_U32(a1, 4), &dword_60CA5B1C);
  return sub_60506F20(a1 + 11816, FIELD_U32(a1, 4), &dword_60CA5B24);
}
