/* SpeedUp_bflyt_ref
 * address: 0x6054FDB0   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SpeedUp_bflyt_ref(int a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  int v5[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v2);
  v5[0] = (int)&sead__SafeStringBase__vtable;
  v5[1] = (int)"SpeedUp.bflyt";
  message_ref(v2, v5, 0, 0, 0);
  if ( ((unsigned int)dword_60CACF60 & ~(1616182836 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CACF60) )
  {
    dword_60CACF6C = (int)&sead__SafeStringBase__vtable;
    dword_60CACF70 = dword_60CACF04;
    sub_60000288();
    _cxa_guard_release(dword_60CACF60);
  }
  v5[0] = 1;
  sub_60476030((int)v2, &dword_60CACF6C, v5);
  sub_60473DE4(v2, 0, &dword_60CACF00, 0);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3552) + 104))(**(_DWORD **)(a1 + 3552));
  return sub_60473B58(v2, 0xEu, 0);
}
