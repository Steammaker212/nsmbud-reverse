/* sub_60537024
 * address: 0x60537024   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60537024(_DWORD *a1)
{
  char v1; // r12
  int (**v4)(); // [sp+Ch] [bp-2Ch] BYREF
  const char *v5; // [sp+10h] [bp-28h]

  if ( ((unsigned int)&dword_60CAB270[11] & ~(1616080964 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB270[11]) )
  {
    dword_60CAB328 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB32C = (int)"Pa_CancelDelete_00";
    dword_60CAB330 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB334 = (int)"Pa_CancelCopy_00";
    dword_60CAB338 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB33C = (int)"Pa_CancelWhich_00";
    dword_60CAB340 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB344 = (int)"Pa_Return_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB270[11]);
  }
  v4 = &sead__SafeStringBase__vtable;
  v5 = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 13676), (int)(a1 + 3023), &dword_60CAB328, &v4, 1, 0);
  a1[13686] = 2;
  a1[13685] |= 1u;
  sub_6050A8A4((int)(a1 + 13676));
  v4 = &sead__SafeStringBase__vtable;
  v5 = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 15480), (int)(a1 + 3023), &dword_60CAB330, &v4, 1, 0);
  a1[15490] = 2;
  a1[15489] |= 1u;
  sub_6050A8A4((int)(a1 + 15480));
  v4 = &sead__SafeStringBase__vtable;
  v5 = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 17284), (int)(a1 + 3023), &dword_60CAB338, &v4, 1, 0);
  a1[17294] = 2;
  a1[17293] |= 1u;
  sub_6050A8A4((int)(a1 + 17284));
  v4 = &sead__SafeStringBase__vtable;
  v5 = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 19088), (int)(a1 + 3023), &dword_60CAB340, &v4, 1, 0);
  a1[19098] = 2;
  a1[19097] |= 1u;
  return sub_6050A8A4((int)(a1 + 19088));
}
