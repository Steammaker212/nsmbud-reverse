/* sub_604E67B8
 * address: 0x604E67B8   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E67B8(int a1)
{
  char v1; // r12

  if ( ((unsigned int)&dword_60CA5AE0[3] & ~(1615751124 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA5AE0[3]) )
  {
    dword_60CA5B70 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B74 = (int)"Pa_Zanki1P_00";
    dword_60CA5B78 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B7C = (int)"Pa_Zanki2P_00";
    dword_60CA5B80 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B84 = (int)"Pa_Zanki3P_00";
    dword_60CA5B88 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5B8C = (int)"Pa_Zanki4P_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA5AE0[3]);
  }
  sub_6050E38C(a1 + 44360, FIELD_U32(a1, 4), &dword_60CA5B70);
  sub_6050E38C(a1 + 48028, FIELD_U32(a1, 4), &dword_60CA5B78);
  sub_6050E38C(a1 + 51696, FIELD_U32(a1, 4), &dword_60CA5B80);
  return sub_6050E38C(a1 + 55364, FIELD_U32(a1, 4), &dword_60CA5B88);
}
