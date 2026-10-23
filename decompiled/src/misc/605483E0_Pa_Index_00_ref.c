/* Pa_Index_00_ref
 * address: 0x605483E0   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_Index_00_ref(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-1Ch] BYREF
  _DWORD v5[6]; // [sp+8h] [bp-18h] BYREF

  if ( ((unsigned int)&dword_60CAC6A8[3] & ~(1616151552 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAC6A8[3]) )
  {
    dword_60CAC6C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC6CC = dword_60CAC3F4;
    dword_60CAC6D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC6D4 = dword_60CAC3FC;
    sub_60000288();
    _cxa_guard_release(&dword_60CAC6A8[3]);
  }
  sub_604734E4((_DWORD *)(a1 + 5812), 0);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "Pa_Index_00";
  sub_60476388((_DWORD *)(a1 + 5812), a1 + 40, v5);
  v4 = 2;
  sub_60474848(a1 + 5812, &dword_60CAC6C8, &v4);
  return (*(int (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3560)
                                                                                             + 12))(
           FIELD_U32(a1, 3560),
           sub_609909D8,
           0);
}
