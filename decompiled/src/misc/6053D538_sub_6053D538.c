/* sub_6053D538
 * address: 0x6053D538   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053D538(_DWORD *a1)
{
  char v1; // r12
  int result; // r0
  int (**v4)(); // [sp+Ch] [bp-2Ch] BYREF
  const char *v5; // [sp+10h] [bp-28h]

  if ( ((unsigned int)&dword_60CAB920[9] & ~(1616106840 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB920[9]) )
  {
    dword_60CAB9B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB9B4 = (int)"Pa_CancelDelete_00";
    dword_60CAB9B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB9BC = (int)"Pa_CancelCopy_00";
    dword_60CAB9C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB9C4 = (int)"Pa_CancelWhich_00";
    dword_60CAB9C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB9CC = (int)"Pa_Return_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB920[9]);
  }
  v4 = &sead__SafeStringBase__vtable;
  v5 = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 13660), (int)(a1 + 3023), &dword_60CAB9B0, &v4, 1, 0);
  a1[13670] = 2;
  a1[13669] |= 1u;
  v4 = &sead__SafeStringBase__vtable;
  v5 = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 15464), (int)(a1 + 3023), &dword_60CAB9B8, &v4, 1, 0);
  a1[15474] = 2;
  a1[15473] |= 1u;
  v4 = &sead__SafeStringBase__vtable;
  v5 = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 17268), (int)(a1 + 3023), &dword_60CAB9C0, &v4, 1, 0);
  a1[17278] = 2;
  a1[17277] |= 1u;
  v4 = &sead__SafeStringBase__vtable;
  v5 = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 19072), (int)(a1 + 3023), &dword_60CAB9C8, &v4, 1, 0);
  a1[19082] = 2;
  result = a1[19081] | 1;
  a1[19081] = result;
  return result;
}
