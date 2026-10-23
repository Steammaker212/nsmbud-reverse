/* sub_60483AF8
 * address: 0x60483AF8   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60483AF8(int a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  int v5[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v2);
  v5[0] = (int)&sead__SafeStringBase__vtable;
  v5[1] = (int)"ChallengeCompleteWindow.bflyt";
  message_ref(v2, v5, 0, 0, 0);
  Pa_KeyAssign_ref(a1);
  if ( ((unsigned int)&dword_60C9F114 & ~(1615346568 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9F114) )
  {
    dword_60C9F120 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F124 = dword_60C9F00C;
    dword_60C9F128 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F12C = dword_60C9F014;
    sub_60000288();
    _cxa_guard_release(&dword_60C9F114);
  }
  v5[0] = 2;
  return sub_60476030((int)v2, &dword_60C9F120, v5);
}
