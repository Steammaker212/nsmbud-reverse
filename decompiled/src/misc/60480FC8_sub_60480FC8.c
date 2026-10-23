/* sub_60480FC8
 * address: 0x60480FC8   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60480FC8(_DWORD *a1)
{
  _DWORD *v2; // r5
  char v3; // r12
  int result; // r0
  int v5; // [sp+8h] [bp-20h] BYREF
  const char *v6; // [sp+Ch] [bp-1Ch]

  v2 = a1 + 515;
  sub_604734E4(a1 + 515, 0);
  sub_60475C8C((int)v2);
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = "BaloonGuide.bflyt";
  message_ref(v2, &v5, 0, 0, 0);
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = "Pa_KeyAssign_00";
  ((void (__fastcall *)(_DWORD *, _DWORD *, int *, _DWORD, _DWORD))sub_6050A4EC)(a1 + 1402, v2, &v5, 0, 0);
  a1[1412] = 1;
  a1[1411] |= 1u;
  if ( ((unsigned int)&dword_60C9EDE0 & ~(1615335580 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9EDE0) )
  {
    dword_60C9EDF0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EDF4 = dword_60C9ECDC;
    dword_60C9EDF8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EDFC = dword_60C9ECE4;
    sub_60000288();
    _cxa_guard_release(&dword_60C9EDE0);
  }
  v5 = 2;
  sub_60476030((int)v2, &dword_60C9EDF0, &v5);
  result = sub_60473B4C((int)v2);
  a1[3207] = result;
  return result;
}
